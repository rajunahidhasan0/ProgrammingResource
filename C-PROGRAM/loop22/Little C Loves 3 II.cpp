#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc, m, n , ans=0, a, b;
    cin>>m>>n;
    if(m<3 && n<3){cout<<0<<endl;return 0;}
    a = m-6;
    b = n-6;
    if(a>0 && b>0)
            ans+=(a*b)*12;
    a--; b--;
    if(a>0 && b>0)
            ans+=(a*b)*8;

    cout<<ans/2<<endl;
    return 0;
}


