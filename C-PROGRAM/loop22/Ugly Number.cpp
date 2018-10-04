#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, k, t=0;
    cin>>n;
    string st;
    cin>>st;
    for(int i=1 ; i<st.size(); i++){
        if(st[i-1]>st[i]){

            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}


