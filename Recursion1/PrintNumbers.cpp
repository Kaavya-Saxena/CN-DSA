// Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
}