#include<stdio.h>
int main()
{
    int n,m,mat[72][72];
    while(scanf("%d",&n)!=EOF)
    {
        m=n-1;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                if(i==j)mat[i][j]=1;
                else mat[i][j]=3;
                if(j==m)mat[i][j]=2;
            }m--;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d",mat[i][j]);
            }
            printf("\n");
        }

    }



    return 0;
}
