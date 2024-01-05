#include<stdio.h>
#include<stdbool.h>

int jump(int* nums, int numsSize)
{
    int maxi = 0, n = 0, back;
    for(int i = 0; i < numsSize ; i++)
    {
        if(i > maxi || numsSize == 1)
        {
            return 0;
        }
        if(maxi >= numsSize - 1 && numsSize != 1)
        {
            return n;
        }
        if(maxi < i + nums[i])
        {
            for(back = maxi; back >= i; back--)
            {
                if(maxi <= back + nums[back])
                {
                    // printf("nums[back] = %d, back = %d, i = %d\n", nums[back], back, i);
                    maxi = back + nums[back];
                    // printf("maxi = %d\n\n", maxi);
                }
            }
            n++;
        }

        // if(maxi < i + nums[i])
        // {
        //     printf("%d %d\t", nums[i], i);

        //     maxi = i + nums[i];
        //     n++;
        // }
        if(maxi >= numsSize - 1)
        {
            return n;
        }
    }
    return 0;
}

int main()
{
    int nums[] = {7,0,9,6,9,6,1,7,9,0,1,2,9,0,3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int totalJumps = jump(nums, numsSize);

    printf("\n%d", totalJumps);

    return 0;
}