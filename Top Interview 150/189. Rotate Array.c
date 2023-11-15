void rotate(int* nums, int numsSize, int k)
{
    int FinalArr[numsSize], i, j=0;

    while(k > numsSize)
    {
        k = k % numsSize;
    }
    
    for(i = numsSize - k; i < numsSize; i++)
    {
        FinalArr[j] = nums[i];
        j++;
    }
    for(i = 0; i < numsSize - k; i++)
    {
        FinalArr[j] = nums[i];
        j++;
    }
    j = 0;
    for(i = 0; i < numsSize; i++)
    {
        nums[i] = FinalArr[j];
        j++;
    }
    
}

#include<stdio.h>
int main()
{
    int nums[7] = {1,2,3,4,5,6,7};
    int i, k = 3;
    int numsSize = sizeof(nums) / sizeof(int);
    rotate(nums, numsSize, k);

    for(i = 0; i < numsSize; i++)
        {
            printf("%d", nums[i]);
        }

    return 0;
}