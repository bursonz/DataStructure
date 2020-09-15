//
// Created by Burson on 2020/9/4.
//

#include <iostream>

#define n 100
typedef int ElemType;

ElemType *B = (ElemType*)malloc((n+1)* sizeof(ElemType));  //辅助数组 B

/**
 * 归并
 * (Merge)
 * 稳定性:
 * 空间复杂度:O(n)
 * 时间复杂度:
 * @param A
 * @param low
 * @param mid
 * @param high
 */
void Merge(ElemType A[],int low,int mid,int high){
    //表A的两端A[low...mid]和A[mid+1...high]各自有序,将它们合并成一个有序表
    int i,j,k;
    for (k = low; k <= high; ++k)
        B[k]=A[k];  //将A[low...high]中所有元素复制到B中
    for (i=low,j=mid+1,k=i;i<=mid&&j<=high;++k){
        if(B[i]<=B[j])  //比较B的左右两端中的元素
            A[k]=B[i++];  //将较小值复制到A中
        else
            A[k]=B[j++];
    }
    while(i<=mid)  //若第一个表未检测完,复制
        A[k++]=B[i++];
    while(j<=high)  //若第二个表未检测完,复制
        A[k++]=B[j++];
}

/**
 * 归并排序(二路归并)
 * (Merge Sort)
 * 稳定性:
 * 空间复杂度:O(n)
 * 时间复杂度:
 * @param A
 * @param low
 * @param high
 */
void MergeSort(ElemType A[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}