#include<stdio.h>
int main(){
int n,count,c=0,r=0,s=0;
char animal;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d %c",&count,&animal);
     if(animal=='C'){
        c+=count;
     }if(animal=='R'){
     r+=count;
     }if(animal=='S'){
     s+=count;
     }
}
int total=c+r+s;
float animal1=(c*1.0/total)*100.00;
float animal2=(r*1.0/total)*100.00;
float animal3=(s*1.0/total)*100.00;

printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",c);
printf("Total de ratos: %d\n",r);
printf("Total de sapos: %d\n",s);
printf("Percentual de coelhos: %.2f %%\n",animal1);
printf("Percentual de ratos: %.2f %%\n",animal2);
printf("Percentual de sapos: %.2f %%\n",animal3);



return 0;
}
