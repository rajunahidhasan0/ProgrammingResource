/*This program read random number from a file, and give an ascending and a decending order of those number in two different file.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outfile;
    ifstream inpfile;
    int ar[100000], n=0;
    inpfile.open ("input.txt");
    int value;
    while (inpfile >> value)
    {
        ar[n] = value;
        n++;
    }
    inpfile.close();
    n--;

    int temp;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
        {
            if (ar[j] > ar[j+1]) {
                temp  = ar[j];
                ar[j]  = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    outfile.open ("ascending.txt");
    for(int i=0 ; i<n ; i++)
    {
        outfile<<ar[i]<<" ";
    }
    outfile.close();
    outfile.open ("descending.txt");
    for(int i=n-1 ; i>=0 ; i--)
    {
        outfile<<ar[i]<<" ";
    }
    outfile.close();
    return 0;
}
