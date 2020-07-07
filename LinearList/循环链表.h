//
// Created by Burson on 2020/7/7.
//

#ifndef DATASTRUCTURE_循环链表_H
#define DATASTRUCTURE_循环链表_H

#endif //DATASTRUCTURE_循环链表_H

#include "../Definition.h"


typedef struct CLNode {
    ElemType data;
    struct CLNode *next;
} CLNode, *CSLinkList, *CircularSingleLinkedList;

typedef struct CDNode {
    ElemType data;
    struct CDNode *prior;
    struct CDNode *next;
} CDNode, *CDLinkList, *CircularDoubleLinkedList;


/**
 * 初始化
 * @param L 循环单链表
 * @return
 */
bool InitList(CSLinkList &L);

/**
 * 初始化
 * @param L 循环双链表
 * @return
 */
bool InitList(CDLinkList &L);

/**
 * 判空
 * @param L 循环单链表
 * @return 表L是否为空
 */
bool Empty(CSLinkList L);

/**
 * 判空
 * @param L 循环双链表
 * @return 表L是否为空
 */
bool Empty(CDLinkList L);

/**
 * 判断表尾
 * @param L 循环链表
 * @param p 待判断结点
 * @return
 */
bool Tail(CSLinkList L, CLNode *p);

/**
 * 判断表尾
 * @param L 循环链表
 * @param p 待判断结点
 * @return
 */
bool Tail(CDLinkList L, CDNode *p);

/**
 * 插入结点
 * 在结点之后插入新结点
 * @param p 指定结点
 * @param s 待插入的结点
 * @return
 */
bool InsertNextDNode(CLNode *p, CLNode *s);

/**
 * 插入结点
 * 在结点之后插入新结点
 * @param p 指定结点
 * @param s 待插入的结点
 * @return
 */
bool InsertNextDNode(CDNode *p, CDNode *s);

/**
 * 删除结点
 * 在结点之后删除结点
 * @param p 被删除结点的前驱
 * @return
 */
bool DeleteNextDNode(CLNode *p);

/**
 * 删除结点
 * 在结点之后删除结点
 * @param p 被删除结点的前驱
 * @return
 */
bool DeleteNextDNode(CDNode *p);