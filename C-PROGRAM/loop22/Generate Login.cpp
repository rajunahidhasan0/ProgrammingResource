#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n,l, l2;

    string st, st2, ans;
    cin>>st>>st2;
    cout<<st[0];
    for(int i=1 ; i<st.size() ; i++)
    {
        if(st[i]<st2[0])cout<<st[i];
        else break;

    }
    cout<<st2[0];
    cout<<endl;
    return 0;
}


