
#include <stdio.h>

int main() {

int d;
scanf("%d",&d);
int daForMonth=d%365;
int year=d/365;
int day=daForMonth%30;
int month=daForMonth/30;

printf("%d ano\(s\)\n%d mes\(es\)\n%d dia\(s\)\n",year,month,day);
    return 0;
}
