//
// Created by Burson on 2020/7/19.
//

#include "二叉树.h"
#include "../Queue/链队.h"


#include <iostream>

void visit(BiTNode *node) {
    std::cout << node->data << std::endl;
}

int treeDepth(BiTree T) {
    if (T == NULL)
        return 0;
    else {
        int l = treeDepth(T->lchild);
        int r = treeDepth(T->rchild);
        return l > r ? l + 1 : r + 1;
    }
}

void PreOrder(BiTree T) {
    if (T != NULL) {
        visit(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void InOrder(BiTree T) {
    if (T != NULL) {
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}

void PostOrder(BiTree T) {
    if (T != NULL) {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(T);
    }
}

void LevelOrder(BiTree T) {
    LinkedQueue Q;
    InitQueue(Q);  //初始化链队
    BiTNode *p;
    EnQueue(Q, T);  //根节点入队
    while (!QueueEmpty(Q)) {  //队列不空则继续循环
        DeQueue(Q, p);  //队头出队
        visit(p);  //访问出队结点
        if (p->lchild != NULL)
            EnQueue(Q, p->lchild);  //左孩子入队
        if (p->rchild != NULL)
            EnQueue(Q, p->rchild);  //右孩子入队
    }
}
