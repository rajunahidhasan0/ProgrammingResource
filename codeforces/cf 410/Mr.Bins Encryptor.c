#include <stdio.h>
FILE *inp,*ouf;
void fn1(int *p){

        int i,j,x=0,y=0,lnth=0,b[10000],c1=0,c[100][100];
        char  a[10000] ;
        inp=fopen("file.txt","r");
        ouf=fopen("enc.txt","w");

        //printf("Enter your words :\n");
        fscanf(inp,"%[^\n]",a);
        for(i=0;a[i] !='\0';i++){
            lnth++;
        }

        for(i=0;a[i] !='\0';i++){
            x=a[i];
            if(x==32){
                x=38;
            }
            else{
                x=x+(*p - 3);
            }
            b[i]=x;
        }

        y=sqrt(lnth)+1;

      //  printf("After encryption:\n");

        for(i=0;i<y;i++){
            for(j=0;j<y;j++){
                c[i][j]=b[c1];
                c1++;
                if(c1>lnth) break;
                fprintf(ouf,"%c",c[i][j]);
            }
        }
        fprintf(ouf,"\n\n");
        printf("Done.\n\n",b);
        fclose(ouf);
        fclose(inp);

}

int fn2(void){
    int p;
            while(1){
            printf("Enter a parameter must be positive & less then 10\n");
            scanf("%d",&p);
            if(p>=0&&p<=10) break;
                }
            return p;

}

void fn3(int *p){
    int i,j,y=0,x=0,c=0,b[10000];
    char a[10000];
    inp=fopen("enc.txt","r");
    ouf=fopen("mainfile.txt","w");

    y=*p;
    //printf("Enter your words:\n");

    fscanf(inp,"%[^\n]",a);

    for(i=0;a[i] !='\0';i++){
        c++;
        }

    for(i=0;a[i] !='\0';i++){
            x=a[i];
            if(x==38){
                x=32;
            }
            else{
                x=x -(y -3);
            }
            b[i]=x;
    }
    //printf("Your Sentance is :\n");
    for(i=0;i<c;i++){
        fprintf(ouf,"%c",b[i]);
    }
    fprintf(ouf,"\n\n");
    printf("Done.\n");
    printf("\n");
    fclose(ouf);
    fclose(inp);
}



int main()
{
    int x,p;
    printf("Welcome to  Encryptor : \n");
    printf("\n");
    while(1){
        printf("To ECRYPT enter ''1'' , To DECRYPT enter ''2'' \n");
        scanf("%d",&x);


            if(x==1){
                p=fn2();
                fn1(&p);
            }
            else if(x==2){
                p=fn2();
                fn3(&p);
            }

    }
    return 0;
}
