#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, k, m, ans=0;
    int ar[200010];
    cin>>n>>k;
     for(int i=0 ; i<n ; i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, ar+n);
    m = n/2;
    if(ar[m]==k){
        ans=0;
    }
    else if(ar[m]<k){
        for(int i=m ; ; i++){
            if(ar[m]<k)ans+=k-ar[m];
            else break;
        }
    }
    else{
        for(int i=m ; ; i--){
            if(ar[m]>k)ans+=k-ar[m];
            else break;
        }
    }
    cout<<ans<<endl;
    return 0;
}


