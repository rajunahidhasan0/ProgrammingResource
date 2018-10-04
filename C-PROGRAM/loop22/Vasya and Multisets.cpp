#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, c1=0, c2=0, t=0;
    int ar[200]={0};
    int br[200]={0};
    int ans[200]={0};
    int an[200]={0};
        scanf("%d", &n);

        for(int i=0 ; i<n; i++){
            scanf("%d", &ar[i]);
            br[ ar[i] ]++;
        }
        for(int i=0 ; i<n ; i++){
            if(br[ar[i] ]==1){c1++;}
            else if(br[ar[i]]==2)c2++;
            if(br[ar[i]]>2)t=1;
        }
        int q=0, tp=0;
        if(c1%2==1 ){
            if(t==0){cout<<"NO"<<endl;return 0;}
            else{
                for(int i=0 ; i<n ; i++)
                {
                    if(br[ar[i]]>2)
                    {
                        an[i]=1;

                        break;
                    }
                }
            }
        }

        cout<<"YES"<<endl;

        int r=0, k;
        c1=c1/2;
        for( k=0 ; k<n ; k++){
            if(br[ ar[k] ] == 1 ){ans[k]=1; r++;}
            else ans[k]=2;
            if(r==c1)break;
        }
        for(int i=0 ; i<n ; i++){
            if(an[i] == 1 ){ans[i]=1; }
        }

        for(int u=0 ; u<n ; u++){
            if(ans[u]==1)cout<<"A";
            else cout<<"B";
        }

        cout<<endl;
    return 0;
}


