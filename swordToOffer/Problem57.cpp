//
// Created by cw on 2017/10/22.
//

#include <iostream>
#include "Problem57.h"

void Problem57::getNumsWithSum(int data[], int length, int* num1, int* num2, int s){
    if(data == nullptr || length<2){
        return;
    }
    int start = 0;
    int end = length-1;
    while (start<end){
        int sum = data[start] + data[end];
        if(sum == s){
            *num1 = data[start];
            *num2 = data[end];
            break;
        } else if (sum < s){
            start++;
        } else{
            end--;
        }
    }
    std::cout<< "num1: " << *num1 << ",num2: " << *num2<< std::endl;
}

void Problem57::test(){
    int data[] = {1,2,4,7,11,15};
    int length = 6;
    int num1 = 0;
    int num2 = 0;
    int sum = 15;
    getNumsWithSum(data, length, &num1, &num2, sum);
}

//输入一个正数，输出所有和为s的连续正数序列
void Problem57::getContinousSequence(int sum){
    int start = 1;
    int end = 2;
    while (start<end){
        int curSum =0;
        for (int i = start; i <=end ; ++i) {
            curSum += i;
        }
        if (curSum == sum){
            printContinousSequence(start, end);
            end++;
        } else if (curSum < sum){
            end++;
        } else{
            start++;
        }
    }
}

void Problem57::printContinousSequence(int start, int end){
    for (int i = start; i <= end; ++i) {
        std::cout<< i << '\n'<<std::endl;
    }
}

void Problem57::test2(){
    getContinousSequence(9);
}