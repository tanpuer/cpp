//
// Created by cw on 2017/10/21.
//

#ifndef CPP_PROBLEM53_H
#define CPP_PROBLEM53_H

#include <vector>

//数字在排序数组中出现的次数 [1,2,2,3,3,3,4,5]
class Problem53 {

private:
    void getNumberOfK(std::vector<int> *data, int length, int k);

    int getLastK(std::vector<int> *data, int length, int k, int start, int end);

    int getFirstK(std::vector<int> *data, int length, int k, int start, int end);

    void getMissingNum(std::vector<int> *array, int length);

    void getNumSameAsIndex(std::vector<int> *array, int length);


public:
    void test();

    void test2();

    void test3();
};


#endif //CPP_PROBLEM53_H
