#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans, m, u;
    double n, k;
    cin>>n>>k;
    m = ceil(n/((2.0*k)+1));
    cout<<m<<endl;
    u = m*((2*k) +1);
    u = u-n;
    ans=k+1;
    if(ans-u>=1){ans-=u;u=0;}
    else{ ans = 1; u-=(ans-1);}
    printf("%d", ans);
    for(int i=1 ; i<m ;i++)
    {
        ans+=2*k+1;
        printf(" %d", ans);

    }
    cout<<endl;
    return 0;
}



