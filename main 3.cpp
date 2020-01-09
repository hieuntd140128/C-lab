#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop  */ 
double  equivalent ( double r1 , double r2 , double r3 )
{ double H, K ; 
H=1/r1+1/r2+1/r3;
K=1/H; 
return K;  
}
int main( int argc , char *argv[])
{double r1 , r2 , r3 ;
printf("\nInput 3 so=");
scanf("%lf%lf%lf", &r1 , &r2, &r3);
printf("their equivalent: %lf\n", equivalent(r1,r2,r3));
}

