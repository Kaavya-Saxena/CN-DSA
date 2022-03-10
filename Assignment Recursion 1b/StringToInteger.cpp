// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

#include <iostream>
using namespace std;

int findNum(char input[], int start, int end)
{
    if (start - end == 0)
    {
        // std::cout<<input[start]
        return input[start] - 48;
    }
    int num = findNum(input, start, end - 1);
    int digit = input[end] - 48;
    // std::cout<<digit<<std::endl;
    int ans = (num * 10) + digit;
    return ans;
}

int stringToNumber(char input[])
{
    // Write your code here
    int n;
    for (n = 0; input[n] != '\0'; n++)
        ;
    int ans = findNum(input, 0, n - 1);
    return ans;
}

int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
