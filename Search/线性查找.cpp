//
// Created by Burson on 2020/8/22.
//

#include "../预定义.h"

#include "../LinearList/静态顺序表.h"

typedef struct {  //查找表的数据结构(顺序表)
    ElemType *elem;  //动态数组基址
    int TableLen;  //表的长度
}SSTable;

/**
 * 顺序查找
 * @param ST
 * @param key
 * @return
 */
int Search_Seq(SSTable ST, int key) {  //顺序查找
    int i;
    for (i = 0; i < ST.TableLen && ST.elem[i]!=key ; ++i);  //从前往后查找
    return i==ST.TableLen?-1:i;  //查找成功,则返回元素下标;查找失败,则返回-1
}

/**
 * 顺序查找_哨兵
 * (0号位置存"哨兵")
 * 优点:无需判断是否越界,效率更高
 * @param ST
 * @param key
 * @return
 */
int Search_Seq_WithSentinel(SSTable ST, ElemType key) {  //有哨兵的顺序查找
    ST.elem[0]=key;  //设置0号位置为"哨兵"
    int i;
    for (i = ST.TableLen; ST.elem[0]!=key ; --i);  //从后往前查找
    return i;  //查找成功,则返回元素下标;查找失败,则返回0
}

/**
 * 折半查找
 * (二分查找)
 * 仅适用与有序的顺序表
 * 不可能基于没有随机访问特性的数据结构,如链表
 * @param L
 * @param key
 * @return
 */
int Binary_Search(SSTable L,ElemType key){
    int low=0;
    int high=L.TableLen-1;
    int mid;
    while (low<high){
        mid=(low+high)/2;  //取中间位置
        if(L.elem[mid]==key)
            return mid;  //查找成功则返回所在位置
        else if (L.elem[mid]>key)  //升序
            high=mid-1;  //从前半部分继续查找
        else if(L.elem[mid]<key)  //升序
            low=mid-1;  //从后半部分继续查找
    }
    return -1;  //查找失败,返回-1
}

/**
 * 分块查找
 * 特点:块内无序,块间有序
 */
typedef struct {  //索引表
    ElemType maxValue;
    int low;
    int high;
}Index;
typedef struct {  //索引表
    Index *index;
    int IndexLen;
}IndexTable;
ElemType List[MAXSIZE];  //顺序表存储实际元素
