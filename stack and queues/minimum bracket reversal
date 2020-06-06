Given a string expression which consists only ‘}’ and ‘{‘. The expression may not be balanced. 
You need to find the minimum number of bracket reversals which are required to make the expression balanced.
Return -1 if the given expression can't be balanced.
Input Format :
String S
Output Format :
Required count
Sample Input 1 :
{{{
Sample Output 1 :
-1
Sample Input 2 :
{{{{}}
Sample Output 2 :
1

#include <stack>
int countBracketReversals(char input[]){
	// Write your code here
    stack <char> s;
    
    int totalreversal=0;
    for(int i=0;input[i]!='\0';i++)
    {  if(s.empty())
         s.push(input[i]);
     
     else
     {
        if(input[i]=='}' && s.top()=='{'  )   //{}
       		 {s.pop();}
       else if(input[i]=='{' && s.top()=='}')  //}{
       {
           s.pop();
           totalreversal+=2;
       }
        else								//{{   //}}
          s.push(input[i]);
     }  
        
    }
    
    if(s.size()%2==0)
        return s.size()/2+totalreversal;
    else return -1;

}
