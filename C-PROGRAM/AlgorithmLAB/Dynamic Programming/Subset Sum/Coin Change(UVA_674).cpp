
#include<bits/stdc++.h>
using namespace std;

int main(){
    int way[7490];
    int coin[5] = {50,25,10,5,1};
    memset(way,0,sizeof(way));

    way[0]=1; ///not taking any coins also an option
    for(int j=0;j<5;j++){
        for(int i=coin[j];i<7490;i++)
        {
            way[i]+=way[i-coin[j]]; /// using dynamic approach
        }
    }

    int n;
    while(scanf("%d",&n)!=EOF){
        cout<<way[n]<<endl;
    }
    return 0;
}
