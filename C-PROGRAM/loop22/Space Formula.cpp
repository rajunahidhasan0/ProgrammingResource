#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))


int ar[300000];
int cr[300000];
int main()
{
        int n, d, ans=0, m=0;

        cin>>n>>d;

        for(int i=0 ; i<n ; i++){
            scanf("%d", &ar[i]);
            if(i==d-1){
                m=ar[i];
                ar[i]=-1;
            }
        }

        sort(ar, ar+n);
        for(int j=0 ; j<n ; j++){
            scanf("%d", &cr[j]);
        }
    if(n==1){cout<<1<<endl;return  0;}
        sort(cr, cr+n);
        m+=cr[n-1];
        for(int i=n-1, j=0, k=n-2 ; i>=0 && j<=k ; ){
            if(ar[i]>m){
                ar[i]=-1;
                k--;
                i--;
                ans++;
            }
            else{
                ar[i]+=cr[j];
                i--; j++;
            }
        }
        ///cout<<ans<<endl;
        sort(ar, ar+n);
         for(int i=1 ; i<n ; i++){
                //cout<<ar[i];
            if(ar[i]>m  ){
                ans++;
            }
        }
        cout<<ans+1<<endl;
        //nothing
    return 0;
}


