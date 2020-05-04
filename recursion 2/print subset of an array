Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 15
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 

void help(int input[],int startindex,int s,int output[],int m)
{
    //if all the elemts have been included 
    if(startindex==s)
    {
        //output array is filled we just need to print it's each element
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    
    int helpo[1000];
    int helps=0;
    help(input,startindex+1,s,output,m);
    int i;
    for( i=0;i<m;i++)
    {
        helpo[i]=output[i];
    }
    helpo[i]=input[startindex];
    help(input,startindex+1,s,helpo,m+1);
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[1001];
    int m=0;
    help(input,0,size,output,m);
}
