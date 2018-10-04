#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("test.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int n, m;
int fr[]={1, 1, 0, -1, -1, -1, 0, 1};
int fc[]={0, 1, 1, 1, 0, -1, -1, -1};
bool valid(string st[],int u, int v){
    if(u<0 || u>=n || v<0 || v>=m)return 0;
    if(st[u][v]=='*')return 0;
    return 1;
}


int main()
{
    int tc=0;
    Fin();
    while(1){
        string st[102], s[102];
        cin>>n>>m;
        if(m==0 && n==0)break;
        for(int i=0; i<102 ;i++)
        {
            st[i].clear();
        }
        for(int i=0; i<n ;i++)
        {
            cin>>st[i];
            for(int j=0; j<m ;j++)
            {
                if(st[i][j]=='.')st[i][j]='0';
            }
        }
        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<m ;j++)
            {
                if(st[i][j]=='*'){
                    for(int k=0; k<8 ;k++)
                    {
                        if( valid(st,i+fr[k], j+fc[k]) ){
                            st[i+fr[k]][j+fc[k]]+=1;
                        }
                    }
                }
            }
        }
        printf("Field #%d:\n", ++tc);
        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<m ;j++)
            {
                cout<<st[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}


