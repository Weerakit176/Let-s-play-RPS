#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

char playershape(){
    char shape;
    printf("[r]Rock ,[p]Paper ,[s]Scissors : ");
    scanf("%c", &shape);
    return shape;
}
char computershape(){
    int random;
    random = rand() % 3 ;
         char s[] = {'r' ,'p' ,'s'};
         return s[random];
}
int main(){
    srand(time(NULL));
   char player, computer;
   player = playershape();
   computer = computershape();
   printf("player : %c  ,  computer : %c \n",player,computer);
  
   if (player == computer){
       printf("ties\n");
       }
       else{
          if(player == 'r' && computer =='s'){
              printf("You won\n");}
         else if(player == 'p' && computer =='r'){
              printf("You won\n");}
         else if(player == 's' && computer =='p'){
              printf("You won\n");}
         else{
               printf("You lose\n");}
           }
           getch();
           return 0;
           
           }