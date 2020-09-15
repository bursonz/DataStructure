//
// Created by Burson on 2020/8/22.
//

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int result[2]={0,0};
    int i=0,j=numsSize-1;
    int sum=0;
    while(i<=j){
        sum=nums[i]+nums[j];
        if (sum=target){
            *returnSize=2;
            result[0]=i;
            result[1]=j;
            return result;
        }
        if (sum>target){
            --j;
        }
        if (sum<target){
            ++i;
        }
    }
    *returnSize=0;
    return 0;
}