#include<stdio.h>

int main()
{
    double a, b, c, d, x, z, z1;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    z=(a*2 + b*3 + c*4 + d*1)/10;
    printf("Media: %.1lf\n", z);

    if(z>7.0)
    {
        printf("Aluno aprovado.\n");

    }

    else if (z<5.0)
    {
        printf("Aluno reprovado.\n");

    }
    else if(z>=5.0 && z<=6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &x);
        printf("Nota do exame: %.1lf\n",x);

        z1= (z+x)/2;

        if (z1>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(z1<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",z1);

    }

    return 0;

}
