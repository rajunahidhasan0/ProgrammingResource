#include<bits/stdc++.h>
using namespace std;
#define FO() freopen("test.txt","r",stdin)
#define MS(arr, num) memset(arr, num, sizeof(arr))
vector<int>vt[102];
int ind[102];
string stans[102];
map<string, int>mp;
void topsort(int n)
{
    priority_queue< int, vector<int>, greater<int> > Q;
    for(int i=1; i<=n ;i++){
        if(ind[i]==0)Q.push(i);
    }
    while(!Q.empty())
    {
        int u=Q.top();
        Q.pop();
        for(vector<int>::iterator it = vt[u].begin() ; it != vt[u].end() ; it++)
        {
                ind[*it]--;
                if(ind[*it] == 0)
                    Q.push(*it);
        }
        cout<<" "<<stans[u];
        ///for(int y=0; y<vt[u].size(); y++){ind[ vt[u][y] ]--; if(ind[ vt[u][y] ]==0)Q.push(vt[u][y]);}
    }
    printf(".\n");
    return;
}
int main()
{
    int n, tc=0;
    ///FO();
    while(cin>>n)
    {
        for(int i=0;i<101; i++){vt[i].clear(); stans[i].clear();}
        mp.clear();
        MS(ind, 0);
        string st[102];
        int mark=1;
        for(int i=0; i<n ;i++){
            cin>>st[i];
            stans[mark] = st[i];
            mp[ st[i] ] = mark++;
        }
        int m;
        cin>>m;
        for(int i=0; i<m ;i++){
            string st1, st2;
            cin>>st1>>st2;
            vt[ mp[st1] ].push_back(mp[st2]);
            ind[ mp[st2] ]++;
        }
        cout<<"Case #"<<++tc<<": Dilbert should drink beverages in this order:";
        topsort(n);
    }


    return 0;
}


