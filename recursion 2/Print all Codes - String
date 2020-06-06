
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. 
Write a program to print the list of all possible codes that can be generated from the given string
1123
Sample Output:
aabc
kbc
alc
aaw
kw

#include <string.h>
using namespace std;

void help(string input,string output)
{
    if(input.size()==0)
    {
        cout<<output<<endl;
        return;
    }
    
    char c1=(input[0]-'0')+96;
    help(input.substr(1),output +c1);
    
    int d =(input[0]-'0')*10 +(input[1]-'0');
    if( d>=10 && d<=26)
    {   char c2= d+96;
        help(input.substr(2),output +c2);
    }
}


void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    
    help(input,output);
}
#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
