
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
