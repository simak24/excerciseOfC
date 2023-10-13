#include<stdio.h>
int main(){
int T,PA,PB,year,paSum,pbSum;
double G1,G2;
scanf("%d",&T);
for(int i=0;i<T;i++){
 scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    paSum=PA;
    pbSum=PB;
    year=0;
    while(1){
        paSum+=paSum*(G1/100);
        pbSum+=pbSum*(G2/100);
        year++;
        if(year>100){
            printf("Mais de 1 seculo.\n");
            break;
        }
        else if(paSum>pbSum){
            printf("%d anos.\n",year);
            break;
        }
    }
}

return 0;
}
