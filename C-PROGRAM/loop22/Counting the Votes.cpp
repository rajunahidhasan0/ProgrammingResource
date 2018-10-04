#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test;
    int n, m, maxi, co;
    map<string, string>stst;
    map<string, int>strint;

    string input, name, st, party;
    scanf("%d", &test);
    getline(cin,input);
    while(test--){
        stst.clear();
        strint.clear();
        getline(cin,input);
        maxi = 0;
        co = 0;
        scanf("%d", &n);
        getline(cin, input);
        for(int i=1 ; i<=n ; i++){
            getline(cin, name);
            getline(cin, party);
            stst[name] = party;
            }
        scanf("%d", &m);
        getline(cin, input);
        for(int i=1 ; i<=m ; i++){
            getline(cin, name);
            if(stst.find(name) != stst.end()) {
                strint[name] += 1;
                maxi = max(maxi, strint[name]);
                }
        }

        for(map<string, int> :: iterator it = strint.begin(); it != strint.end(); it++){
            if((*it).second == maxi){
                co++;
                st = stst[(*it).first];
            }
        }
        if(co == 1) cout<<st<<endl;
        else puts("tie");
        if(test>=1)puts("");
    }
	return 0;
}
