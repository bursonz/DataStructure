//
// Created by Burson on 2020/7/15.
//

#include "串.h"

bool SubString(SString &Sub, SString S, int pos, int len) {
    //子串范围越界
    if (pos + len - 1 > S.length)
        return false;
    for (int i = pos; i < pos + len; i++)
        Sub.ch[i - pos + 1] = S.ch[i];   //从1开始下标
    Sub.length = len;
    return true;
}

int StrCompare(SString S, SString T) {
    for (int i = 1; i < S.length && i <= T.length; ++i) {
        if (S.ch[i] != T.ch[i])
            // 若S>T,则返回值>0;若S=T,则返回值=0;若S<T,则返回值<0
            return S.ch[i] - T.ch[i];
    }
    return S.length - T.length;
}

int Index(SString S, SString T) {
    SString Sub;
    int i = 1, n = S.length, m = T.length;
    while (i <= n - m + 1) {
        SubString(Sub, S, i, m);  //从S中截取一个和T一样长的子串
        if (StrCompare(Sub, T) != 0)
            i++;
        else
            return i;  //返回子串在主串中的位置
    }
    return 0;  //S中不存在与T相等的子串
}

int StrLength(SString S) {
    return S.length;
}
