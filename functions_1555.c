#include<stdio.h>

int rafa(int x,int y){
    int r;
    r=(3*x)*(3*x)+y*y;
return r;
}

int beto(int x,int y){
    int b;
    b=2*x*x+(5*y)*(5*y);
return b;
}
int car(int x,int y){
    int c;
    c=-100*x+(y*y*y);
return c;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int x,y;
        scanf("%d %d",&x,&y);
        int r=rafa(x,y);
        int b=beto(x,y);
        int c=car(x,y);

        if(r>b && r>c)printf("Rafael ganhou\n");
        else if(b>r && b>c)printf("Beto ganhou\n");
        else if(c>r && c>b)printf("Carlos ganhou\n");

    }


return 0;
}
