//
// Created by Burson on 2020/7/12.
//

#include "顺序队.h"

bool InitQueue(SqQueue &Q) {
    Q.rear = Q.front = 0;
}

void DestroyQueue(SqQueue &Q) {
    InitQueue(Q);
}

bool QueueEmpty(SqQueue Q) {
    if (Q.rear == Q.front)
        return true;
    else
        return false;
}

bool QueueFull(SqQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int QueueLength(SqQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

bool EnQueue(SqQueue &Q, int x) {
    if (QueueFull(Q))
        return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return true;
}

bool DeQueue(SqQueue &Q, int &x) {
    if (QueueEmpty(Q))
        return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return true;
}

bool GetHead(SqQueue Q, int &x) {
    if (QueueEmpty(Q))
        return false;
    x = Q.data[Q.front];
    return true;
}
