#include <iostream>
#include <string>
using namespace std;
string key[]={" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeypad(int num,string str=""){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    if(num==0)
    {
        cout<<str<<endl;
        return;
    }
    int x=num%10;
    for(int i=0;i<key[x].size();i++)
    {
        printKeypad(num/10,key[x][i]+str);
    }
    
}
