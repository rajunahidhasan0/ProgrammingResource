#include<bits/stdc++.h>
using namespace std;

int main(){
    int MX=30000;
    long long way[MX+5];
    int coin[5] = {50,25,10,5,1};
    memset(way,0,sizeof(way));

    way[0]=1; ///not taking any coins also an option
    for(int j=0;j<5;j++){
        for (int i = coin[j]; i <= MX ; i++)
        {
            way[i] += way[i - coin[j]];
        }
    }

    int cents;
    while (cin >> cents)
    {
        if (way[cents] == 1)
            cout << "There is only 1 way to produce " << cents << " cents change.\n";
        else
            cout << "There are " << way[cents] << " ways to produce " << cents << " cents change.\n";
    }
    return 0;
}

