#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, ans, m=0;
    int ar[120000];
    int br[120000];
    memset(br, 0, sizeof(br));
    cin>>n;
    for(int i=0 ; i<n ; i++){
        scanf("%d", &ar[i]);
        if(ar[i]==0){m++;}
    }
    ans = n-m+1;

    for(int i=0 ; i<n ; i++){
        if(ar[i]==0){br[i]=ans++;}
    }
    ans = n-m;
    for(int i=0 ; i<n ; i++){
        if(br[ar[i] ]==0)br[ ar[i] ] = ans--;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ", br[i]);
    }

    return 0;
}


