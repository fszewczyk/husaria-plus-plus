function husaria++(){
    cp $1 źródła/.input.cpp
    g++ źródła/kompilator.cpp
    ./a.out
    g++ źródła/.temp.cpp
    rm źródła/.temp.cpp 
    rm źródła/.input.cpp
    rm źródła/dict.hpp
}