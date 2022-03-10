// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.

void addStar(char input[], int start, int end)
{

    for (int i = end + 1; i >= start; i--)
    {
        input[i + 1] = input[i];
        // std::cout<<input[i]<<std::endl;
    }
    input[start] = '*';
    return;
}

void findRepeats(char input[], int start, int end)
{
    if (end - start == 0)
        return;
    findRepeats(input, start + 1, end);
    if (input[start] == input[start + 1])
    {
        // addStar(input,start+1,end);
        for (int i = 99; i > start; i--)
        {
            input[i + 1] = input[i];
            // std::cout<<input[i]<<std::endl;
        }
        input[start + 1] = '*';
    }
    return;
}

void pairStar(char input[])
{
    // Write your code here
    int n;
    for (n = 0; input[n] != '\0'; n++)
        ;
    findRepeats(input, 0, n);
    return;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}