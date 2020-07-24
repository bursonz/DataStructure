//
// Created by Burson on 2020/7/12.
//

#include "链队.h"
#include <iostream>

bool InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = new LinkNode;
    if (Q.front == NULL)
        return false;
    Q.rear->next = NULL;
    return true;
}

bool InitQueue_WithoutHead(LinkQueue &Q) {
    Q.front = NULL;
    Q.rear = NULL;
    return true;
}

void DestroyQueue(LinkQueue &Q) {
    LinkNode *p;
    while (Q.front != NULL) {
        p = Q.front;
        Q.front = p->next;
        delete p;
    }
}

bool QueueEmpty(LinkQueue Q) {
    if (Q.front == Q.rear)
        return true;
    else
        return false;
}

bool QueueEmpty_WithoutHead(LinkQueue Q) {
    if (Q.front == NULL)
        return true;
    else
        return false;
}

bool QueueFull(LinkedQueue Q) {
    return false;
}

bool QueueFull_WithoutHead(LinkedQueue Q) {
    return false;
}

int QueueLength(LinkedQueue Q) {
    return 0;
}

int QueueLength_WithoutHead(LinkedQueue Q) {
    return 0;
}

bool EnQueue(LinkedQueue &Q, ElemType x) {
    LinkNode *p = new LinkNode;
    if (p == NULL || QueueFull(Q))
        return false;
    p->data = x;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return true;
}

bool EnQueue_WithoutHead(LinkedQueue &Q, ElemType x) {
    LinkNode *p = new LinkNode;
    if (p == NULL || QueueFull(Q))
        return false;
    p->data = x;
    p->next = NULL;
    if (QueueEmpty(Q)) //空队列插入
        Q.front = Q.rear = p;
    else {  //非空队列插入
        Q.rear->next = p;
        Q.rear = p;
    }
    return true;
}

bool DeQueue(LinkedQueue &Q, ElemType&x) {
    if (QueueEmpty(Q))
        return false;
    LinkNode *p = new LinkNode;
    p = Q.front->next;
    x = p->data;
    Q.front->next = p->next;
    if (Q.front->next == NULL)
        Q.rear = Q.front;
    delete p;
    return true;
}

bool DeQueue_WithoutHead(LinkedQueue &Q, ElemType&x) {
    if (QueueEmpty(Q))
        return false;
    LinkNode *p;
    p = Q.front;
    x = p->data;
    Q.front = p->next;
    if (Q.front == NULL)
        Q.rear = NULL;
    delete p;
    return true;
}

bool GetHead(LinkedQueue Q, ElemType&x) {
    return false;
}

bool GetHead_WithoutHead(LinkedQueue Q, ElemType&x) {
    return false;
}
