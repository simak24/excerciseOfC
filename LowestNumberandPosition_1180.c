#include<stdio.h>
int main(){
int n,x[1000],value,pos,min;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&x[i]);

}
min=x[0];
for(int i=0;i<n;i++){
if(min<x[i]){
    value=min;
}else if(min>x[i]){
min=x[i];
}
}
for(int i=0;i<n;i++){
    if(value==x[i]){
        pos=i;
        break;
    }
}

 printf("Menor valor: %d\n",value);
 printf("Posicao: %d\n",pos);


return 0;
}
