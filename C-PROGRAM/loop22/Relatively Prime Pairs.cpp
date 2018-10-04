#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
        LL n, k, ans=0, m;
        cin>>n>>k;
        m = (k-n+1)/2;
        cout<<"YES"<<endl;
        for(LL i=n; i<k ;i+=2)
        {
            printf("%lld %lld\n", i, i+1);
        }
    return 0;
}


