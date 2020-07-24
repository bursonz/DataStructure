//
// Created by Burson on 2020/7/21.
//

#include "线索二叉树.h"

#include <iostream>

void visit(ThreadNode *p) {
    std::cout << p->data << std::endl;
}

void visit(ThreadTree &T, ThreadNode *&pre) {
    if (T->lchild == NULL) {  //左子树为空,建立前驱线索
        T->lchild = pre;
        T->ltag = 1;
    }
    if (pre != NULL && pre->rchild == NULL) {  //建立前驱结点的后续线索
        pre->rchild = T;
        pre->rtag = 1;
    }
    pre = T;  //移动前驱指针到当前结点
}

void InThread(ThreadTree &T, ThreadNode *&pre) {
    if (T != NULL) {
        InThread(T->lchild, pre);  //递归线索化左子树
        visit(T, pre);
        InThread(T->rchild, pre);  //递归线索化右子树
    }
}

void CreateInThread(ThreadTree &T) {
    if (T != NULL) {
        ThreadNode *pre = NULL;
        InThread(T, pre);  //线索化二叉树
        pre->rchild = NULL;  //处理遍历的最后一个结点
        pre->rtag = 1;
    }

}

void PreThread(ThreadTree &T, ThreadNode *&pre) {

    if (T != NULL) {
        visit(T, pre);
        if (T->ltag == 0)  //lchild不是前驱线索
            InThread(T->lchild, pre);
        InThread(T->rchild, pre);
    }
}

void CreatePreThread(ThreadTree &T) {
    if (T != NULL) {
        ThreadNode *pre = NULL;
        PreThread(T, pre);  //线索化二叉树
        pre->rchild = NULL;  //处理遍历的最后一个结点
        pre->rtag = 1;
    }
}

void PostThread(ThreadTree &T, ThreadNode *&pre) {
    if (T != NULL) {
        InThread(T->lchild, pre);  //递归线索化左子树
        InThread(T->rchild, pre);  //递归线索化右子树
        visit(T, pre);
    }
}

void CreatePostThread(ThreadTree &T) {
    if (T != NULL) {
        ThreadNode *pre = NULL;
        PostThread(T, pre);  //线索化二叉树
        pre->rchild = NULL;  //处理遍历的最后一个结点
        pre->rtag = 1;
    }
}

ThreadNode *Firstnode(ThreadNode *p) {
    while (p->ltag == 0)  //循环找到最左下结点(不一定是叶结点)
        p = p->lchild;
    return p;
}

ThreadNode *Lastnode(ThreadNode *p) {
    while (p->rtag == 0)
        p = p->rchild;
    return p;
}

ThreadNode *Prenode(ThreadNode *p) {
    if (p->ltag == 0)
        return Lastnode(p->lchild);
    else
        return p->lchild;  //rtag==1直接返回后继线索
}

ThreadNode *Nextnode(ThreadNode *p) {
    if (p->rtag == 0)
        return Firstnode(p->rchild);  //右子树中最左下结点
    else
        return p->rchild;  //rtag==1直接返回后继线索
}

void InOrder(ThreadTree T) {
    for (ThreadNode *p = Firstnode(T); p != NULL; p = Nextnode(p))
        visit(p);
}

void RevInOrder(ThreadTree T) {
    for (ThreadNode *p = Lastnode(T); p != NULL; p = Prenode(p))
        visit(p);
}
