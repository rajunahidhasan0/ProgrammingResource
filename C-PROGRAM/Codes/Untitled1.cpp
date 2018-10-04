
    #include <bits/stdc++.h>
    using namespace std;

    vector <int> adj[1100];
    int vis[1005][1005];

    void bfs(int i)
    {
        int u;
        queue <int> vc;
        vc.push(i);
        vis[i][i]=1;
        while(!vc.empty()){
            u=vc.front();
            vc.pop();
            for(int j=0;j<adj[u].size();j++){
                int a=adj[u][j];
                if(vis[i][a]==0){
                    vis[i][a]=1;
                    vc.push(a);
                }
            }
        }
    }

    int main(void)
    {
        int tes,cn,a,b,c,d,w,x,y,z,k1,k2,k3,res1,count1,i,j;
        int ser[110];
        scanf("%d",&tes);
        for(cn=0;cn<tes;cn++){
            scanf("%d %d %d",&a,&b,&c);
            count1=0;res1=0;
            memset(ser,0,sizeof ser);
            memset(vis,0,sizeof vis);
            for(w=0;w<a;w++){
                scanf("%d",&ser[w]);
            }
            for(w=0;w<c;w++){
                scanf("%d %d",&k1,&k2);
                adj[k1].push_back(k2);
            }
            for(int i=0;i<a;i++){
                bfs(ser[i]);
            }
            for(d=0;d<=b;d++){
                for(z=0;z<a;z++){
                    if(vis[ser[z]][d]==1){
                        count1++;
                    }
                }
                if(count1==a){
                    count1=0;
                    res1++;
                }
                else{
                    count1=0;
                }
            }
            printf("Case %d: %d\n",cn+1,res1);
        }
        return 0;
    }


