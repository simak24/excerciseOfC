#include<stdio.h>
int main(){
int num,countEven=0,countOdd=0,countNeg=0,countPos=0;

for(int i=0;i<5;i++){
    scanf("%d",&num);

           if(num%2==0){
        countEven++;
    }if(num%2!=0){
     countOdd++;
    }if(num<0){
    countNeg++;
    }if(num>0){
    countPos++;
    }


}

printf("%d valor(es) par(es)\n",countEven);
printf("%d valor(es) impar(es)\n",countOdd);
printf("%d valor(es) positivo(s)\n",countPos);
printf("%d valor(es) negativo(s)\n",countNeg);



return 0;
}
