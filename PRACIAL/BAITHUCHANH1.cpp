#include<stdio.h>
//tinh tong s=1+1/2+1/3+...+1/n
int main()
{
    int  n;
    float S,i;
    S = 0; i = 1;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("n phai lon hon hoac bang 1. Xin nhap lai\n");
        }

    }while(n < 1);

    while(i <= n)
    {
        S = S + 1/i;  
        i++;
    }
    printf("Tong S = %f", S);
}
