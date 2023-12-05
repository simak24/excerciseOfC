#include<stdio.h>
int main(){
    int n[6][6];
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        n[i][j]=1;
    }
}
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d",n[i][j]);
    }
    printf("\n");
}

return 0;
}
