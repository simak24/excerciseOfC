#include<stdio.h>
int main(){
int n,x,y,sum,count;
scanf("%d",&n);
for(int i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      count=0;
      sum=0;
      for(int j=x; ;j++){
        if(j%2!=0){
          sum+=j;
          count++;
        }
    if(count==y)break;
    }printf("%d\n",sum);
}
return 0;
}
