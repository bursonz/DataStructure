//
// Created by Burson on 2020/7/3.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H

#endif //DATASTRUCTURE_LINKLIST_H

#include "../definition.h"

/*
 * 链表
 * Linked List
 */

typedef struct LNode{
    ElementType data;
    struct LNode *next;
}LNode,*LinkList;


/*
 * 双链表
 * Double Linked List
 */
