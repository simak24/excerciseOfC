#include<stdio.h>
int main()
{
    int n,m,mat[72][72];
    while(scanf("%d",&n)!=EOF)
    {
        m=n-1;
        for(int i=0; i<n; i++)
        {
           for(int j=i; j<=i; j++)
            {
                mat[i][j]=1;

            }
            for(int j=m; j<=m; j++)
            {
                mat[i][j]=2;

            }m--;
             for(int j=0; j<n; j++)
            {
               if(mat[i][j]!=1 && mat[i][j]!=2)
                mat[i][j]=3;
            }
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
