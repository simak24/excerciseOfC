#include<stdio.h>
int main()
{
    int n,out,in,m;
    while(scanf("%d",&n)!=EOF)
    {
        long long mat[n][n];
        int hn=n/3;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)mat[i][j]=2;
                else if(j==n-1-i)mat[i][j]=3;
                else mat[i][j]=0;
            }
        }


        for(int i=hn; i<n-hn; i++)
        {
            m=(n-hn/2)+1;
            for(int j=hn; j<n-hn; j++)
            {
                mat[i][j]=1;
                if(i==n/2 && j==n/2)mat[i][j]=4;
            }
        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%lld",mat[i][j]);
            }printf("\n");
        }printf("\n");


    }


    return 0;
}
