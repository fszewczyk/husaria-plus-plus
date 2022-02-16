function husaria++(){
    cp $1 src/input.cpp
    g++ src/compiler.cpp
    ./a.out
    g++ src/temp.cpp
    rm src/temp.cpp 
    rm src/input.cpp
    rm src/dict.hpp
}