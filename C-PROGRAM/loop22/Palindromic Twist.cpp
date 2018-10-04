#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        string st;
        int n, m, t=0;
        cin>>m;
        cin>>st;
        for(int i=0 ; i<m/2 ; i++)
        {
            int u=abs((st[i]-'a')-(st[m-i-1]-'a') );
            if( u!=2 && u!=0 )
            {
                t=1;
                break;
            }
        }
        if(t)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
    }
    return 0;
}

