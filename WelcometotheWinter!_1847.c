#include<stdio.h>
int main(){
int a,b,c,d1,d2;
scanf("%d %d %d",&a,&b,&c);
d1=abs(a-b);
d2=abs(b-c);
if(a>b){
    if(b<c || b==c)printf(":\)\n");
    else if(b>c && d1==d2)printf(":\(\n");
     else if(b>c && d1>d2)printf(":\)\n");
     else if(b>c && d1<d2)printf(":\(\n");
}
else if(a<b){
    if(b>c || b==c)printf(":\(\n");
    else if(b<c && d1>d2)printf(":\(\n");
    else if(b<c && d1<d2)printf(":\)\n");
    else if(b<c && d1==d2)printf(":\)\n");
}
else if(a==b){
    if(b<c)printf(":\)\n");
    else printf(":\(\n");
}

return 0;
}
