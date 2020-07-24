//
// Created by Burson on 2020/7/24.
//

#ifndef DATASTRUCTURE_二叉排序树_H
#define DATASTRUCTURE_二叉排序树_H

#endif //DATASTRUCTURE_二叉排序树_H

#include "../预定义.h"

typedef struct BSTNode{
//    ElemType data;
    KeyType key;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree,*BinarySearchTree;

/**
 * 查找
 * @param T 二叉排序树
 * @param key 关键字
 * @return 关键字所在结点
 */
BSTNode* BST_Search(BSTree T,KeyType key);

/**
 * 插入
 * @param T 二叉排序树
 * @param key 关键字
 * @return
 */
int BST_Insert(BSTree &T,KeyType key);

/**
 * 构造
 * @param T 空二叉排序树
 * @param key[] 要插入的关键字数组
 * @param n 待插入的关键字数组长度
 */
void BST_Create(BSTree &T,KeyType key[],int n);

/**
 * 删除
 * @param T 二叉排序树
 * @param key 关键字
 * @return
 */
int BST_Delete(BSTree &T,KeyType key);