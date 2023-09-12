#include<stdio.h>
int main(){
float n[5];
int count;

for(int i=0;i<6;i++){
    scanf("%f",&n[i]);
}
count =0;
for(int i=0;i<6;i++){
    if(n[i]>0){

        count++;
    }

}

printf("%d valores positivos\n",count);


return 0;
}
