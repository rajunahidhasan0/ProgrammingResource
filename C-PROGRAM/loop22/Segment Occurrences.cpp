#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, m, q, ans=0;
    int ar[100]={0};
    cin>>n>>m>>q;
    string s1, s2;
    cin>>s1>>s2;
    int l, r;
    for(int i=0 ; i<q; i++){
        scanf("%d %d", &l , &r);
        if((r-l+1)<m)cout<<0<<endl;
        else{
            for(int j=l-1 ; j<=r-1 ; j++){
                int c=0;
                while(1){
                    if(c==m || j+c>r-1)break;
                    if(s1[j+c]!=s2[c])break;
                    c++;
                }
                ///cout<<c<<endl;
                if(c==m)ans++;
            }
            cout<<ans<<endl;
            ans=0;
        }
    }
    return 0;
}


