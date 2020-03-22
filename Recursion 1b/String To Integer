Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

#include <iostream>
using namespace std;

#include <bits/stdc++.h>

#include <cmath>

int help(char *a,int s)
{
     int p=a[0];
     p=p-48;
    
    if(s==1)
    {
       return p;
    }

    return (p* pow(10,s-1)+ help(a+1,s-1));
}

int stringToNumber(char input[]) {
        
    int size=strlen(input);
    int ans=help(input,size);
    return ans;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
