//
//  Huffman.cpp
//  Huffman Code
//
//  Created by Mary Tamry on 27.10.22.
//

#include "Huffman.hpp"

Huffman::Huffman(){
    s = "Mario is writing this code";
    char charInString[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    for(int i = 0; i < 27; i++){
        numOfChar[i] = 0;
    }
    numOfCharsFilled = 0;
};

void Huffman::TextStatistics(){
    for(int j = 0; j < 27; j++){
        for(int i = 0; i < s.length(); i++){
            if(tolower(s[i]) == charInString[j]){
                if(numOfChar[j] == 0){
                    numOfCharsFilled++;
                }
                numOfChar[j]++;
            }
        }
    }
}

void Huffman::CreateNodes() {
    for(int i = 0; i < 27; i++){
        if(numOfChar[i] != 0){

        }
    }
}