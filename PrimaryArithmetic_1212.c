#include<stdio.h>
int main()
{
    while(1)
    {
        int car=0,countCar=0;
        long a,b;
        scanf("%ld %ld",&a,&b);
        if(a==0&b==0)break;
        while(1)
        {
            long x,y;
            x=a%10;
            y=b%10;
            a=a/10;
            b=b/10;
            if(x+y+car>=10)
            {
                countCar++;
                car=1;
            }else car=0;
            if(a==0&&b==0)break;
        }

        if(countCar==0)
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",countCar);
        }

    }


    return 0;
}
