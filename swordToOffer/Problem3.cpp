//
// Created by cw on 2017/10/21.
//

#include <vector>
#include "Problem3.h"
#include <unordered_map>
#include <iostream>

void Problem3::getDuplicateNumInArray(std::vector<int> *array, unsigned long length){
    std::unordered_map<int ,int > map;
    if (array == nullptr || length<=0){
        return;
    }
    for (int i = 0; i <length ; ++i) {
        int value = array->at(i);
//        std::cout << value << std::endl;
        if (map.find(value) != map.end()){
            std::cout << "duplicate" <<value << std::endl;
        } else{
            std::cout << "not duplicate" << map.size() << std::endl;
            map[i] = value;
        }
    }
}

void Problem3::test() {
    std::vector<int> array = {2,3,4,5,6,2,5,7,8};
    getDuplicateNumInArray(&array, array.size());
}
