//
// Created by cw on 2017/10/21.
//

#include "Problem53.h"
#include <iostream>

void Problem53::getNumberOfK(std::vector<int> *data, int length, int k){
    int num = 0;
    if (data != nullptr && length>0){
        int firstK = getFirstK(data, length, k, 0, length);
        int lastK = getLastK(data, length, k, 0, length);
        std::cout << "firstK"<< firstK <<std::endl;
        std::cout << "lastK"<< lastK <<std::endl;
        if (firstK>-1 && lastK >-1){
            num = lastK-firstK+1;
            std::cout << num <<std::endl;
        }
    }
}

int Problem53::getFirstK(std::vector<int> *data, int length, int k, int start, int end){
    if (start>end){
        return -1;
    }
    int middle = (start+end)/2;
    int middleData = data->at(middle);
    if (middleData == k){
        if ((middle>0 && data->at(middle-1) !=k) || middle ==0){
            return middle;
        } else{
            return getFirstK(data, length, k, start, middle-1);
        }
    } else if (middleData >k){
        return getFirstK(data, length, k, start, middle-1);
    } else{
        return getFirstK(data, length, k, middle+1, end);
    }
}

int Problem53::getLastK(std::vector<int> *data, int length, int k, int start, int end){
    if (start>end){
        return -1;
    }
    int middle = (start+end)/2;
    int middleData = data->at(middle);
    if (middleData == k){
        if ((middle<length-1 && data->at(middle+1) !=k) || middle == length-1){
            return middle;
        } else{
            return getLastK(data, length, k, middle+1, end);
        }
    } else if (middleData >k){
        return getLastK(data, length, k, start, middle-1);
    } else{
        return getLastK(data, length, k, middle+1, end);
    }
}

void Problem53::test(){
    std::vector<int> array = {1,2,2,3,3,3,3,4,4,4,5};
    getNumberOfK(&array, static_cast<int> (array.size()), 3);
}


//test2
// 0-n-1中缺失的数字  递增排序
void Problem53::getMissingNum(std::vector<int> *array, int length){
    int left = 0;
    int right = length-1;
    while (left<=right){
        int middle = (left+right)>>1;
        int middleData = array->at(middle);
        if (middleData != middle){
            if (middle == 0 || array->at(middle-1) == middle-1){
                std::cout<<middle<<std::endl;
                return;
            } else{
                right = middle-1;
            }
        } else{
            left = middle+1;
        }
    }
}

void Problem53::test2(){
    std::vector<int> array = {0,1,2,3,4,6,7,8};
    getMissingNum(&array, array.size());
}

//test3
//数组中数值和下标相等的元素  单调递增的数组，每个元素都是整数并且是唯一的
void Problem53::getNumSameAsIndex(std::vector<int> *array, int length){
    if (array == nullptr || length<=0){
        return;
    }
    int left = 0;
    int right = length-1;
    while (left<=right){
        int middle = (left+right)>>1;
        int middleData = array->at(middle);
        if (middleData == middle){
            std::cout<<middle<<std::endl;
            return;
        } else if (middleData>middle){
            right = middle -1;
        } else{
            left = middle+1;
        }
    }
}

void Problem53::test3(){
    std::vector<int> vector = {-3,-1,1,3,5};
    getNumSameAsIndex(&vector,vector.size());
}
