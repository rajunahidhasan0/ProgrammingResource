#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    scanf("%ld",&n);

    while(n--){
        long int i,j,l,c=0;
        char s[10];
        cin>>s;
        l = strlen(s);
        if( l == 5 ){
            printf("%ld\n",3);
            continue;
        }
        if(s[0]=='o')c++;
        if(s[1]=='n')c++;
        if(s[2]=='e')c++;
        if(c>=2)printf("%ld\n",1);
        else printf("%ld\n",2);
    }

    return 0;
}



