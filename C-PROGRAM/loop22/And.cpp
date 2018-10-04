#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
map<int, int>mp, mapp;
int main()
{
    int n, x, ans=0, m;
    int ar[100010];
    int stor[50];
    mp.clear();
    mapp.clear();
    cin>>n>>x;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &ar[i]);
        if(mp[ ar[i] ] != 1)mp[ ar[i] ] = 1;
        else{ans=-1;}
    }
    if(ans==-1){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0 ; i<n ; i++)
    {
       if( (ar[i] & x)==ar[i])continue;
       else if(mp[ar[i] & x]==1){

            cout<<1<<endl;
            return 0;
       }
    }
    for(int i=0 ; i<n ; i++)
    {
       if( mapp[ x&ar[i] ] == 1 ){
            cout<<2<<endl;
            return 0;
       }
       mapp[ x&ar[i] ] = 1;
    }

    cout<<-1<<endl;
    return 0;
}


