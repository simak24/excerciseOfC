#include<stdio.h>
int main(){
float n1,n2,n3,n4,avg,avg1,n5;
scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
avg=(n1*2+n2*3+n3*4+n4*1)/10;
printf("Media: %.1f\n",avg);
if(avg>=7.0){
    printf("Aluno aprovado.\n");
}if(avg<5.0){
printf("Aluno reprovado.\n");
}if(avg>=5.0&&avg<=6.9){
printf("Aluno em exame.\n");
scanf("%f",&n5);
printf("Nota do exame: %.1f\n",n5);
avg1=(avg+n5)/2;
if(avg1>=5.0){
    printf("Aluno aprovado.\n");
}if(avg1<=4.9){
printf("Aluno reprovado.\n");
}
printf("Media final: %.1f\n",avg1);

}


return 0;
}
