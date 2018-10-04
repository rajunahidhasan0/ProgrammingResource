#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int t, ans;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n;
        m=n/3;
        if(n<=4)ans=4;
        else if(n<=(m+m-1+m-2)){
            ans = m+m-1+m-2;
        }
        else if( n<=(m+m-1+m+1) ){
            ans =(m+m-1+m+1);
        }
        else if( n<=(m+m+2+m+1) ){
            ans = (m+m+2+m+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}


