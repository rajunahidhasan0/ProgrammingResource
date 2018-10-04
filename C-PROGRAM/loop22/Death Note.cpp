#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, k, ans=0, p, m;
    cin>>n>>k;
    m = k;
    for(int i=0 ; i<n ; i++){
        scanf("%d", &p);
       if(m<=p){
            p-=m;
            ans++;
            m=k;
        }
        else{ m-=p;p=0;}
        ans += (p/k);
        m -= (p%k);
        if(m==0){
            ans++;
            m=k;
        }
        if(i==0) cout<<ans;
        else cout<<" "<<ans;
        ans=0;
    }
    cout<<endl;
    return 0;
}


