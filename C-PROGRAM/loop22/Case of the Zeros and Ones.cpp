#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0, m;
    string st;
    cin>>n;
    cin>>st;
    for(int i=0; i<st.size() ; i++)if(st[i]=='0')c++;
    m = min(n-c, c);
    cout<<(n-2*m)<<endl;
    return 0;
}


