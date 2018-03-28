//
// Created by cw on 2017/10/21.
//

#ifndef CPP_PROBLEM55_H
#define CPP_PROBLEM55_H

class Problem55 {

public:
    struct BinaryTreeNode{
        int m_nValue;
        BinaryTreeNode* m_pLeft;
        BinaryTreeNode* m_pRight;
    };

    int getBinaryTreeDepth(BinaryTreeNode *pRoot);

    bool isBalancedBinaryTree(BinaryTreeNode *pRoot);

    bool isBalanced(BinaryTreeNode *pRoot, int *pDepth);
};


#endif //CPP_PROBLEM55_H
