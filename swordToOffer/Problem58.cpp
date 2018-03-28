//
// Created by cw on 2017/10/22.
//

#include <string>
#include <iostream>
#include "Problem58.h"

void Problem58::reverseString(char* pStart, char* pEnd){
    if(pStart == nullptr || pEnd == nullptr){
        return;
    }
    while (pStart < pEnd){
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;

        pStart++;
        pEnd--;
    }
}

void Problem58::reverseSentence(char* pData){
    if(pData == nullptr){
        return;
    }
    char* pStart = pData;
    char* pEnd = pData;
    while (*pEnd != '\0'){
        pEnd++;
    }
    pEnd--;
    //反转整个句子
    reverseString(pStart, pEnd);

    pStart = pEnd = pData;
    while (*pStart != '\0'){
        if (*pStart == ' '){
            pStart++;
            pEnd++;
        } else if (*pEnd == ' ' || *pEnd == '\0'){
            //反转每个单词
            reverseString(pStart, pEnd-1);
            pStart = ++pEnd;
        } else{
            pEnd++;
        }
    }
}

void Problem58::test(){
    char string[]= "i am a student.";
    reverseSentence(string);
    std::cout<< string << std::endl;
}
