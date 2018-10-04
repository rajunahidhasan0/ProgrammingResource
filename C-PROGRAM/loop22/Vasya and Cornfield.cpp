#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    //freopen("test.txt","r",stdin);
    //Fin();
        int n, d, m, ans=0, x1, y1, x2, y2, a, b, u;
        cin>>n>>d;
        cin>>m;
        u = (2*d)+1;

        for(int i=0 ; i<m; i++){
            scanf("%d %d", &a, &b);
            int dis, l1, l2;
            if(a>n || b>n){
                cout<<"NO"<<endl;
            }
            else if(d>a || d>b){
                if(d>a){
                    dis=d-a;
                    l1 = dis;
                    l2 = l1 + u-(dis*d);
                    if(l1<=b && l2>=b){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                    dis=d-b;
                    l1 = dis;
                    l2 = l1 + u-(dis*d);
                    if(l1<=a && l2>=a){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }

            }
            else if(n-d<=a || n-d<=b){
                if(n-d<=a){
                    dis=n-d-a;
                    l1 = dis;
                    l2 = l1 + u;
                    if(l1<=b && l2>=b){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                    dis=d-b;
                    l1 = dis;
                    l2 = l1 + u;
                    if(l1<=a && l2>=a){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
            else{
                if(n>=a){
                    dis=a-d;
                    l1 = dis;
                    l2 = l1 + u;
                    if(l1<=b && l2>=b){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                    dis=b-d;
                    l1 = dis;
                    l2 = l1 + u;
                    if(l1<=a && l2>=a){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
            //cout<<"NO"<<endl;
        }
    return 0;
}


