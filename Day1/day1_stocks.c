#include <stdio.h>
#include <stdlib.h>


//Finding best day to buy, sell and the profit
int maxProfit(int* prices, int pricesSize){
int profit = 0, buyi = 0, i;
        for (i = 1; i < pricesSize; i++) 
        {
            if(prices[i] - prices[buyi] > profit)
            {
                profit = prices[i] - prices[buyi];
            }
            else if(prices[i] - prices[buyi] < 0)
            {
                buyi = i;
            }
        }
        return profit;
}	


void main()
{
	//Prices Array and number of days(n)
	int *prices;
	int n, i;
	
	//Start
	printf("\n========Best Day to Buy and Sell Stocks========");
	
	//Getting number of days
	printf("\nEnter number of days: ");
	scanf("%d", &n);
	prices = (int*)malloc(n * sizeof(int));
	
	//Getting prices
	printf("\nEnter Prices...");
	
	for(i = 0; i < n; i++)
	{
		printf("\nDay no.%d: ", i+1);
		scanf("%d", &prices[i]);
	}
	
	printf("\nMax Profit: %d", maxProfit(prices, n));

}
