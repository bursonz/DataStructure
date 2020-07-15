//
// Created by Burson on 2020/7/15.
//

#ifndef DATASTRUCTURE_串_H
#define DATASTRUCTURE_串_H

#endif //DATASTRUCTURE_串_H

#include "../预定义.h"

typedef struct {
    char ch[MAXSIZE];
    int length;
}String,AbstractString;

/**
 * 赋值
 * 把串T赋值为chars
 * @param T
 * @param chars
 * @return
 */
bool StrAssign(String &T,char chars[]);

/**
 * 复制
 * 由串S复制得到串T
 * @param T
 * @param S
 * @return
 */
bool StrCopy(String &T, String S);

/**
 * 判空
 * 若S为空串,则返回TRUE,否则返回FALSE
 * @param S
 * @return
 */
bool StrEmpty(String S);

/**
 * 求串长
 * 返回串S的元素个数
 * @param S
 * @return
 */
int StrLength(String S);

/**
 * 清空
 * 将S清为空串
 * @param S
 * @return
 */
bool ClearString(String &S);

/**
 * 销毁串
 * 将串S销毁
 * @param S
 */
void DestroyString(String &S);

/**
 * 串联接
 * 用T返回由S1和S2联接而成的新串
 * @param T
 * @param S1
 * @param S2
 * @return
 */
bool Concat(String &T,String S1,String S2);

/**
 * 比较
 * 若S>T,则返回值>0;
 * 若S=T,则返回值=0;
 * 若S<T,则返回值<0;
 * @param S
 * @param T
 * @return int
 */
int StrCompare(String S,String T);

/**
 * 求字串
 * 用Sub返回串S的第pos个字符起长度为len的子串
 * @param Sub
 * @param S
 * @param pos
 * @param len
 * @return
 */
bool SubString(String &Sub,String S,int pos,int len);

/**
 * 定位操作
 * 若主串S中存在与串T值相同的子串,则返回它在主串S中第一次出现的位置;
 * 否则函数值为0
 * @param S
 * @param T
 * @return int
 */
int Index(String S,String T);