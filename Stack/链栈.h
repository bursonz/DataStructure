//
// Created by Burson on 2020/7/10.
//

#ifndef DATASTRUCTURE_链栈_H
#define DATASTRUCTURE_链栈_H

#endif //DATASTRUCTURE_链栈_H
#include "../Definition.h"

//一般用不带头结顶的链栈
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}*LiStack,*LinkedStack;

/**
 * 初始化
 * @param S 待初始化的栈
 * @return
 */
bool InitStack(LinkedStack &S);

/**
 * 销毁
 * @param S 待销毁的栈
 */
void DestroyStack(LinkedStack &S);

/**
 * 进栈
 * @param S 栈
 * @param x 入栈元素
 * @return
 */
bool Push(LinkedStack &S, ElemType x);

/**
 * 出栈
 * @param S 栈
 * @param x 出栈元素
 * @return
 */
bool Pop(LinkedStack &S,ElemType &x);

/**
 * 判空
 * @param S
 * @return
 */
bool StackEmpty(LinkedStack &S);

/**
 * 判满
 * @param S
 * @return
 */
bool StackFull(LinkedStack &S);


int Length(LinkedStack &L);
void PrintStack(LinkedStack S);