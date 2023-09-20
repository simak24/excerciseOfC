#include<stdio.h>
int main(){
int alchohol=0,gasoline=0,diesel=0,select;
while(1){
    scanf("%d",&select);
    if(select==1)alchohol++;
    if(select==2)gasoline++;
    if(select==3)diesel++;
    if(select==4)break;
    else{
         continue;
    }
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alchohol,gasoline,diesel);

return 0;
}
