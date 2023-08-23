#include <stdio.h>

int main() {
 int sec;
 scanf("%d",&sec);
int second=sec%60;
int mint=sec/60;
int minute=mint%60;
int hor=mint/60;
int hour=hor%60;

printf("%d:%d:%d",hour,minute,second);
    return 0;
}
