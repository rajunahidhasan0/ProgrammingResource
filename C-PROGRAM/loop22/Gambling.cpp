#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    long long int n,m, ans=0, A=0, B=0;
    long long int ar[100005];
    long long int br[100005];
    cin>>n;
    for(long long int i=0 ; i<n; i++){
        scanf("%lld", &ar[i]);
    }
    for(long long int i=0 ; i<n; i++){
       scanf("%lld", &br[i]);
    }
    sort(ar, ar+n);
    sort(br, br+n);
    long long int u=n-1, v=n-1;
    for(long long int i=0 ; i<n ; i++){
        if(u>=0 && v>=0 && ar[u]>br[v]){
                A+=ar[u];
                u--;
        }
        else if(u>=0 && v>=0 && ar[u]<br[v]){
            v--;
        }
        else if(v<0){
            A+=ar[u];
                u--;
        }
        else{
            v--;
        }


        if(u>=0 && v>=0 && ar[u]>br[v]){
            u--;
        }
        else if(u>=0 && v>=0 && ar[u]<br[v]){
            B+=br[v];
            v--;
        }
        else if(v<0){
            u--;
        }
        else{
            B+=br[v];
            v--;
        }
    }
    cout<<A-B<<endl;
    return 0;
}


