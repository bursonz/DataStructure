//
// Created by Burson on 2020/7/2.
//

#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H

#endif //DATASTRUCTURE_QUEUE_H

#include "../预定义.h"

#include "顺序队.h"
#include "链队.h"

typedef struct {

} Queue;

/**
 * 初始化
 * @param Q
 * @return
 */
bool InitQueue(Queue &Q);

/**
 * 销毁
 * @param Q
 */
void DestroyQueue(Queue &Q);

/**
 * 判空
 * @param Q
 * @return
 */
bool QueueEmpty(Queue Q);

/**
 * 判满
 * @param Q
 * @return
 */
bool QueueFull(Queue Q);

/**
 * 队列长度
 * @param Q
 * @return
 */
int QueueLength(Queue Q);

/**
 * 入队
 * @param Q
 * @param x
 * @return
 */
bool EnQueue(Queue &Q, ElemType x);

/**
 * 出队
 * @param Q
 * @param x
 * @return
 */
bool DeQueue(Queue &Q, ElemType &x);

/**
 * 获取队头
 * @param Q
 * @param x
 * @return
 */
bool GetHead(Queue Q, ElemType &x);


/* 测试 */

/**
 * 测试顺序队
 */
void TestSequenceQueue();

/**
 * 测试链队
 */
void TestLinkedQueue();
