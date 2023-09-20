#include<stdio.h>
int main(){
int password=2002,x;


while(1){
    scanf("%d",&x);
    if(x==password){
            printf("Acesso Permitido\n");
            break;
    }
    if(x!=password){
        printf("Senha Invalida\n");
    }
}


return 0;
}
