#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,m,n,dy[14][9]={{0},{0},{13,14,21,0},{8,21,26,0},{1,14,0},{1,0},{19,0},{18,0},{20,0},{0},{31,0},{19,0},{10,16,25,0}};
    char s[33],mn[22][33]={"","January","February","March","April","May","June","July", "August", "September", "October", "November", "December"};

    char ev[14][33][44]={{},{},{"Pohela Falgun","Valentine's Day","International Mother Language Day"},{"International Women's Day","International Color Day","Bangladesh Independence Day"},{"April Fools Day","Pohela Boishakh"},{"May Day"},{"Father's Day"},{"Mandela Day"},{"World Mosquito Day"},{},{"Halloween"},{"World Toilet Day"},{"Human Rights Day","Victory Day of Bangladesh","Christmas Day"}};
//    map <string , int> mp;
    //freopen("test.txt","r",stdin);

    scanf("%d",&ts);
    while(ts--){
        scanf("%s %d ",s,&n);

        for(i=1;i<13;i++){
            if(!strcmp(s,mn[i]))break;

        }
        if(i==1||(i==12&&n>24)){
            printf("Case %d: %s\n",++cn,ev[2][0]);
            continue;
        }

        m=i;
        n++;
      //  P(ev[12][1])
        for(i=0;dy[m][i];i++){

            if(dy[m][i]>=n){
                break;
            }
        }

        //P(dy[m][i])
        if(dy[m][i]==0){
            if(m==8)m++;
            m++;
            n=1;
         for(i=0;dy[m][i];i++){
            if(dy[m][i]>=n){
                break;
            }
         }
        }
        for(;n<33;n++){
            if(n==dy[m][i])break;
        }


        printf("Case %d: %s\n",++cn,ev[m][i]);
    }


    return 0;
}
