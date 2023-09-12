#include <stdio.h>


int main() {
char a[15];
char b[15];
char c[15];
scanf("%s %s %s",&a,&b,&c);
if(a=="vertebrado"&&b=="ave"&&c=="carnivoro"){
    printf("aguia\n");
}else if(a=="vertebrado"&&b=="ave"&&c=="onivoro"){
printf("pomba\n");
}else if(a=="vertebrado"&&b=="mamifero"&&c=="onivoro"){
printf("homem\n");
}else if(a=="vertebrado"&&b=="mamifero"&&c=="herbivoro"){
printf("vaca\n");
}else if(a=="invertebrado"&&b=="inseto"&&c=="hematofago"){
printf("pulga\n");
}else if(a=="invertebrado"&&b=="inseto"&&c=="herbivoro"){
printf("lagarta\n");
}else if(a=="invertebrado"&&b=="anelideo"&&c=="hematofago"){
printf("sanguessuga\n");
}else if(a=="invertebrado"&&b=="anelideo"&&c=="onivoro"){
printf("minhoca\n");
}


    return 0;
}
