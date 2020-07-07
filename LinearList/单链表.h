//
// Created by Burson on 2020/7/3.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H

#endif //DATASTRUCTURE_LINKLIST_H

#include "../Definition.h"

/**
 * 链表：Linked List
 *      用数组方式实现的链表
 * 优点：
 *      1.离散的小空间分配方便
 *      2.改变容量方便
 * 缺点：
 *      1.不可随机存取
 *      2.存储密度低
 * 适用场景：
 *      1.
 */
typedef struct LNode {
    ElementType data;
    struct LNode *next;
} LNode, *LinkList, *SingleLinkedList;

/**
 * 单链表(带头结点)初始化
 * @param L
 */
bool InitList(LinkList &L);

/**
 * 单链表(不带头结点)初始化
 * @param L
 */
bool InitList_WithoutHead(LinkList &L);

/**
 * 销毁
 * @param L 单链表
 */
void DestroyList(LinkList &L);

/**
 * 求表长
 * @param L
 * @return 表长
 */
int Length(LinkList L);

/**
 * 输出
 * @param L
 */
void PrintList(LinkList L);

/**
 * 判空
 * @param L
 * @return 表L是否为空
 */
bool Empty(LinkList L);

/**
 * 判空
 * @param L 带头结点的单链表
 * @return 表L是否为空
 */
bool Empty_WithoutHead(LinkList L);

/**
 * 判满
 * @param L
 * @return 表L是否为满
 */
bool Full(LinkList L);

/**
 * 判断表尾
 * @param L 头指针
 * @param p 待判断结点
 * @return
 */
bool Tail(LinkList L, LNode *p);

/**
 * 按位插入
 * @param L 单链表(带头结点)
 * @param i 插入位序
 * @param e 插入元素
 */
bool ListInsert(LinkList &L, int i, ElemType e);

/**
 * 按位插入
 * @param L 单链表(不带头结点)
 * @param i 插入位序
 * @param e 插入元素
 */
bool ListInsert_WithoutHead(LinkList &L, int i, ElemType e);

/**
 * 头插法建立单链表
 * @param L 空表指针
 * @return
 */
LinkList List_HeadInsert(LinkList &L);

/**
 * 头插法建立单链表
 * @param L 空表指针
 * @param e 待插入的元素数组
 * @param length 待插入的数组长度
 * @return
 */
LinkList List_HeadInsert(LinkList &L, ElemType e[], int length);

/**
 * 头插法建立单链表(无头结点)
 * @param L 空表指针
 * @return
 */
LinkList List_HeadInsert_WithoutHead(LinkList &L);

/**
 * 尾插法建立单链表
 * @param L 空表指针
 * @return
 */
LinkList List_TailInsert(LinkList &L);

/**
 * 尾插法建立单链表
 * @param L 空表指针
 * @param e 待插入的元素数组
 * @param length 待插入的数组长度
 * @return
 */
LinkList List_TailInsert(LinkList &L, ElemType e[], int length);

/**
 * 在某结点后插入结点
 * @param p 某个结点
 * @param e 待插入的元素
 * @return
 */
bool InsertNextNode(LNode *p, ElemType e);

/**
 * 在某结点前插入结点
 * 时间复杂度O(1)
 * @param p 某个结点
 * @param e 待插入的元素
 * @return
 */
bool InsertPriorNode(LNode *p, ElemType e);

/**
 * 在某结点前插入结点
 * 时间复杂度O(1)
 * @param p 某个结点
 * @param e 待插入的元素
 * @return
 */
bool InsertPriorNode(LNode *p, LNode *q);

/**
 * 在某结点前插入结点
 * 时间复杂度O(n)
 * @param L 头指针(带头结点)
 * @param p 某个结点
 * @param e 待插入的元素
 * @return
 */
bool InsertPriorNode(LinkList L, LNode *p, ElemType e);

/**
 * 按值删除
 * @param p 被删除的结点
 * @param e 被删除结点的数据
 * @return
 */
bool DeleteNode(LNode *p, ElemType &e);

/**
 * 按位删除
 * @param L 单链表(带头结点)
 * @param i
 * @param e 返回删除的元素
 */
bool ListDelete(LinkList &L, int i, ElemType &e);

/**
 * 按值查找
 * @param L
 * @param e
 * @return 返回查找到的元素的位置（从1开始）
 */
LNode *LocatedElem(LinkList L, ElemType e);

/**
 * 按值查找
 * @param L
 * @param e
 * @return 返回查找到的元素的位置（从1开始）
 */
LNode *LocatedElement(LinkList L, ElemType e);

/**
 * 按位查找
 * @param L
 * @param i
 * @return 返回查找到的结点
 */
LNode *GetElem(LinkList L, int i);

/**
 * 按位查找
 * @param L
 * @param i
 * @return 返回查找到的结点
 */
LNode *GetElement(LinkList L, int i);
