int majorityElement(int* nums, int numsSize)
{
    int i, j, counter;
    for(i = 0; i < numsSize; i++)
    {
        counter = 0;
        for(j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                counter++;
            }
            if(counter > numsSize/2)
            {
                break;
            }
        }
        if(counter > numsSize/2)
        {
            break;
        }
    }

    return nums[i];
}
int main()
{
    int nums[11] = {2, 3, 3, 4, 5, 5, 5, 5, 6, 7, 7};
    int numSize = sizeof(nums) / sizeof(int);
    int newSize = majorityElement(nums, numSize);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}