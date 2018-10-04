#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int l1, l2;
    l1=s1.size();
    l2=s2.size();

    if(l1%2==0 || l2%2==0){
        cout<<"YES"<<endl;
    }
    else if(l1==1 && l2==2 && s1==s2){
        cout<<"YES"<<endl;
    }
    else if(s1[l1/2]==s2[l2/2]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


