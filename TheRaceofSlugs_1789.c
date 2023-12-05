#include<stdio.h>
int main(){
int n;
while(scanf("%d",&n)!=EOF){
    int best=0;
    while(n--){
        int b;
        scanf("%d",&b);
        if(b>best)best=b;
    }
    if(best<10)printf("1\n");
    else if(best>=10&&best<20)printf("2\n");
    else printf("3\n");
}

return 0;
}
