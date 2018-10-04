#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
        int n, ans=0, k, t=0;
        int ar[500100]={0};
        cin>>n;
        scanf("%d", &ar[0]);
        k = ar[0];
        for(int i=1 ; i<n); i++){
            scanf("%d", &ar[i]);
            if(ar[i]!=k){
                t=1;
            }
        }
        if(t==0){
            cout<<-1<<endl;
            return 0;
        }
        sort(ar, ar+n);


        cout<<ans<<endl;
        printf("Case %d: %d\n", ++tc, ans);

    return 0;
}


