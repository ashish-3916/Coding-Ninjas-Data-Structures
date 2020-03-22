Write a recursive function that returns the sum of the digits of a given integer.

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    
    if(n==0)
        return 0;
    
    int rem=n%10;
    return rem+ sumOfDigits(n/10);
}
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
