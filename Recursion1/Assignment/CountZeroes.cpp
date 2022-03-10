// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

#include <iostream>
using namespace std;

int countZeros(int n)
{
    // Write your code here

    if (n >= 1 && n <= 9)
        return 0;
    if (n == 0)
        return 1;
    int zeroes = countZeros(n / 10);
    if (n % 10 == 0)
    {
        zeroes++;
    }
    return zeroes;
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}