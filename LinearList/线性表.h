//
// Created by Burson on 2020/7/2.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H

#endif //DATASTRUCTURE_LIST_H

#include "../预定义.h"

#include "静态顺序表.h"
#include "动态顺序表.h"

#include "单链表.h"
#include "双链表.h"
#include "静态链表.h"
#include "循环链表.h"


typedef struct {

} List, LinearList;

/************ 工具 ************/
/**
 * 产生随机数
 * @param range 取值范围
 * @param count 数组大小
 * @return 数组首地址
 */
int *RandomInit(int range, int count); //


/************ 顺序表 ************/

/**
 * 测试静态顺序表
 */
void TestStaticSequenceList();

/**
 * 测试动态顺序表
 */
void TestDynamicSequenceList();


/************ 链表 ************/

/**
 * 测试单链表
 */
void TestSingleLinkedList();

/**
 * 测试双链表
 */
void TestDoubleLinkedList();

/**
 * 测试静态链表
 */
void TestStaticLinkedList();

/**
 * 测试循环链表
 */
void TestCicularLinkedList();