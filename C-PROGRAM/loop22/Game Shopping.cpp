///9.38|
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, m, ans=0;
    int ar[10000], br[10000];
    cin>>n>>m;

    for(int i=0 ; i<n; i++){
       scanf("%d", &ar[i]);
    }
    for(int i=0 ; i<m ; i++){
        scanf("%d", &br[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(ar[i]<=br[ans]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


