#include<stdio.h>
int main()
{
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x==0)break;
        printf("%d\n",(x*(x+1)*((2*x)+1))/6);

    }


    return 0;
}
