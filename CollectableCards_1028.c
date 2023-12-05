#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    int f1,f2,m,ans;
    scanf("%d %d",&f1,&f2);
    if(f1>f2){
        int t=f2;
        f2=f1;
        f1=t;
    }
    while(f2%f1!=0){
            int t=f1;
            f1=f2%f1;
            f2=t;
    }ans=f1;
    printf("%d\n",ans);
}

return 0;
}
