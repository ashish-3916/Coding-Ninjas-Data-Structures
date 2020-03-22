Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion. Return the answer.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
   
    if(k==0)
        return 1;
    int no=2;
    for (int i=1;i<k;i++)
    {
        no=no*2;
    }
     double power= 1/(double)no;
    
    return power+geometricSum(k-1);
}



int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
