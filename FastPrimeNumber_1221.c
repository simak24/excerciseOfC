#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long x;
        int yes=0;
        scanf("%lld",&x);
        if(x==0)
        {
            printf("Not Prime\n");
            continue;
        }
        if(x==1)
        {
            printf("Not Prime\n");
            continue;
        }
        if(x==2)
        {
            printf("Prime\n");
            continue;
        }
        for(int i=2; i<sqrt(x)+1; i++)
        {
            if(x%i==0)
            {
                yes=1;
                break;
            }

        }
        if(yes==1)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }


    return 0;
}
