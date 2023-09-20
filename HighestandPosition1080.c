#include<stdio.h>
int main(){
int arr[102],bigNumber=0,pos;

for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
}

for(int i=0;i<100;i++){
        if(arr[i]>bigNumber){
             bigNumber=arr[i];
             pos=i+1;
        }
}
    printf("%d\n",bigNumber);
    printf("%d\n",pos);

return 0;
}
