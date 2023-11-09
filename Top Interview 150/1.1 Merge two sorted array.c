
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int i, j;
    int current;
    for(i = 0; i < n; i++)
    {
        nums1[m+i] = nums2[i];
    }
    for(i = 0; i < m+n; i++)
    {
        current = nums1[i];
        j = i - 1;
        while(j >= 0 && nums1[j] > current)
        {
            nums1[j+1] = nums1[j];
            j--;
            
        }
        nums1[j+1] = current;
    }
}

int main()
{
    int nums1[6]={1,4,5,0,0,0};
    int nums2[3]={2,3,6};
    int m=3;
    int n=3;
    for(int i=0;i<m+n;i++)
    {
       printf("%d",nums1[i]);
    }
    printf("\n");
    merge(nums1,sizeof(nums1),m,nums2,sizeof(nums2),n);
  
    for(int i=0;i<m+n;i++)
    {
       printf("%d",nums1[i]);
    }
    return 0;
}