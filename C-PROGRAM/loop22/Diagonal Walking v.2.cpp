#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    LL test;
    cin>>test;
    while(test--){
        LL n, m, N, u, v, k, l, ans=0;
        cin>>n>>m>>k;
        u = min(m, n);
        v = max(m, n);
        if(v>k){
            cout<<-1<<endl;
        }
        else{
            ans+=u;
            k-=u;
            l=v-u;
            if(l%2==1)ans+=(k-1);
            else if(l%2==0 && k%2==0){
                ans+=k;
            }
            else{
                ans+=(k-2);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}


