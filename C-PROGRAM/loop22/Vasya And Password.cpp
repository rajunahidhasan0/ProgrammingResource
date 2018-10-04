#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc=0 ;
    cin>>test;
    while(test--){
        int a=0, b=0, c=0;
        string st;
        cin>>st;
        for(int i=0 ; i<st.size(); i++){
            if(isdigit(st[i]) ){
                a++;
            }
            if(isupper(st[i]) ){
                b++;
            }
            if(islower(st[i]) ){
                c++;
            }
        }
        if(a>=1 && b>=1 && c>=1){
            cout<<st<<endl;
            continue;
        }
        for(int i=0 ; i<st.size(); i++){
            if( a==0 ){
                if(isupper(st[i]) && b>1){
                    st[i] = '1';
                    a=1;
                    b--;
                }
                else if(islower(st[i]) && c>1){
                    st[i] = '1';
                    a=1;
                    c--;
                }
            }
            if( b==0 ){
                if(isdigit(st[i]) && a>1){
                    st[i] = 'A';
                    b=1;
                    a--;
                }
                else if(islower(st[i]) && c>1){
                    st[i] = 'A';
                    b=1;
                    c--;
                }
            }
            if( c==0 ){
                if(isupper(st[i]) && b>1){
                    st[i] = 'a';
                    b--;
                    c=1;
                }
                else if(isdigit(st[i]) && a>1){
                    st[i] = 'a';
                    a--;
                    c=1;
                }
            }
        }
        cout<<st<<endl;
    }
    return 0;
}

