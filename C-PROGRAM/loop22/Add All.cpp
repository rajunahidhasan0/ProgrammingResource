#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n;
    while(1){
        cin>>n;
        int ar[n+2], ans=0;
        if(n==0)break;
        for(int i=0 ; i<n ; i++){
            scanf("%d", &ar[i]);
        }
        sort(ar, ar+n);
        ans=ar[0]+ar[1];
        for(int i=2 ; i<n ; i++){
            ans*=2;
            ans+=ar[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}


