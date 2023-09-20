#include<stdio.h>

int main(){
int j=60,i=1;
while(j){
    printf("I=%d J=%d\n",i,j);
    i+=3;
    j-=5;
    if(j==5){
            printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i+3,j-5);

        break;
    }


}


return 0;
}
