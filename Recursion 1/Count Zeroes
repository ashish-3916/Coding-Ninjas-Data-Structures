Given an integer n, count and return the number of zeros that are present in the given integer using recursion.

#include <iostream>

using namespace std;


int countZeros(int n) {
    // Write your code here
    if(n==0)
        return 0;
    int rem=n%10;
    if(rem==0)
        return 1+countZeros(n/10);
    else 
        return countZeros(n/10);
}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
