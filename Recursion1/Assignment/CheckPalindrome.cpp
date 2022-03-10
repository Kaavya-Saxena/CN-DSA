// Check whether a given String S is a palindrome using recursion. Return true or false.

#include <iostream>
using namespace std;

bool checkingPalindrome(int start, int end, char input[])
{

    if ((end - start) <= 1)
        return true;

    if (input[start] != input[end])
        return false;

    return checkingPalindrome(start + 1, end - 1, input);
}

bool checkPalindrome(char input[])
{
    // Write your code here
    int size;
    for (size = 0; input[size] != '\0'; size++)
        ;

    bool ans = checkingPalindrome(0, size - 1, input);

    return ans;
}

/*
    PSEUDOCODE OF F
    base condn: if sizee<=1 return true
    bool ispalindrome = F(start+1 end -1 input)
    if([start]!=[end])
        ispalindrome= false;

    return ispalindrome;

*/

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}