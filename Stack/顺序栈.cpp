//
// Created by Burson on 2020/7/10.
//

#include "顺序栈.h"

bool InitStack(SqStack &S) {
    S.top=-1;
    //也可以设置0开始,使栈顶指针指向栈顶上一个
    //S.top=0;
    return true;
}

void DestroyStack(SqStack &S) {
    S.top=-1;

}

bool Push(SqStack &S, int x) {
    if(StackFull(S))
        return false;
    S.data[++S.top]=x;
    return true;
}

bool Pop(SqStack &S, int &x) {
    if(StackEmpty(S))
        return false;
    x=S.data[S.top--];
    return true;
}

bool StackEmpty(SqStack S) {
    return S.top==-1;
}

bool StackFull(SqStack S) {
    return S.top==MAXSIZE-1;
}

bool GetTop(SqStack S, int &x) {
    if (StackEmpty(S))
        return false;
    x=S.data[S.top];
    return true;
}
