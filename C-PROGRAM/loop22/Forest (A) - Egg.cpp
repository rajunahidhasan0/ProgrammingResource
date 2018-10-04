#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n,ans=1, p, m;
    cin>>n;
    scanf("%d", &p);
    m=p;
    for(int i=1 ; i<n; i++){
        scanf("%d", &p);
        if(p>=m){
            ans++;
            m = p;
        }
    }
    cout<<ans<<endl;
    return 0;
}


