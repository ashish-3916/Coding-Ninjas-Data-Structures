Given a string mathematical expression, return true if redundant brackets are present in the expression. 
Brackets are redundant if there is nothing inside the bracket or more than one pair of brackets are present.

Sample Input 1:
((a + b)) 
Sample Output 1:
true
Sample Input 2:
(a+b) 
Sample Output 2:
false

// in current code test cases like  }{}{}{}{}{ fails
// see soln for other aproach

bool checkRedundantBrackets(char *input) {
    // Write your code here
    stack <char> s;
    int count;
    int i=0;
    int len =0;
    while(input[len]!='\0'){
        len++;
    }
    while(i<len)
    {  
        count =0;
        while(input[i]!=')' && i<len)
        {
            s.push(input[i]);
            i++;
        }
        i=i-1;
        while(input[i]!='(')
        {
            s.pop();
            count++;
            i--;
        }
        s.pop();

        if(count==0) return true;

        else i=i+count+2;
    }
    return false;
}
