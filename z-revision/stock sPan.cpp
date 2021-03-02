#include<stack>
int* stockSpan(int *arr, int size)  {
    // Write your code here
    int * ans  = new int [size];

    stack < pair<int , int > >  s ;

    int index = 0 ;

    for(int i = 0 ; i< size ; i++)
    {
        if(s.size()==0)
        {
            ans [ index++] = -1;
        }
        else if( s.top().first  >=  arr[i])
        {
            ans[index++] =  s.top().second;
        }
        else
        {
            while( s.size() and s.top().first< arr[i])
                s.pop();
            if(s.size()==0)
            {
                ans [index++] = -1;
            }
            else if( s.top().first  >=  arr[i])
            {
                ans[index++] =  s.top().second;
            }
        }
      s.push({ arr[i] ,  i }); 
    }
	for(int i =0 ; i< size  ; i++)
        ans[i] = i- ans[i];

	return ans ;

}
