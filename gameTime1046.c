
#include <stdio.h>


int main() {

int a,b;
scanf("%d %d",&a,&b);

if( (a>=0 && b<=24)||(b>=0 && a<=24) ){
        if(a>=b){
            printf("O JOGO DUROU %d HORA(S)\n",24-(a-b) );
        }else if(b>a){
        printf("O JOGO DUROU %d HORA(S)\n",b-a );
        }

}

    return 0;
}
