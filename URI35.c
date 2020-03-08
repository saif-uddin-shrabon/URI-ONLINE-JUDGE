#include<stdio.h>
int main()
{
    int n, x;
    scanf("%d%d",&x,&n);
    if(x==1)
    {

        printf("Total: R$ %.2lf\n",(n*4.00));
    }
    else if (x==2)
    {

        printf("Total: R$ %.2lf\n",(n * 4.50));
    }
    else if (x==3)
    {
        printf("Total: R$ %.2lf\n", (n * 5.00));
    }
    else if (x==4)
    {
        printf("Total: R$ %.2lf\n", (n * 2.00));
    }
    else if(x==5)
    {
        printf("Total: R$ %.2lf\n", (n * 1.50));
    }
    return 0;
}
