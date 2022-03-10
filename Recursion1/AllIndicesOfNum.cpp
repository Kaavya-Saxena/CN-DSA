// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.

/*

APPROACH :FIRST

    check base condition: if size==0 return -1;
    int s=allIndexes(input,size-1,x,ouput);

    if(*input+size){
        output[s+1]=size+1;
        s++;
    }
    return s;


APPROACH :LAST

    check base condn: if size==0 return -1;
    int s=allIndexes(input+1,size-1);

    // increasing all indexes in output by 1
    for(int i=0;i<s;i++) ouput[i]+=1;

    // if this is also the answer
    if(*input==x){
        //shift array by 1 to right
        s++;
        for(int i=s-1;i>=1;i++){
            output[i]=output[i-1];
        }
        output[0]=0;

    }

    CODE SNIPPET:
     if(size==0) return 0;
    int s= allIndexes(input+1,size-1,x,output);

    for(int i=0;i<s;i++) output[i]+=1;

    if(*(input)==x){
        s++;
        for(int i=s-1;i>=1;i--){
            output[i]=output[i-1];
        }
        output[0]=0;

    }

    return s;

*/

#include <iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Save all the indexes in the output array passed and return the size of output array.
       Taking input and printing output is handled automatically.
    */

    // APPROACH FIRST
    if (size == 0)
        return 0;
    int s = allIndexes(input, size - 1, x, output);
    if (*(input + (size - 1)) == x)
    {
        output[s] = size - 1;
        // s++;
        // output+=1;
        return s + 1;
    }
    else
    {

        return s;
    }
}

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

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}
