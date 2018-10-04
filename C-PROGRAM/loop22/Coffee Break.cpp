#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
struct st{
    int day;
    int minit;
};
int main()
{
    int n, m, d, ans=0;
    int p;
    st ob[200100];
    int ar[200100]={0};
    int mark[200100];
    cin>>n>>m>>d;
    for(int i=0 ; i<n; i++){
        scanf("%d", &ar[i]);
        ob.D = ar[i];
        ob.M = i;
    }
    int j=0, k=0;
    while(j<n){
        ans++;
        int pos = ob[k].M;
        mark[pos] = ans;
        k++;
        while(1){


        }


    }
    cout<<ans<<endl;
    for(int i=1 ; i<=n; i++){
        printf("%d ", mark[i]);
    }
    return 0;
}


