#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
struct st{
    char name[30];
    int x,y;
} obj[11];

void func()
{
    for (int i=1;i<10;i++)
    {
        for (int j=i+1;j<=10;j++){
            if (obj[i].x<obj[j].x){
                st tmp;
                tmp=obj[i];
                obj[i]=obj[j];
                obj[j]=tmp;
            }
            else if (obj[i].x==obj[j].x)
            {
                if (obj[i].y>obj[j].y){
                    st tmp;
                    tmp=obj[i];
                    obj[i]=obj[j];
                    obj[j]=tmp;
                }
                else if (obj[i].y==obj[j].y)
                {
                    if (strcmp(obj[i].name,obj[j].name)>0){
                        st tmp;
                        tmp=obj[i];
                        obj[i]=obj[j];
                        obj[j]=tmp;
                    }
                }
            }
        }
    }

    for (int i=1;i<5;i++)
    {
        for (int j=i+1;j<=5;j++)
            if (strcmp(obj[i].name,obj[j].name)>0) {
                st tmp;
                tmp=obj[i];
                obj[i]=obj[j];
                obj[j]=tmp;
            }
    }
    for (int i=6;i<10;i++)
    {
        for (int j=i+1;j<=10;j++){
            if (strcmp(obj[i].name,obj[j].name)>0){
                st tmp;
                tmp=obj[i];
                obj[i]=obj[j];
                obj[j]=tmp;
            }
        }
    }
}

int main()
{
    int test, t=0;
    scanf("%d",&test);
    while(test--){
        printf("Case %d:\n",++t);
        for (int i=1;i<=10;i++)
        {
            getchar();
            scanf("%s %d %d", &obj[i].name, &obj[i].x, &obj[i].y);

        }
        func();
        printf("(%s, %s, %s, %s, %s)\n",obj[1].name,obj[2].name,obj[3].name,obj[4].name,obj[5].name);
        printf("(%s, %s, %s, %s, %s)\n",obj[6].name,obj[7].name,obj[8].name,obj[9].name,obj[10].name);
    }
}
