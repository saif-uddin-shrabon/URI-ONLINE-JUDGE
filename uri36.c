#include<stdio.h>
#include<math.h>

int main()

{
    double a,b,c,R1,R2, pr1;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    pr1=( b*b )-(4 * a * c);

     if (pr1 > 0 && a != 0)
    {
       pr1 = sqrt(pr1);
        R1 = (-b + pr1)/(2*a);
        R2 = (-b - pr1)/(2*a);
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);

    }

    else
    {
        printf("Impossivel calcular\n");
    }

}

