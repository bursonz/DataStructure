//
// Created by Burson on 2020/7/12.
//

#ifndef DATASTRUCTURE_链队_H
#define DATASTRUCTURE_链队_H

#endif //DATASTRUCTURE_链队_H

#include "../预定义.h"

typedef struct LinkNode {
    ElemType data;
    struct LinkNode *next;
} LinkNode;

typedef struct {
    LinkNode *front;
    LinkNode *rear;
} LinkQueue, LinkedQueue;

/**
 * 初始化
 * @param Q
 * @return
 */
bool InitQueue(LinkQueue &Q);

/**
 * 初始化
 * @param Q
 * @return
 */
bool InitQueue_WithoutHead(LinkQueue &Q);

/**
 * 销毁
 * @param Q
 */
void DestroyQueue(LinkQueue &Q);

/**
 * 判空
 * @param Q
 * @return
 */
bool QueueEmpty(LinkQueue Q);

/**
 * 判空
 * @param Q
 * @return
 */
bool QueueEmpty_WithoutHead(LinkQueue Q);

/**
 * 判满
 * @param Q
 * @return
 */
bool QueueFull(LinkedQueue Q);

/**
 * 判满
 * @param Q
 * @return
 */
bool QueueFull_WithoutHead(LinkedQueue Q);

/**
 * 队列长度
 * @param Q
 * @return
 */
int QueueLength(LinkedQueue Q);

/**
 * 队列长度
 * @param Q
 * @return
 */
int QueueLength_WithoutHead(LinkedQueue Q);

/**
 * 入队
 * @param Q
 * @param x
 * @return
 */
bool EnQueue(LinkedQueue &Q, ElemType x);

/**
 * 入队
 * @param Q
 * @param x
 * @return
 */
bool EnQueue_WithoutHead(LinkedQueue &Q, ElemType x);

/**
 * 出队
 * @param Q
 * @param x
 * @return
 */
bool DeQueue(LinkedQueue &Q, ElemType &x);

/**
 * 出队
 * @param Q
 * @param x
 * @return
 */
bool DeQueue_WithoutHead(LinkedQueue &Q, ElemType &x);

/**
 * 获取队头
 * @param Q
 * @param x
 * @return
 */
bool GetHead(LinkedQueue Q, ElemType &x);

/**
 * 获取队头
 * @param Q
 * @param x
 * @return
 */
bool GetHead_WithoutHead(LinkedQueue Q, ElemType &x);