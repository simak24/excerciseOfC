#include<stdio.h>
int main(){
int n,arr[10],j,pos;
for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
        if(arr[i]>arr[i+1]){
             j=arr[i];
             pos=i+1;

        }
}
    printf("value=%d\nposition\n=%d",j,pos);


 /*   int i,j = 0,p,arr[100];
    for (i = 0;i < 100;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < 100;i++){
            if(arr[i] > j){
                j = arr[i];
                p = i+1;
            }
    }
    printf("%d\n", j);
    printf("%d\n", p);
*/
return 0;
}
