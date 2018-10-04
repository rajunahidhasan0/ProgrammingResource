#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,ln;
    char s[5000000];
   // freopen("test.txt","r",stdin);
    while(gets(s)){

    ln=strlen(s);
    for(i=0;i<=ln;i++){
        if(s[i]=='W')s[i]='Q';
        else if(s[i]=='E')s[i]='W';
        else if(s[i]=='R')s[i]='E';
        else if(s[i]=='T')s[i]='R';
        else if(s[i]=='Y')s[i]='T';
        else if(s[i]=='U')s[i]='Y';
        else if(s[i]=='I')s[i]='U';
        else if(s[i]=='O')s[i]='I';
        else if(s[i]=='P')s[i]='O';
        else if(s[i]=='[')s[i]='P';
        else if(s[i]==']')s[i]='[';
        else if(s[i]=='\\')s[i]=']';

        else if(s[i]=='S')s[i]='A';
        else if(s[i]=='D')s[i]='S';
        else if(s[i]=='F')s[i]='D';
        else if(s[i]=='G')s[i]='F';
        else if(s[i]=='H')s[i]='G';
        else if(s[i]=='J')s[i]='H';
        else if(s[i]=='K')s[i]='J';
        else if(s[i]=='L')s[i]='K';
        else if(s[i]==';')s[i]='L';
        else if(s[i]=='\'')s[i]=';';
        else if(s[i]=='X')s[i]='Z';
        else if(s[i]=='C')s[i]='X';
        else if(s[i]=='V')s[i]='C';
        else if(s[i]=='B')s[i]='V';
        else if(s[i]=='N')s[i]='B';
        else if(s[i]=='M')s[i]='N';
        else if(s[i]==',')s[i]='M';
        else if(s[i]=='.')s[i]=',';
        else if(s[i]=='/')s[i]='.';
        else if(s[i]=='1')s[i]='`';
        else if(s[i]=='2')s[i]='1';
        else if(s[i]=='3')s[i]='2';
        else if(s[i]=='4')s[i]='3';
        else if(s[i]=='5')s[i]='4';
        else if(s[i]=='6')s[i]='5';
        else if(s[i]=='7')s[i]='6';
        else if(s[i]=='8')s[i]='7';
        else if(s[i]=='9')s[i]='8';
        else if(s[i]=='0')s[i]='9';
        else if(s[i]=='-')s[i]='0';
        else if(s[i]=='=')s[i]='-';
        //else if(s[i]=='')s[i]='';


    }
    puts(s);
    }
    return 0;
}
