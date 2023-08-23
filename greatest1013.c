#include <stdio.h>

int mx(int A,int B){
return (A+B+abs(A-B))/2;
}

int main() {
int A,B,C;
scanf("%d %d %d",&A,&B,&C);

int answer=mx(A,B);
int greatestNumber=mx(answer,C);
printf("%d eh o maior",greatestNumber);

    return 0;
}

