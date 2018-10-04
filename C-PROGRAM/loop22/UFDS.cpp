#include<bits/stdc++.h>
using namespace std;
int w, u, v, tc;
int fr[10005];

bool AF(){
    if( (fr[u]==2 && fr[v]==2 )||(fr[u]==3 && fr[v]==3 ) )return 1;
    return 0;
}
bool AE(){
    if( (fr[u]==2 && fr[v]==3 )||(fr[u]==3 && fr[v]==2 ) )return 1;
    return 0;
}

void SF(){
    if(AE()){
       cout<<-1<<endl;
       return;
    }
    if(fr[u]==3 || fr[v]==3){
        fr[u]=3;
        fr[v]=3;
    }
    else{
        fr[u]=2;
        fr[v]=2;
    }
}
void SE(){
    if(AF()){
       cout<<-1<<endl;
       return;
    }
    if(fr[u]==2 || fr[v]==3){
        fr[u]=2;
        fr[v]=3;
    }
    else{
        fr[u]=3;
        fr[v]=2;
    }
}
int main()
{
    int n;
    tc=0;
    ///freopen("test.txt","r", stdin);
    memset(fr,0,sizeof(fr));
    cin>>n;
    while(1)
    {
        ++tc;
        int t;
        cin>>w>>u>>v;
        if(!w && !u && !v)break;
        if(w==1){
            SF();
        }
        else if(w==2){
            SE();
        }
        else if(w==3){
            t=AF();
            cout<<t<<endl;
        }
        else{
            t=AE();
            cout<<t<<endl;
        }
    }

    return 0;
}



