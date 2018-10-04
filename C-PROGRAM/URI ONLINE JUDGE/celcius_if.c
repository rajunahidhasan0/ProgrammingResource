#include<stdio.h>
int main()
{
    float C,F;

    scanf("%f",&C);

    F=1.8*C+32;

    if(F>=85.0){printf("WARM");
    }
    else{printf("COOL");
    }
    return 0;
}
