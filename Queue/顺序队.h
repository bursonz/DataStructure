//
// Created by Burson on 2020/7/12.
//

#ifndef DATASTRUCTURE_顺序队_H
#define DATASTRUCTURE_顺序队_H

#endif //DATASTRUCTURE_顺序队_H


#include "../预定义.h"

/**
 * 牺牲一个存储单元的循环队列实现
 */
typedef struct {
    ElemType data[MAXSIZE];
    int front;
    int rear;
} SqQueue, SequenceQueue;

/**
 * 设置辅助变量的循环队列实现
 * 增加size变量记录队列长度来判空判满
 * 初始化 增加size=0赋值
 * 判空判满 增加size判断
 * 增删查 增加size步进
 */
typedef struct {
    ElemType data[MAXSIZE];
    int front;
    int rear;
    int size;       //队列当前长度
} SqQueueWithSize, SequenceQueueWithSize;

/**
 * 设置辅助变量的循环队列实现
 */
typedef struct {
    ElemType data[MAXSIZE];
    int front;
    int rear;
    int tag;       //最近进行的是0删除/1插入
} SqQueueWithTag, SequenceQueueWithTag;

/**
 * 初始化
 * @param Q
 * @return
 */
bool InitQueue(SqQueue &Q);

/**
 * 销毁
 * @param Q
 */
void DestroyQueue(SqQueue &Q);

/**
 * 判空
 * @param Q
 * @return
 */
bool QueueEmpty(SqQueue Q);

/**
 * 判满
 * @param Q
 * @return
 */
bool QueueFull(SqQueue Q);

/**
 * 队列长度
 * @param Q
 * @return
 */
int QueueLength(SqQueue Q);

/**
 * 入队
 * @param Q
 * @param x
 * @return
 */
bool EnQueue(SqQueue &Q, ElemType x);

/**
 * 出队
 * @param Q
 * @param x
 * @return
 */
bool DeQueue(SqQueue &Q, ElemType &x);

/**
 * 获取队头
 * @param Q
 * @param x
 * @return
 */
bool GetHead(SqQueue Q, ElemType &x);
