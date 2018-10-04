#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int ar[100010];
int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        int n, m, t=0;
        MS(ar, 0);
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d", &ar[i]);
        }
        sort(ar, ar+n);
        for(int i=0 ; i<n-1 ; i++)
        {
            if(ar[i]==ar[i+1]){
                if(t<3)cout<<ar[i]<<" "<<ar[i]<<" ";
                else if(t==3){  cout<<ar[i]<<" "<<ar[i]<<endl; break;}
                t+=2;
                i++;
            }
        }
    }
    return 0;
}


