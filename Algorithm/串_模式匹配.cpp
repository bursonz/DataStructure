//
// Created by Burson on 2020/7/15.
//

#include "../String/串.h"

/* 暴力求解 */

int Index_ByClass(SString S, SString T) {
    int k = 1;   //当前与模式串比对的主串位置
    int i = k, j = 1; //分别指向主串与模式串的比对位置;
    while (i <= S.length && j <= T.length) {
        if (S.ch[i] == T.ch[j]) {
            i++;
            j++;
        } else {  //重新开始模式串与子串匹配
            k++;
            i = k;
            j = 1;
        }
    }
    if (j > T.length)  //若j比模式串T的长度大,证明T是S的子串
        return k;  //返回T在S中的位置
    else
        return 0;  //未匹配到,返回0
}

int Index_ByWangdao(SString S, SString T) {
    int i = 1, j = 1; //分别指向主串与模式串的比对位置;
    while (i <= S.length && j <= T.length) {
        if (S.ch[i] == T.ch[j]) {
            i++;
            j++;
        } else {  //重新开始模式串与子串匹配
            i = 1 + (i - j) + 1;  //第一个+1是起始位置为1,第二个+1是自增
            j = 1;
        }
    }
    if (j > T.length)  //若j比模式串T的长度大,证明T是S的子串
        return i - T.length;  //返回T在S中的位置
    else
        return 0;  //未匹配到,返回0
}


/* KMP */

int *KMP_GetNext(SString T) {
    int i = 1, j = 0, next[T.length + 1];
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
    return next;
}

int *KMP_GetNextval(SString T) {
    int i = 1, j = 0;
    int nextval[T.length + 1];
    nextval[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            if (T.ch[i] != T.ch[j])
                nextval[i] = j;
            else
                nextval[i] = nextval[j];
        } else
            j = nextval[j];
    }
    return nextval;
}

int *KMP_GetNextval(SString T, int next[]) {
    int nextval[T.length + 1];
    nextval[1] = 0;
    for (int j = 2; j <= T.length; ++j) {
        if (T.ch[next[j]] == T.ch[j])
            nextval[j] = nextval[next[j]];
        else
            nextval[j] = next[j];
    }
    return nextval;
}

int Index_KMP(SString S, SString T) {
    int i = 1, j = 1;
    int *next = KMP_GetNext(T);
    while (i <= S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            ++i;
            ++j; //继续比较后继字符
        } else
            j = next[j];  //模式串向右移动
    }
    if (j > T.length)
        return i - T.length;  //主串当前位置-模式串长度=模式串第一次匹配成功时的起始位置
    else
        return 0;
}

int Index_KMP_WithNextval(SString S, SString T) {
    int i = 1, j = 1;
    int *nextval = KMP_GetNextval(T);
    while (i <= S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            ++i;
            ++j; //继续比较后继字符
        } else
            j = nextval[j];  //模式串向右移动
    }
    if (j > T.length)
        return i - T.length;  //主串当前位置-模式串长度=模式串第一次匹配成功时的起始位置
    else
        return 0;
}

/* Sunday */