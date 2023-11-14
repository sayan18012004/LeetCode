int majorityElement(int* nums, int numsSize)
{
    int i, candidate = 0, votes = 0;
    for(i = 0; i < numsSize; i++)
    {   
        if(votes == 0)
        {
            candidate = nums[i];
            votes++;
        }
        else if(candidate != nums[i])
        {
            votes--;
        }
        else
        {
            votes++;
        }
    }
    return candidate;
}
int main()
{
    int nums[11] = {2, 3, 3, 4, 5, 5, 5, 5, 6, 7, 7};
    int numSize = sizeof(nums) / sizeof(int);
    int majorElement = majorityElement(nums, numSize);

    if (majorElement != -1)
    {
        printf("%d ", majorElement);
    }
    else
    {
        printf("No majority element found");
    }

    return 0;
}