// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Change in the given string itself. So no need to return or print anything

#include <iostream>
using namespace std;

void xRemoval(char input[], int start, int end)
{
    if (start == end)
        return;
    xRemoval(input, start + 1, end);
    if (input[start] == 'x')
    {
        for (int i = start; i < end; i++)
        {
            input[i] = input[i + 1];
        }
    }
    return;
}

void removeX(char input[])
{
    // Write your code here
    int n;
    for (n = 0; input[n] != '\0'; n++)
        ;

    xRemoval(input, 0, n);

    return;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}