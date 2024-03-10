#include<iostream>


void DisplayAlphabetAndAscii(){

    for(char c = 'a'; c <= 'z'; c++){
        std::cout << "The letter: " << c << " ASCII representation: " << int(c) << '\n';
    }

}
