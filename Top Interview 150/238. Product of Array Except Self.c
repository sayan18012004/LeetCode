#include<stdio.h>
#include<stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int *result = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int j;

    for(j = 0; j < numsSize; j++)
    {
        result[j] = 1;
    }

    int leftProduct = 1;
    for(j = 0; j < numsSize; j++)
    {
        result[j] = result[j] * leftProduct;
        leftProduct = leftProduct * nums[j];
    }
    int rightProduct = 1;
    for(j = numsSize - 1; j >= 0; j--)
    {
        result[j] = result[j] * rightProduct;
        rightProduct = rightProduct * nums[j];
    }

    return result;
}
int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int *result = productExceptSelf(nums, numsSize, &returnSize);

    for(int i = 0; i < numsSize; i++)
    {
        printf("%d\t", result[i]);
    }

    return 0;
}