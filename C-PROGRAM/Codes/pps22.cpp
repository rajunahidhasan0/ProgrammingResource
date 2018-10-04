#include <stdio.h>
int main()
{
    int dec;
    printf("I love you. I want to marry U. Do you want do get someone reliable forever...\n");
    printf("Please Choose your reply:\n");
    printf("1. I love you 2 3 4 5........:D\n");
    printf("2. Ja Vag. Dure Giya Mor. Kochu gache fashi ne.\n");
    level1:
    scanf("%d",&dec);
    if(dec==1){
        printf("<3 :D");
    }
    else if(dec==2){
        printf(":) Amar Mritur jonno kau dayi noi:)\n ");
    }
    else {
        printf("Invlid input.Please Try again:\n");
        goto level1;
    }
    return 0;
}
