#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int c;
        scanf("%d",&c);
        int set[c];
        int grade,sum=0,countStd=0,countGrade=0,sumRes;
        float percent,avg;
        for(int i=0; i<c; i++)
        {
            scanf("%d",&grade);
            set[i]=grade;
            sum+=grade;
            countStd++;

        }
        avg=sum*1.0/countStd*1.0;
        for(int i=0; i<c; i++)
        {
            if(set[i]>avg)
            {
                countGrade++;
            }
        }
        percent=(countGrade*1.0/c*1.0)*100.0;
        printf("%.3f%%\n",percent);

    }


    return 0;
}
