#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,ln,f;
    char ch,s[10000];
    stack <char> st;
    map <char ,char> mp;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    mp[')']='(';
    mp['}']='{';
    mp[']']='[';
    gets(s);
    while(ts--){
        //scanf("%s",s);
        gets(s);
        ln=strlen(s);
        f=1;
        //puts(s);
        for(i=0;i<ln;i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==']'||s[i]=='}'||s[i]==')') {
                if(st.empty()){
                    f=0;
                    break;
                }
                ch=st.top();
                st.pop();

                if(ch!=mp[s[i]]){
                    f=0;
                    break;
                }
            }
        }
        if(!st.empty()){
                    f=0;
                }
        if(f)puts("Yes");
        else puts("No");
        while(!st.empty())st.pop();
    }
    return 0;
}
