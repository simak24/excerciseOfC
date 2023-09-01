#include <stdio.h>

int main(){

int x,y,z,arr[4],temp;
scanf("%d %d %d",&x,&y,&z);
arr[0]=x;
arr[1]=y;
arr[2]=z;



for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i]<arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
for(int i=0;i<3;i++){
    printf("%d\n",arr[i]);
}
printf("\n%d\n%d\n%d\n",x,y,z);





return 0;
}
