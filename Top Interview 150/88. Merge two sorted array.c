#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i;
    int temp;
    for(i = 0; i < n; i++)
    {
        nums1[m+i] = nums2[i];
    }
    for(i = 0; i < m+n; i++)
    {
        for(int j = i+1; j < m+n; j++)
        {
            if(nums1[i] > nums1[j])
            {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
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