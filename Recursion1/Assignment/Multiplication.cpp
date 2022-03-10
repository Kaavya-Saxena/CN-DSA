// Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed

#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    // Write your code here
    if (n == 1)
        return m;
    int num = multiplyNumbers(m, n - 1);
    return m + num;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}