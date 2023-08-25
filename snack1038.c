
#include <stdio.h>

int main() {

int x,y;
float total;
scanf("%d %d",&x,&y);

switch(x){
case 1:
     total=y*4.00;
    break;
case 2:
     total=y*4.50;
    break;
case 3:
     total=y*5.00;
    break;
case 4:
     total=y*2.00;
    break;
default:
     total=y*1.50;

}

printf("Total: R$ %.2f\n",total);


    return 0;
}
