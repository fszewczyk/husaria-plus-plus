#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <vector>

void find_and_replace(std::string& file_contents, 
    const std::string& src, const std::string& dst) {
    int pos = file_contents.find(src);
    while (pos != std::string::npos) {
        file_contents.replace(pos, src.length(), dst);
        pos = file_contents.find(src, pos);
    }
}

std::string getfile( std::ifstream& is ) {
    std::string contents;
    
    for (char ch; is.get(ch); contents.push_back(ch)) {}
    return contents;
}

bool doesContainSpaces( std::string s ){
    size_t n = std::count(s.begin(), s.end(), ' ');
    return n > 0;
}

std::vector< std::pair <std::string,std::string> > załaduj(){
    std::vector< std::pair <std::string,std::string> > wielowyrazowe;
    std::fstream dict, dictHeader;
    dict.open("dict.txt", std::ios::in);
    dictHeader.open("src/dict.hpp", std::ios::out);

    std::string delimiter(": "), alias, origin;
    std::pair <std::string, std::string> aliasPair;

    if(dict.is_open() && dictHeader.is_open()){
        std::string line;
        while(getline(dict, line)){
            int splitter = line.find(delimiter);
            if (splitter <=0 ) continue;
            alias = line.substr(0, splitter);
            origin = line.substr(splitter+delimiter.length(), line.length()-1);
            if( doesContainSpaces(alias) || doesContainSpaces(origin) || origin=="include" ){
                aliasPair = std::make_pair(alias, origin);
                wielowyrazowe.push_back(aliasPair);
            } else {
                dictHeader << "#define " << alias << " " << origin << "\n";
            }
        }
    }

    return wielowyrazowe;
}

int main( int argc, char *argv[] ){
    std::vector< std::pair <std::string,std::string> > wielowyrazowe = załaduj();

    std::ifstream filein("src/input.cpp");
    std::ofstream fileout("src/temp.cpp");

    std::string contents = getfile(filein);
    fileout << "#include \"dict.hpp\"\n";

    for(int i = 0; i < wielowyrazowe.size(); i++){
        std::ifstream filein("src/temp.cpp");
        find_and_replace( contents, wielowyrazowe[i].first, wielowyrazowe[i].second );
    }
    fileout<<contents;
}

