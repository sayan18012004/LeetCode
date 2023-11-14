#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    int index = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(i < numsSize - 2 && nums[i] != nums[i+1] && nums[i] != nums[i+2])
        {
            continue;
        }
        nums[index] = nums[i];
        index++;
    }

    return index;
}
int main()
{
    int nums[11] = {2, 3, 3, 4, 5, 5, 5, 5, 6, 7, 7};
    int numSize = sizeof(nums) / sizeof(int);
    int newSize = removeDuplicates(nums, numSize);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}