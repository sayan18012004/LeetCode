#include<stdio.h>

int hIndex(int* citations, int citationsSize) 
{
    int partition(int* arr, int low, int high) 
    {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] > pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return (i + 1);
    }

    void quickSort(int* arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);

            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    quickSort(citations, 0, citationsSize - 1);

    int i;
    for (i = 0; i < citationsSize; i++) 
    {
        if (citations[i] < i + 1) 
        {
            break;
        }
    }
    return i;
}


int main()
{
    int cit[] = {15, 11};
    int citSize = sizeof(cit) / sizeof(cit[0]);
    int h = hIndex(cit, citSize);

    printf("\nH-Index = %d", h);

    return 0;
}