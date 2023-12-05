#include<stdio.h>
int main()
{

    int N,count=0;
    while(1)
    {
        scanf("%d",&N);
        if(N==0)break;
        long long mat[N][N];
        int c=1;

        for(int i=0; i<N; i++)
        {
            int m=c;
            for(int j=0; j<N; j++)
            {
                mat[i][j]=m;
                m*=2;
            }
            c*=2;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                    if(N==1){
                         printf("%lld",mat[i][j]);
                    }
                     if(N==2){
                         if(j==0)printf("%lld",mat[i][j]);
                         else printf("%2lld",mat[i][j]);
                    }
                    if(N==3 || N==4){
                         if(j==0)printf(" %lld",mat[i][j]);
                         else printf("%3lld",mat[i][j]);
                    }
                      if(N==5){
                         if(j==0)printf("%3lld",mat[i][j]);
                         else printf("%4lld",mat[i][j]);
                    }
                        if(N==6 || N==7){
                         if(j==0)printf("%4lld",mat[i][j]);
                         else printf("%5lld",mat[i][j]);
                    }
                      if(N==8 || N==9){
                         if(j==0)printf("%5lld",mat[i][j]);
                         else printf("%6lld",mat[i][j]);
                    }
                      if(N==10){
                         if(j==0)printf("%6lld",mat[i][j]);
                         else printf("%7lld",mat[i][j]);
                    }
                      if(N==11 || N==12){
                         if(j==0)printf("%7lld",mat[i][j]);
                         else printf("%8lld",mat[i][j]);
                    }
                      if(N==13 || N==14){
                         if(j==0)printf("%8lld",mat[i][j]);
                         else printf("%9lld",mat[i][j]);
                    }
                      if(N==15 ){
                         if(j==0)printf("%9lld",mat[i][j]);
                         else printf("%10lld",mat[i][j]);
                    }

            }printf("\n");
        }printf("\n");

    }



    return 0;
}
