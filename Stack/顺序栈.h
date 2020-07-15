//
// Created by Burson on 2020/7/10.
//

#ifndef DATASTRUCTURE_顺序栈_H
#define DATASTRUCTURE_顺序栈_H

#endif //DATASTRUCTURE_顺序栈_H

#include "../预定义.h"

#define ElemType char

typedef struct {
    ElemType data[MAXSIZE];
    int top;
} SqStack, SequenceStack;

/**
 * 初始化
 * @param S 待初始化的栈
 * @return
 */
bool InitStack(SqStack &S);

/**
 * 销毁
 * @param S 待销毁的栈
 */
void DestroyStack(SqStack &S);

/**
 * 进栈
 * @param S 栈
 * @param x 入栈元素
 * @return
 */
bool Push(SqStack &S, ElemType x);

/**
 * 出栈
 * @param S 栈
 * @param x 出栈元素
 * @return
 */
bool Pop(SqStack &S, ElemType &x);

/**
 * 判空
 * @param S
 * @return
 */
bool StackEmpty(SqStack S);

/**
 * 判满
 * @param S
 * @return
 */
bool StackFull(SqStack S);

/**
 * 取栈顶
 * @param S 栈
 * @param x 数据变量
 * @return
 */
bool GetTop(SqStack S, ElemType &x);