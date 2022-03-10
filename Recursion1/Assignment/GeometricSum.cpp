// Given k, find the geometric sum i.e.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k)
{
    // Write your code here
    if (k == 0)
        return 1;
    double n1 = geometricSum(k - 1);
    double n2 = 1 / pow(2, k);
    double ans = n1 + n2;
}

int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}