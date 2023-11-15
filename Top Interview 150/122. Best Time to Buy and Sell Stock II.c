int maxProfit(int* prices, int pricesSize) 
{
    int maxiProfit = 0, i;

    for(i = 0; i < pricesSize - 1; i++)
    {
        if(prices[i+1] - prices[i] > 0)
        {
            maxiProfit = maxiProfit + prices[i + 1] - prices[i];
        }
    }

    return maxiProfit;
}

#include<stdio.h>
int main()
{
    int prices[6] = {7,1,5,3,6,4};
    int pricesSize = sizeof(prices) / sizeof(int);
    int max = maxProfit(prices, pricesSize);

    printf("%d", max);

    return 0;
}