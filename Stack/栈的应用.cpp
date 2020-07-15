//
// Created by Burson on 2020/7/13.
//

#include "栈的应用.h"


bool bracketCheck(ElemType *str, int length) {
    SqStack S;
    InitStack(S); //初始化栈
    for (int i = 0; i < length; ++i) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            Push(S, str[i]); //扫描到左括号,入栈
        } else {
            if (StackEmpty(S)) //扫描到右括号,且当前栈空
                return false; //匹配失败

            ElemType topElem;
            Pop(S, topElem); //栈顶元素出栈
            if (str[i] == ')' && topElem != '(')
                return false;
            if (str[i] == ']' && topElem != '[')
                return false;
            if (str[i] == '}' && topElem != '{')
                return false;
        }
    }
    return StackEmpty(S); //检索完全部括号后,栈空说明匹配成功
}
