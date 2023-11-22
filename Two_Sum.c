// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, target, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *nums;
    nums=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    for(i=0;i<n;i++)
    {
        for(j=i+1; j<sizeof(nums); j++)
        {
            if((nums[i]+nums[j])==target)
            {
                printf("%d %d", i, j);
                free(nums);
                exit(0);
            }
        }
    }
}

// LeetCode Code:-

/* int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int *arr=malloc((*returnSize)*sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            if((nums[i]+nums[j])==target)
            {
                arr[0]=i, arr[1]=j;
                return arr;
                free(arr);
                free(nums);
                exit(0);
            }
        }
    }
    return arr;
} */