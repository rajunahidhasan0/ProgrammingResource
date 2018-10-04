#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))


void multiply(string num1, string num2);

int main()
{
    int u=0;
    while (1)
    {

        string b1, b2, ans;
        int digit, factor = 1;
        cin>>b1>>b2;
        if(b1=="0" && b2=="0"){
            break;
        }
         if(u!=0) cout<<endl;
        u++;
        multiply(b1, b2);

    }
    return 0;
}




void multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    int kin=999 , ans =0;
    if (n1 == 0 || n2 == 0)
       return ;
    int a1[1000], a2[1000], c[1000]={0};
     for (int i=1; i<=n1; i++){
            a1[i] = num1[i-1]-'0';
     }
     for (int i=1; i<=n2; i++){
            a2[i] = num2[i-1]-'0';//cout<<a2[i];
     }
     memset(c,0, sizeof(c));
     int carry=0;
     int y=kin;
    for(int i=n2; i>=1 ; i--)
    {
        int k=kin;
        ///cout<<"Kinara "<<kin<<endl;
        carry =0;
        if(a2[i]==1){
            for(int j=n1 ; j>=1 ;j--, k--){
                c[k] += a1[j]+carry;
                carry=0;
                if(c[k]==2){carry=1; c[k]=0;}
                else if(c[k]==3){carry=1; c[k]=1;}
            }
        }
        else if(a2[i]==0){
            for(int j=n1 ; j>=1 ;j--, k--){
                c[k] += 0+carry;
                carry=0;
                if(c[k]==2){carry=1; c[k]=0;}
                else if(c[k]==3){carry=1; c[k]=1;}
            }
        }

        if(carry==1){c[k]=1;k--;}
        kin--;
        ans = k+1;/*
        cout<<"test :";
        for(int v=k ; v<=999 ;v++)printf("%d", c[v]);
        cout<<endl;*/
    }
    ///if(ans==0)ans=999-max(n1, n2)+1;
    int qq=ans;
    ans = 999-ans+1;
    carry=0;
    for(int i=1 ; i<=(ans-n1) ;i++)printf(" ");
    cout<<num1<<endl;
    for(int i=1 ; i<=(ans-n2) ;i++)printf(" ");
    cout<<num2<<endl;

    for(int i=1 ; i<=(ans-max(n1, n2)) ;i++)printf(" ");
    for(int i=1 ; i<=max(n1, n2) ;i++)printf("-");
    cout<<endl;
/*
    if(n2==1){
        if(a2[1]==1){
            cout<<num1<<endl;
        }
        else{
            for(int i=0 ; i<n1 ; i++){
                printf("0");
            }
        }
        cout<<endl;
        return ;
    }
*/
    int sp1=ans-n1, sp2=0;
    kin=y;
    for(int iin=n2; iin>=1 ; iin--)
    {
        int k=kin;

        for(int i=1 ; i<=sp1 ; i++)printf(" ");
        if(a2[iin]==1){
            int arr[999]={0}, l=1;
            for(int j=n1 ; j>=1 ;j--, k--){

                int x = a1[j]+carry;
                carry=0;
                if(x==2){carry=1; x=0;}
                else if(x==3){carry=1; x=1;}
                arr[l++]=x;
            }
            for(int j=l-1 ; j>=1 ;j--){
                printf("%d", arr[j]);
            }
            cout<<endl;
        }
        else{
            for(int j=1 ; j<=n1 ;j++){
                printf("%d", 0);
            }
            cout<<endl;

        }
        if(carry==1)c[k]=1;
        kin--;
        sp1--;
    }
    for(int i=qq ; i<=999 ; i++){
        printf("-");
    }
    cout<<endl;
    for(int i=qq ; i<=999 ; i++){
        printf("%d", c[i]);
    }
    cout<<endl;

    return ;
}
