int maxProfit(int* prices, int pricesSize) 
{
    int minPrice = __INT_MAX__, maxiProfit = 0, i;
    for(i = 0; i < pricesSize; i++)
    {
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if(prices[i] - minPrice > maxiProfit)
        {
            maxiProfit = prices[i] - minPrice;
        }
    }
    return maxiProfit;
}

#include<stdio.h>
int main()
{
    int prices[2] = {1, 2};
    int pricesSize = sizeof(prices) / sizeof(int);
    int max = maxProfit(prices, pricesSize);

    printf("%d", max);

    return 0;
}