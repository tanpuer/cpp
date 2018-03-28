//
// Created by cw on 2017/10/22.
//

#ifndef CPP_PROBLEM57_H
#define CPP_PROBLEM57_H

//递增排序的数组找出和为s的数字
class Problem57 {

private:
    void getNumsWithSum(int *data, int length, int *num1, int *num2, int s);

    void getContinousSequence(int sum);

    void printContinousSequence(int start, int end);

public:
    void test();

    void test2();

};


#endif //CPP_PROBLEM57_H
