#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    LL ay, ab, Y=0, B=0, ans=0;
    LL y, g, b;
    cin>>ay>>ab;
    cin>>y>>g>>b;
    B=3*b+g;
    Y=g+2*y;

    Y-=ay;
    if(Y<0)Y=0;
    B-=ab;
    if(B<0)B=0;
    ans = Y+B;
    cout<<ans<<endl;
    return 0;
}


