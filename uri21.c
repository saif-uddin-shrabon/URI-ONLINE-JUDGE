#include<stdio.h>

int main()
{
    double x,sum;
    int n,a,b,c,d,e,f, l,v1,v2,v3,v4,v5,v6;
    scanf("%lf",&x);
    printf("NOTAS:\n");
     n = x;
     b=(n/100);
          printf("%d nota(s) de R$ 100.00\n",b),

    a=(n%100)/50;
           printf("%d nota(s) de R$ 50.00\n",a);

    c=((n%100)%50)/20;
              printf("%d nota(s) de R$ 20.00\n",c);

    d= (((n%100)%50)%20)/10;
                     printf("%d nota(s) de R$ 10.00\n",d);

    e = ((((n%100)%50)%20)%10)/5;
                       printf("%d nota(s) de R$ 5.00\n",e);

    f = (((((n%100)%50)%20)%10)%5)/2;
                         printf("%d nota(s) de R$ 2.00\n",f);

    printf("MOEDAS:\n");
    sum = x-n;

    l= sum * 100;


     v1 = l/100;
             printf("%d moeda(s) de R$ 1.00\n",v1);

     v2 = (l%100)/50;
             printf("%d moeda(s) de R$ 0.50\n",v2);

     v3 = ((l%100)%50)/25;
                printf("%d moeda(s) de R$ 0.25\n",v3);

     v4 = (((l%100)%50)%25)/10;
                 printf("%d moeda(s) de R$ 0.10\n",v4);

     v5 = ((((l%100)%50)%25)%10)/5;
                printf("%d moeda(s) de R$ 0.05\n",v5);

     v6 = (((((l%100)%50)%25)%10)%5)/1;
                printf("%d moeda(s) de R$ 0.01\n",v6);

                return 0;

}
