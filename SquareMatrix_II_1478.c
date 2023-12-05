#include<stdio.h>
int main()
{
    int n,m,k;
    while(1)
    {
        scanf("%d",&n);
        int mat[n][n];
        if(n==0)break;

        for(int i=0; i<=n; i++)
        {
           m=i+1;
           k=2;
           for(int j=0;j<=i;j++,m--){
            mat[i][j]=m;

           }
           for(int j=i+1;j<n;j++,k++){
            mat[i][j]=k;

           }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)printf("%3d",mat[i][j]);
                else printf(" %3d",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");


    }

    return 0;
}
