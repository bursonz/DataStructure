//
// Created by Burson on 2020/8/25.
//

/**
 * 8.2.1 直接插入排序
 * (Insert Sort)
 * 稳定性:排序结果稳定
 * 空间复杂度:O(1)
 * 时间复杂度:O(n^2)
 * @param A
 * @param n
 */
void InsertSort(int A[], int n) {
    int i, j, temp;
    for (i = 1; i < n; ++i) {  //将各元素插入已排好序的序列中
        if (A[i] < A[i - 1]) {  //若A[i]关键字小于前驱
            temp = A[i];  //用temp暂存A[i]
            for (j = i - 1; j >= 0 && A[j] > temp; --j)  //检查所有前面已排好序的元素
                A[j + 1] = A[j];  //所有大于temp的元素都向后挪位
            A[j + 1] = temp;  //复制到插入位置
        }
    }
}

/**
 * 直接插入排序(带哨兵)
 * (Insert Sort With Sentinel)
 * 稳定性:排序结果稳定
 * 空间复杂度:O(1)
 * 时间复杂度:O(n^2)
 * 优点:不用每轮循环都判断j>=0
 * @param A 关键字数组
 * @param n 数组长度
 */
void InsertSort_WithSentinel(int A[], int n) {
    int i, j;
    for (i = 2; i <= n; ++i) {  //依次将A[2]~A[n]插入刀前面已排序序列
        if (A[i] < A[i - 1]) {  //若A[i]关键码小于其前驱,将A[i]插入有序表
            A[0] = A[i];  //复制为哨兵,A[0]不存放元素
            for (j = i - 1; A[0] < A[j]; --j)  //从后往前查找待插入位置
                A[j + 1] = A[j];  //向后挪位
            A[j + 1] = A[0];  //复制到插入位置
        }
    }
}

/**
 * 8.2.2 折半插入排序
 * (对直接插入排序的改进)
 * 稳定性:排序结果稳定
 * 空间复杂度:O(1)
 * 时间复杂度:O(n^2)
 * 优点:减少了比较元素的次数
 * @param A
 * @param n
 */
void BinaryInsertionSort(int A[], int n) {
    int i, j, low, high, mid;
    for (i = 2; i <= n; ++i) {  //依次将A[2]~A[n]插入前面的已排序序列
        A[0] = A[i];  //将A[i]暂存到A[0]
        low = 1;
        high = i - 1;  //设置折半查找的范围
        while (low <= high) {  //折半查找(默认递增有序)
            mid = (low + high) / 2;  //取中间点
            if (A[mid] > A[0])
                high = mid - 1;  //查找左半子表
            else
                low = mid + 1;  //查找右半子表;
        }
        for (j = i - 1; j >= high + 1; --j)
            A[j + 1] = A[j];  //统一后移元素,空出插入位置
        A[high + 1] = A[0];  //插入操作
    }
}

/**
 * 8.2.3 希尔排序
 * (Shell Sort)
 * 稳定性: 不稳定
 * 空间复杂度: O(1)
 * 时间复杂度:
 *      平均:O(n^1.3)
 *      最坏:O(n^2)
 *
 * 当d=1时,退化为直接插入排序
 * @param A
 * @param n
 */
void ShellSort(int A[], int n) {
    int d, i, j;
    //A[0]只是暂存单元,不是哨兵,当j<=0时,插入位置已到
    for (d = n / 2; d >= 1; d = d / 2) {  //步长变化
        for (i = d + 1; i <= n; ++i) {
            if (A[i] < A[i - d]) {  //需将A[i]插入有序增量子表
                A[0] = A[i];  //暂存在A[0]
                for (j = i - d; j > 0 && A[0] < A[j]; j -= d)
                    A[j + d] = A[j];  //记录后移,查找插入的位置
                A[j + d] = A[0];  //插入
            }//endif
        }//endfor
    }//endfor

}