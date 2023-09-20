#include<stdio.h>
int main(){
int interGoal,gremioGoal,again,match=1,inter,interWin=0,gremio,gremioWin=0,draw=0;
    scanf("%d %d",&interGoal,&gremioGoal);
    if(interGoal>gremioGoal)interWin++;
    if(interGoal<gremioGoal)gremioWin++;
    if(interGoal==gremioGoal)draw++;

while(1){
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&again);
    if(again==1){
            match++;
        scanf("%d %d",&interGoal,&gremioGoal);
        if(interGoal>gremioGoal)interWin++;
        if(interGoal<gremioGoal)gremioWin++;
        if(interGoal==gremioGoal)draw++;

    }
    if(again==2)break;
}

printf("%d grenais\n",match);
printf("Inter:%d\n",interWin);
printf("Gremio:%d\n",gremioWin);
printf("Empates:%d\n",draw);
if(interWin>gremioWin){
    printf("Inter venceu mais\n");
}
else if(interWin<gremioWin){
    printf("Gremio venceu mais\n");
}else{
printf("Não houve vencedor\n");
}



return 0;
}
