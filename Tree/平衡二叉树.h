//
// Created by Burson on 2020/7/24.
//

#ifndef DATASTRUCTURE_平衡二叉树_H
#define DATASTRUCTURE_平衡二叉树_H

#endif //DATASTRUCTURE_平衡二叉树_H

typedef struct AVLNode{
    int key;
    int balance;
    struct AVLNode *lchild,*rchild;
}AVLNode,*AVLTree;