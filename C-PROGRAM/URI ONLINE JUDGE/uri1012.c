
#include<stdio.h>
int main()
{
    double A,B,C,T,CR,TP,Q,R,pi;
    scanf("%lf %lf %lf",&A,&B,&C);
    pi=3.14159;
    CR=pi*C*C;
    Q=B*B;
    R=A*B;
    T=(A*C)/2;
    TP=(A+B)*C/2;
    printf("TRIANGULO: %0.3lf\n",T);
    printf("CIRCULO: %0.3lf\n",CR);
    printf("TRAPEZIO: %0.3lf\n",TP);
    printf("QUADRADO: %0.3lf\n",Q);
    printf("RETANGULO: %0.3lf\n",R);
    return 0;
}



