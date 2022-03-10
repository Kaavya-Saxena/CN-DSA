// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

#include <iostream>
using namespace std;

void convertPi(int start, char input[])
{
    int n;
    for (n = 0; input[n] != '\0'; n++)
        ;
    for (int i = n; i >= start; i--)
    {
        input[i + 4] = input[i];
    }

    input[start + 0] = '3';
    input[start + 1] = '.';
    input[start + 2] = '1';
    input[start + 3] = '4';

    for (n = 0; input[n] != '\0'; n++)
        ;
    for (int i = start + 4; i <= n; i++)
    {
        input[i] = input[i + 2];
    }

    return;
}

void findPi(int start, int end, char input[])
{
    if (end - start == 0)
        return;
    findPi(start + 1, end, input);
    if (*(input + start) == 'p' && *(input + start + 1) == 'i')
    {
        convertPi(start, input);
    }
    return;
}

void replacePi(char input[])
{
    // Write your code here
    int n;
    for (n = 0; input[n + 1] != '\0'; n++)
        ;

    findPi(0, n, input);

    return;
}

/*
    PSEUDOCODE

    convertPi(input[],start)::
    int n
    for n=0;input[n]!='\0';n++
        ;
    for(int i=n;i>=0;i++){
        input[i+4]=input[i]
    }
    input[0]='3'
    input[1]='.'
    input[2]='1'
    input[3]='4'

    ********************************

    helper func::
    if(size==0) return;
    helper func(start+1,end,input)
    if(input=='p' && input+1=='i'){
        convertPi(input,start)
    }
    return;

    ********************************

    replacePi::
    int n;
    for n=0;input[n]!='\0';n++
        ;
    helper(start,n,input);
    return;
*/

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}