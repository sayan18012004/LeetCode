#include<stdio.h>
#include<stdbool.h>

bool canJump(int* nums, int numsSize)
{
    int maxi = 0;
    for(int i = 0; i < numsSize ; i++)
    {
        if(i > maxi)
        {
            return false;
        }
        if(maxi < i + nums[i])
        {
            maxi = i + nums[i];
        }
        if(maxi >= numsSize - 1)
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    int nums[] = {2, 0, 1, 1, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    bool canJumpResult = canJump(nums, numsSize);

    printf("%s", canJumpResult ? "true" : "false");

    return 0;
}