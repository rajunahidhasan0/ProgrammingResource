#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main(){
    string s1,s2;
    int ans1=0,ans2=0;

    while(getline(cin,s1)){
        getline(cin,s2);

        ans1=0;
        ans2=0;

        for(int i=0;i<s1.size();i++){
            if(islower(s1[i])) ans1+=s1[i]-'a'+1;
            else if(isupper(s1[i])) ans1+=s1[i]-'A'+1;
        }

        if(ans1%9==0) ans1=9;
        else ans1%=9;

        for(int i=0;i<s2.size();i++){
            if(islower(s2[i])) ans2+=s2[i]-'a'+1;
            else if(isupper(s2[i])) ans2+=s2[i]-'A'+1;
        }

        if(ans2%9==0) ans2=9;
        else ans2%=9;

        double l1, l2;
        l1=(double)ans2*100.0/ans1;
        l2=(double)ans1*100.0/ans2;
        if(ans1>=ans2) printf("%.2lf %%\n",l1);
        else printf("%.2lf %%\n",l2);
    }

    return 0;
}
