// Write a recursive function that returns the sum of the digits of a given integer

#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    // Write your code here
    if (n == 0)
        return 0;
    int sum1 = sumOfDigits(n / 10);
    int sum2 = n % 10;

    return sum1 + sum2;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}