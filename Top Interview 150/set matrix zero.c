#include <stdio.h>

int set_zero(int *m, int i, int j)
{
    int x = -1;
    int a, b;
    for(int k = 0; k <= i; k++)
    {
        for(int l = 0; l <= j; l++)
        {
            if(a[k][l] == 0)
            {
                x++;
                a[x] = i;
                b[x] = j;
            }
        }
    }
    for(int start = 0; start <= x && start >=0; start++)
    {
        i = a[start];
        j = b[start];
        
        for(int n = 0; n <= i; n++)
        {
            m[n][j] = 0;
        }
        for(int n = 0; n <= j; n++)
        {
            m[i][n] = 0;
        }
    }

    return m;
}

int main()
{
    int i = 1, j = 2;
    int m[i][j];
    m[0][0] = 7;
    m[0][1] = 9;
    m[1][2] = 12;
    m[1][0] = 14;
    m[1][1] = 21;
    m[1][2] = 0;

    int new_m = set_zero(m, i, j);

    for(int d = 0; d < i; d++)
    {
        for(int e = 0; e <= j; e++)
        {
            printf("%d \t", new_m[i][j]);
        }
    }



    return 0;
}