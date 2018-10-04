#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin(t) freopen(t,"r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
map<int, int>mp;
int main()
{
    ///Fin("test.txt");
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        int n, m=0, z1, z2;
        int ar[55];
        mp.clear();
        cin>>n>>z1>>z2;
        mp[z1]=1; mp[-z1]=1; mp[z2]=1; mp[-z2]=1;

        for(int i=0; i<n ; i++)
        {
            scanf("%d", &ar[i]);
        }

        for(int i=0; i<n ; i++)
        {
            if(mp[ ar[i] ]  || mp[ -ar[i] ]){
                m=1;
                break;
            }
        }
        if(m==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=0; i<n ; i++)
        {
            for(int j=0; j<n ; j++)
            {
                if(mp[ ar[i]+ar[j] ]  || mp[ ar[i]-ar[j] ] || mp[ -ar[i]+ar[j] ]  || mp[ -ar[i]-ar[j] ]){
                    m=1;
                    break;
                }
            }
            if(m==1)break;
        }


        if(m==1){
            cout<<2<<endl;
            continue;
        }
        cout<<0<<endl;

    }
    return 0;
}

