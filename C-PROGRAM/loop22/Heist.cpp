#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n,maxi=0, mini=1000000100;
    int p, ans=0;
    cin>>n;

    for(int i=0 ; i<n; i++){
        scanf("%d", &p);
        if(p>maxi)maxi=p;
        if(p<mini)mini=p;
    }
    ans = (maxi-mini+1)-n;
    cout<<ans<<endl;
    return 0;
}


