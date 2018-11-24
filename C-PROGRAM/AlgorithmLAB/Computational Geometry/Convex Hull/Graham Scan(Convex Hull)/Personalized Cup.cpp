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
int a[1005];
int c[1005];
int main()
{

        int n, m, ans=0, maxi=0;

        string st;
        cin>>st;

        n=st.size();

        m=n/20;

        if(n%20==0){
            printf("%d %d\n", m, min(n, 20));

            for(int i=0; i<n ; i++)
            {
                cout<<st[i];
                if( (i+1)%20==0)cout<<endl;
            }
        }
        else{
            m++;
            int tmp=n/m;
            if(n%m!=0)tmp++;
            printf("%d %d\n", m, tmp);

            int so=(m*tmp)-n;
            //cout<<so<<endl;
            int v=0;
            for(int i=1, l=0; i<=m ; i++)
            {
                if(so==1){v=1;so--;}
                else v=0;
                for(int j=1; j<=tmp-v ; j++)
                {
                    cout<<st[l++];
                }
                for(int j=0; j<v ; j++)cout<<"*";
                cout<<endl;
            }

        }

    return 0;
}

