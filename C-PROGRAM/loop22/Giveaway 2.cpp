#include<bits/stdc++.h>
using namespace std;

bool func(int d, string b)
{
    int len, decimal, power, i;
    decimal =0;
    len = b.size();
    power = len-1;
    for(i = 0; i < len; i++) {
        decimal +=( b[i]-'0' )* pow(2, power);
        power--;
    }
    if(decimal==d)return 1;
    return 0;
}
int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {


        string st1, st2, st[5];
        st[0].clear(); st[1].clear();st[2].clear(); st[3].clear();
        int a=0, b=0, c=0, d=0;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        cin>>st2;
        int u=0;
        for(int j=0; j<st2.size(); j++)
        {
            if(st2[j]=='.'){
                    u++;
                    j++;
            }
            st[u]+=st2[j];
        }
        if(func(a,st[0]) && func(b,st[1]) && func(c,st[2]) && func(d,st[3]))
        {
            cout<<"Case "<<++tc<<": Yes"<<endl;
        }
        else cout<<"Case "<<++tc<<": No"<<endl;
    }

    return 0;
}



