// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.

#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int x)
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Return output and don't print it.
       Taking input and printing output is handled automatically.
    */
    if (size == 0)
        return -1;
    if (*(input) == x)
        return 0;
    int ans = firstIndex(input + 1, size - 1, x);
    if (ans != -1)
    {
        ans++;
    }
    return ans;
}
/*
    PSEUDOCODE
 base case check: if size==0 return -1
 if input==x ans=0; return ans;
 if(first index !=-1)
        ans++;
 return ans;
*/

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << firstIndex(input, n, x) << endl;
}