#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007LL
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define EPS 0.00000001
#define INF INT_MAX
#define PI 2*acos(0.0)
#define c1(XX) cout<<XX<<endl
#define c2(XX,YY) cout<<XX<<" "<<YY<<endl
#define c3(XX,YY,ZZ) cout<<XX<<" "<<YY<<" "<<ZZ<<endl
int a[200005];
int ans[200005];
int m[200005];
int M[200005];

int main()
{

        int  t=0, maxi=0, mm=1;
        cin>>n;

        for(int i=1; i<=n ; i++)
        {
            scanf("%d", &a[i]);
        }

        m[1]=
        M[1]=
        for(int i=2; i<n ; i++)
        {
            m[i]
        }
        if(t){
            printf("-1\n");
        }
        else{
            for(int i=1; i<=n ; i++)
            {
                if(i==1)printf("%d", ans[i]);
                else{
                    printf(" %d", ans[i]);
                }
            }
            cout<<endl;
        }

    return 0;
}


