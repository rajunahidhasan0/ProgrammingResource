#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
        LL n, q, m, t=0;
        cin>>n>>q;
        m=n*n/2;
        if((n*n)%2!=0)m++;
        for(LL i=1 ; i<=q ; i++)
        {
            LL x, y;
            cin>>x>>y;
            if( (x+y)%2==0 )
            {
                cout<<((n*(x-1)+y+1)/2)<<endl;
            }
            else{
                cout<<m+((n*(x-1)+y+1)/2)<<endl;
            }

        }
    return 0;
}


