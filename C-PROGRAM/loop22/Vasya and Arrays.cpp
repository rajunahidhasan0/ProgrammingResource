#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
LL ar[300050];
LL br[300050];
int main()
{
    LL n, m, test=0;

    cin>>n>>m;

    for(int i=0 ; i<n ; i++){
        scanf("%lld", &ar[i]);
        test+=ar[i];
    }
    for(int i=0 ; i<m ; i++){
        scanf("%lld", &br[i]);
        test-=br[i];
    }
    if(test!=0){
        cout<<-1<<endl;
        return 0;
    }
    LL ans1=m;
    LL ans2=n;
    LL u=0, v=0;
    cout<<"bal"<<endl;
    for(int i=0 ;  ; i++)
    {
        if(u>=n-1 || v>=m-1)break;
        if(ar[u]==br[v]){u++; v++;}
        else if(ar[u]>br[v]){
            ans2--;
            br[v+1] += br[v];
            v++;
        }
        else if(ar[u]<br[v]){
            ans1--;
            ar[u+1] += ar[u];
            u++;
        }
    }
    cout<<min(ans1, ans2)<<endl;
    return 0;
}


