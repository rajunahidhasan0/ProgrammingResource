#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, k, c=0, ans=0, on=0, m;
    cin>>n>>k;
    m=k;
    int ar[500]={0}, br[500]={0};
    string st;
    cin>>st;
    for(int i=0 ; i<n; i++){
         if(st[i]=='1')
         {
            on++;
            c=c+1;
            ar[i] = c;
         }
         else{ ar[i]=0; c=0;}
         ///cout<<ar[i]<<" ";
    }
    for(int i=0 ; i<n; i++){
        br[ ar[i] ]++;
    }
    int ut=0, j, y, z;
    for(j=1 ; j<=n; j++){
            for(int i=0 ; i<n; i++){
                if(ar[i]==j){
                   /* if(i>0 && ar[i-1]<0){
                        ar[i] += ar[i-1];
                    }*/
                    m-=j;
                    if(m<0){
                        ut=-1;
                        y = j ;
                        z = i;
                        break;
                    }
                    ar[i]=0;
                }
            }
            if(ut==-1)break;
    }
    for(int i=0 ; i<n; i++)
    {
        if(ar[i]>0){
                ans++;
                //while(ar[i])
        }
    }
    cout<<ans<<endl;
    return 0;
}


