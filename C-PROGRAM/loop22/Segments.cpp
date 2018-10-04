#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, ans=0;
    int ar[105]={0};
    cin>>n;
    /*
    for(int i=1 ; i<=n ; i++)
    {
        ar[i] = n/i;
    }
    int a=ar[0], b=ar[n];
    for(int i=1, j=n ; i<=n ; )
    {
        if(ar[i]==0)i++;
        if(ar[j]==0)j--;
        if(ar[i]+ar[j])
    }
    */
    ans = ( floor(n/2.0) + 1 )*ceil(n/2.0);
    cout<<ans<<endl;
    return 0;
}


