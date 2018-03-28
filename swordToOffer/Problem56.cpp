//
// Created by cw on 2017/10/21.
//

#include <iostream>
#include "Problem56.h"

//数组中只出现一次的两个数字
//整型数组，除了2个数字，其余都出现2次；时间复杂度O(n),空间复杂度O(1)
//异或操作
void Problem56::findNumAppearOnce(int data[], int length, int* num1, int* num2){
    if(data == nullptr || length<2){
        return;
    }
    int exclusiveOR = 0;
    for (int i = 0; i < length; ++i) {
        exclusiveOR ^= data[i];
    }
    unsigned int firstBit1 = findFirstBitIs1(exclusiveOR);
    *num1 = *num2 = 0;
    for (int j = 0; j < length; ++j) {
        if(IsBit1(data[j], firstBit1)){
            *num1 ^= data[j];
        } else{
            *num2 ^= data[j];
        }
    }
}

//num在二进制表示中找到最右边是1的位
unsigned int Problem56::findFirstBitIs1(int num){
    unsigned int indexBit = 0;
    while (((num & 1)==0) && (indexBit<8* sizeof(int))){
        num = num >>1;
        ++indexBit;
    }
    return indexBit;
}

//判断indexBit位是否为1
bool Problem56::IsBit1(int num, unsigned int indexBit){
    num = num >> indexBit;
    return static_cast<bool>(num & 1);
}

void Problem56::test(){
    int data[] = {2,4,3,6,3,2,5,5};
    int length = 8;
    int num1 = 0;
    int num2 = 0;
    findNumAppearOnce(data, length, &num1, &num2);
    std::cout<< "num1:" << num1 << ",num2:"<< num2 << std::endl;
}