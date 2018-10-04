#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, m=0;

    for (int i=2; i<1000000; i++)
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                m++;

        }
    cout<<m<<endl;
    cin>>n;
    string st;
    int ar[200]={0};
    cin>>st;

    for(int i=0 ; i<n  ;i++)
    {
        ar[ st[i] ]++;

    }
    int o=0, t=0;
    for(int i='a' ; i<='z'  ;i++)
    {
       if(ar[i]==1){
        o++;
       }
       else if(ar[i]>=2)t++;

    }
    if(n==1) cout<<"Yes"<<endl;
    else if(t==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}


