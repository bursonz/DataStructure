//
// Created by Burson on 2020/8/26.
//

/**
 * 交换
 * 将X,Y的值互换
 * @param x
 * @param y
 */
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

/**
 * 8.3.1 冒泡排序
 * (Bubble Sort)
 * 稳定性:稳定
 * 空间复杂度:O(1)
 * 时间复杂度:
 *      最好(有序):O(n)
 *      最坏(逆序):O(n^2)
 *      平均(无序):O(n^2)
 * @param A
 * @param n
 */
void BubbleSort(int A[], int n) {
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; ++i) {
        flag = false;  //表示本趟冒泡是否发生交换的标志
        for (j = n - 1; j > 1; --j) {  //一趟冒泡排序
            if (A[j - 1] > A[j]) {  //若为逆序
                swap(A[j - 1], A[j]);  //交换
                flag = true;
            }
        }
        if (flag == false)
            return;  //本趟遍历后没有发生交换,说明表已经有序
    }
}


/**
 * 快排分区
 * 一趟划分操作,将表A[low...high]划分为满足条件的两个子表
 * @param A
 * @param low
 * @param high
 * @return
 */
int Partition(int A[], int low, int high) {  //一趟划分
    int pivot = A[low];  //将当前表中第一个元素设为枢轴,对表进行划分
    while (low < high) {  //循环跳出条件
        while (low < high && A[high] >= pivot)
            --high;
        A[low] = A[high];  //将比枢轴小的元素移动到左端
        while (low < high && A[low] <= pivot)
            ++low;
        A[high] = A[low];  //将比枢轴大的元素移动到右端
    }
    A[low] = pivot;  //数周元素存放到最终位置
    return low;  //返回存放枢轴的最终位置
}

/**
 * 8.3.2 快速排序
 * (Quick Sort)
 * 稳定性:不稳定
 * 空间复杂度:
 *      最好:O(log2(n))
 *      平均:O(log2(n))
 *      最坏:O(n)
 * 时间复杂度:
 *      最好:O(n*log2(n))
 *      平均:O(n*log2(n))
 *      最坏:O(n^2)
 * @param A
 * @param low
 * @param high
 */
void QuickSort(int A[], int low, int high) {
    if (low < high) {  //递归跳出条件
        //Partition()就是划分操作,将表A[low...high]划分为满足条件的两个子表
        int pivotpos = Partition(A, low, high);  //划分
        //依次对两个子表进行递归排序
        QuickSort(A, low, pivotpos - 1);
        QuickSort(A, pivotpos + 1, high);
    }
}
