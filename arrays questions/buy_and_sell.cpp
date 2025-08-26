#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int price[] = {7,1,5,23,16,4};
    int buy = INT_MAX;
    int maxProfit =0;
    int n = sizeof(price)/sizeof(int);
    for(int i =0; i<n; i++){
       if(price[i]<buy)
       {
          buy = price[i];
       }
       int profit =  price[i]-buy;
       if(maxProfit<profit) 
       {
          maxProfit  = profit;  
       }

    }
    cout<<"max profit = "<<maxProfit;
       
    return 0;
};