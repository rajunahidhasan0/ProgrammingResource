#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, k=0, ans=0;
    int ar[100], br[100];
    cin>>n;
    for(int i=0 ; i<n; i++){
        scanf("%d", &ar[i]);
        ans+=ar[i];
    }
    for(int i=0 ; i<n; i++){
        scanf("%d", &br[i]);
        k+=br[i];
    }
     if(k>ans)cout<<"No"<<endl;
     else cout<<"Yes"<<endl;
    return 0;
}


