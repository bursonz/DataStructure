//
// Created by Burson on 2020/11/8.
//

#include "二叉树.h"
#include "../Stack/链栈.h"


void PostOrder(BiTree T){
    LinkedStack S;
    InitStack(S);
    BiTNode *p=T;
    while (p||!StackEmpty(S)){
        if(p){
            Push(S,p->data);
            p=
        }
        if(p->rchild){
        }
    }
}
