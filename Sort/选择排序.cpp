//
// Created by Burson on 2020/8/31.
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
 * 8.4.1 简单选择排序
 * (Quick Sort)
 * 稳定性:不稳定
 * 适用性:顺序表,链表都可以
 * 空间复杂度: O(1)
 * 时间复杂度: O(n^2)
 * @param A
 * @param n
 */
void SelectSort(int A[], int n) {
    for (int i = 0, min; i < n - 1; ++i) {  //一共进行n-1趟
        min = i;  //记录最小元素位置
        for (int j = i + 1; j < n; ++j)  //在A[i...n-1]中选择最小的元素
            if (A[j] < A[min])
                min = j;  //更新最小元素位置
        if (min != i)
            swap(A[i], A[min]);  //封装的swap()函数共移动元素3次
    }
}

/**
 * 调整(大根堆)
 * 空间复杂度: O(1)
 * 时间复杂度: O(h) == O(log2(n))
 * @param A
 * @param k
 * @param len
 */
void HeadAdjust(int A[], int k, int len) {
    //函数HeadAdjust将元素k为根的子树进行调整  //元素"下坠"
    A[0] = A[k];  //A[0]暂存子树的根结点
    for (int i = 2 * k; i <= len; i *= 2) {  //沿key较大的子结点向下筛选
        if (i < len && A[i] < A[i + 1])  //比较左右孩子大小
            i++;  //取key较大的子结点的下标
        if (A[0] >= A[i])  //根 >= 左/右
            break;  //筛选结束
        else if (A[0] < A[i]) {  //根 <= 左/右
            A[k] = A[i];  //将A[i]调整到双亲结点上
            k = i;  //修改k值,以便继续向下筛选
        }
    }
    A[k] = A[0];  //被筛选结点的值放入最终位置
}

/**
 * 建堆(大根堆)
 * 空间复杂度: O(1)
 * 时间复杂度: O(n)
 * @param A
 * @param len
 */
void BuildMaxHeap(int A[], int len) {
    for (int i = len / 2; i > 0; --i)  //从i=[n/2]~1,反复调整堆  //从后往前调整所有非终端结点
        HeadAdjust(A, i, len);
}

/**
 * 8.4.2 堆排序
 * (Heap Sort)
 * 稳定性:不稳定
 * 空间复杂度: O(1)
 * 时间复杂度: O(n*log2(n))
 * @param A
 * @param len
 */
void HeapSort(int A[], int len) {
    BuildMaxHeap(A, len);  //初始建堆(大根堆)
    for (int i = len; i > 1; --i) {  //n-1趟的交换和建堆过程
        swap(A[i], A[1]);  //堆顶元素和堆底元素交换
        HeadAdjust(A, 1, i - 1);  //把剩余的待排序元素整理成堆
    }
}

/**
 * 堆_插入
 * 过程:
 *      新元素放到表尾(堆底)
 *      根据大/小根堆的要求, 新元素不断"上升",直到无法继续上升为止
 * 关键字对比次数:
 *      每次"上升"调整只需对比关键字1次
 * 空间复杂度:O(1)
 * 时间复杂度:O(log2(n))
 * @param A
 * @param len
 * @param key
 */
void HeapInsert(int A[], int &len, int key) {
    A[++len] = key;  //将元素插入尾部
    for (int i = len; i > 1; i /= 2)  //自下而上比较
        if (A[i] > A[i / 2])  //大根堆  //if(A[i]<A[i/2])  //小根堆
            swap(A[i], A[i / 2]);
        else if (A[i / 2] >= A[i]) //根 >= 左/右  //else if(A[i/2]<=A[i]) //根 <= 左/右
            break;
}

/**
 * 堆_删除
 * 过程:
 *      被删除元素用表尾(堆底)元素替代
 *      根据大/小根堆的要求, 新元素不断"下坠",直到无法继续下坠为止
 * 关键字对比次数:
 *      每次"下坠"调整可能需要对比关键字2次,也可能只需对比1次
 *      (取决于有没有右孩子)
 * 空间复杂度:O(1)
 * 时间复杂度:O(log2(n))
 * @param A
 * @param len
 * @param n
 */
void HeapDelete(int A[], int &len, int n) {
    A[n]=A[len--];  //删除元素
    HeadAdjust(A,n,len);  //自上而下"下坠"调整
}


/**
 * 调整(小根堆)
 * 空间复杂度: O(1)
 * 时间复杂度: O(h) == O(log2(n))
 * @param A
 * @param k
 * @param len
 */
void MinHeadAdjust(int A[], int k, int len) {
    //暂存根结点
    A[0] = A[k];
    //依次向下调整
    for (int i = 2 * k; i <= len; i *= 2) {
        //挑选左右孩子最小的结点
        if (i < len && A[i] > A[i + 1])
            ++i;
        //比较选中结点与暂存根结点的值
        if (A[0] > A[i]) {
            //根结点下沉
            A[k] = A[i];
            k = i;
            //根比左右小, 故不需要调整
        } else if (A[0] <= A[i])
            break;
    }
    //将暂存结点放入最终位置
    A[k] = A[0];
}

/**
 * 建堆(小根堆)
 * 空间复杂度: O(1)
 * 时间复杂度: O(n)
 * @param A
 * @param len
 */
void BuildMinHeap(int A[], int len) {
    for (int i = len / 2; i > 0; --i)  //从i=[n/2]~1,反复调整堆  //从后往前调整所有非终端结点
        MinHeadAdjust(A, i, len);
}
