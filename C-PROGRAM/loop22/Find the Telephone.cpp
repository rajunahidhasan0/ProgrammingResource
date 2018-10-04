#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

map<char,int>mp;
/*
ABC 2
DEF 3
GHI 4
JKL 5
MNO 6
PQRS 7
TUV 8
WXYZ 9
*/
int main()
{
    string st;
    mp['Z']=9;
    mp['S']=7;
    for(int t=2,u=0,y='A' ; y<='Y' ; y++){
        if(y=='S')continue;
        mp[y]=t;
        u++;
        if(u==3){t++; u=0;}
    }
    while(getline(cin, st)){
        for(int i=0 ; i<st.size(); i++){
            if(st[i]>='A' && st[i]<='Z')cout<<mp[ st[i] ];
            else cout<<st[i];
        }
        cout<<endl;
        st.clear();
    }
    return 0;
}


