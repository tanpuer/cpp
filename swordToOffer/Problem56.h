//
// Created by cw on 2017/10/21.
//

#ifndef CPP_PROBLEM56_H
#define CPP_PROBLEM56_H


class Problem56 {

private:
    void findNumAppearOnce(int *data, int length, int *num1, int *num2);

    unsigned int findFirstBitIs1(int num);

    bool IsBit1(int num, unsigned int indexBit);

public:
    void test();
};


#endif //CPP_PROBLEM56_H
