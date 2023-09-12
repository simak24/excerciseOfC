#include<stdio.h>
int main(){
int n;
float x1,x2,x3;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%f %f %f",&x1,&x2,&x3);
    printf("%.1f\n",(x1*2+x2*3+x3*5)/10);

}


return 0;
}
