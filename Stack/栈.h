//
// Created by Burson on 2020/7/2.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H

#endif //DATASTRUCTURE_STACK_H

#include "../预定义.h"

typedef struct {
} Stack;

/**
 * 初始化
 * @param S 待初始化的栈
 * @return
 */
bool InitStack(Stack &S);

/**
 * 销毁
 * @param S 待销毁的栈
 */
void DestroyStack(Stack &S);

/**
 * 进栈
 * @param S 栈
 * @param x 入栈元素
 * @return
 */
bool Push(Stack &S, ElemType x);

/**
 * 出栈
 * @param S 栈
 * @param x 出栈元素
 * @return
 */
bool Pop(Stack &S, ElemType &x);

/**
 * 判空
 * @param S
 * @return
 */
bool StackEmpty(Stack &S);

/**
 * 判满
 * @param S
 * @return
 */
bool StackFull(Stack &S);


int Length(Stack &L);

void PrintStack(Stack);


/* 测试 */

/**
 * 测试顺序栈
 */
void TestSequenceStack();

/**
 * 测试共享栈
 */
void TestShareStack();

/**
 * 测试链栈栈
 */
void TestLinkedStack();