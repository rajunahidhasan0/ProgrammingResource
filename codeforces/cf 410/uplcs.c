#include <stdio.h>
int fn(char *p){
    if(*p>='A'&&*p<='Z'){
        *p=*p-'A'+'a';
    }
    else if(*p>='a'&&*p<='z'){
        *p=*p-32;
    }
}
int main()
{
    int i,n;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++){
        fn(&s[i]);
    }
    printf("%s",s);

}
