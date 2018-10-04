#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    string st, ans;
    cin>>st;
    for(int i=1 ; i<st.size();)
    {
        if(st[i-1]=='1' && st[i]=='0'){
            int swa=st[i-1];
            st[i-1] = st[i];
            st[i] = swa;
            i--;
        }
        else if(st[i-1]=='2' && st[i]=='1'){
            int swa=st[i-1];
            st[i-1] = st[i];
            st[i] = swa;
            i--;
        }
        else i++;
    }
    cout<<st<<endl;
    return 0;
}


