#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    int index = 0;
    for(int i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] != nums[i+1])
        {
            nums[index] = nums[i];
            index++;
        }
    }
    nums[index] = nums[numsSize-1];
    index++;

    return index;

}
int main()
{
    int nums[10] = {2, 3, 3, 4, 5, 5, 5, 6, 7, 7};
    int numSize = sizeof(nums) / sizeof(int);
    int newSize = removeDuplicates(nums, numSize);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}