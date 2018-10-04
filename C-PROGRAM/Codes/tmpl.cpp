#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
template <class T1,class T2=string> class  cl{
    public:
    T1 x;
    T2 y;
    void setv(T1 a,T2 b){
        x=a;
        y=b;
    }
    void pr(){
        cout<<x<<y<<endl;
    }
};
int main()
{
    cl<int,char*> c1;
    c1.setv(4," Shuvo");
    c1.y+=" Farhan";
    c1.pr();
    return 0;
}
