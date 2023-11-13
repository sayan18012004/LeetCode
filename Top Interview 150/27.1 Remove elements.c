#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int index = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

int main()
{
    int nums[10] = {2, 3, 3, 4, 5, 5, 5, 6, 7, 7};
    int numSize = sizeof(nums) / sizeof(int);
    int val;

    printf("Enter the element: ");
    scanf("%d", &val);

    int newSize = removeElement(nums, numSize, val);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
