#include<stdio.h>
int main(){
int mat[101][101],n;
while(1){
    scanf("%d",&n);
    if(n==0)break;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n||j==n){
                 mat[i][j]=1;
            }
                else{
                    mat[i][j]=0;
                }

        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%d",mat[i][j]);
        if(j!=n){
            printf(" ");
        }
        }printf("\n");
    }
}


return 0;
}
