#include <stdio.h>
int main()
{
    int i,j,ln;
    char s[50],c,t;
    // string is nothing but a char array ending with a '\0'
    gets(s);//gets function inputs string.It is similar as scanf("%s",s);
    printf("%s\n",s);//printing string
    //determining the size or length of array
    for(i=0;;i++){
        if(s[i]=='\0')break;//searching for '\0'
    }
    ln=i;//
    //Reversing string. U may think it reversing a normal array.
    for(i=0,j=ln-1;i<=j;i++,j--){
        //swapping s[i] and s[j]
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s\n",s);
    return 0;
}

