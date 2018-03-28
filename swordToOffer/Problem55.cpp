//
// Created by cw on 2017/10/21.
//

#include "Problem55.h"
#include <stdlib.h>

//二叉树的深度
int Problem55::getBinaryTreeDepth(BinaryTreeNode* pRoot){
    if(pRoot == nullptr){
        return 0;
    }
    int nLeft = getBinaryTreeDepth(pRoot->m_pLeft);
    int nRight = getBinaryTreeDepth(pRoot->m_pRight);
    return nLeft>nRight? nLeft+1 : nRight+1;
}

//平衡二叉树：任意节点的左右深度相差不超过1

//有重复遍历
bool Problem55::isBalancedBinaryTree(BinaryTreeNode* pRoot){
    if(pRoot == nullptr){
        return false;
    }
    int left = getBinaryTreeDepth(pRoot->m_pLeft);
    int right = getBinaryTreeDepth(pRoot->m_pRight);
    if (abs(left-right)>=1){
        return false;
    }
    return isBalancedBinaryTree(pRoot->m_pLeft) && isBalancedBinaryTree(pRoot->m_pRight);
}
//每个节点只遍历一次
bool Problem55::isBalanced(BinaryTreeNode* pRoot, int* pDepth){
    if (pRoot == nullptr){
        return false;
    }
    int left;
    int right;
    if (isBalanced(pRoot->m_pLeft, &left) && isBalanced(pRoot->m_pRight, &right)){
        int diff = abs(left-right);
        if (diff <=1){
            *pDepth = 1 + diff;
            return true;
        }
    }
    return false;
}

