You have made a smartphone app and want to set its price such that the profit earned is maximised. 
There are certain buyers who will buy your app only if their budget is greater than or equal to your price.
You will be provided with a list of size N having budgets of buyers and you need to return the maximum profit that you can earn.
Lets say you decide that price of your app is Rs. x and there are N number of buyers. So maximum profit you can earn is :
 m * x
where m is total number of buyers whose budget is greater than or equal to x.



#include <bits/stdc++.h>
int maximumProfit(int budget[], int n) {
    // Write your code here
     sort(budget , budget+n);
    
    int temp[n];
    
    for(int i=0;i<n;i++)
    {
        temp[i]=budget[i]*(n-i);
    }
     sort(temp,temp +n);
    
    return temp[n-1];
    
    
}
