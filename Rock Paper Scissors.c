#include <stdio.h>
#include<string.h>
#include<time.h>

//Unschool.in Rock paper and scissors game
//  Date :07-09-2020 

char *words[]={"","ROCK","PAPER","SCISSORS"};
char *comments[]={"Excellet...!","Keep Going...!","Awesome...!","Brilliant...!"};
int score_player=0,score_system=0;


int main()
{
  int player,system,i=1;
  printf("\n\n       Rock , Paper and Scissors\n\n");
  for(int i=0;i<41;i++)
    printf("-");    
label:    printf("\n\n Choose Number :1.Rock\t2.paper\t3.scissors");
  printf("\n\n Press 0 to quit......\t\t");
  scanf("\t%d",&player);
  if(player==1||player==2||player==3)
  {
    printf("\n\n> > > > > > > > > Round  %d < < < < < < < < ",i);
    printf("\n\n Player Selected   : %s",words[player]);
    srand(time(0));
    system=rand()%3+1;
    printf("\n\n System Selected   : %s",words[system]);
    getresult(player,system);
    i=i+1;
    goto label;  }
  else if(player==0)
  {
    printf("\n\n");
  for(int j=0;j<41;j++)
    printf("-");
  printf("\n\n Final result");
  printf("\n\n Player  :   %4d",score_player);
  printf("\n\n System  :   %4d",score_system);
  
  if(score_player==score_system)
    printf("\n\n\t    \tMatch Tied\n\n\t    \t WELL PLAYED\n\n");
  else if(score_player>score_system)
    printf("\n\n\t    \tPLAYER WINS\n\n\t    \t WELL PLAYED CHAMPION\n\n");
  else
    printf("\n\n\t    \tSYSTEM WINS\n\n\t    \t WELL TRIED\n\n");
  for(int j=0;j<41;j++)
    printf("-");
  printf("\n\n         Thank You! Have a Nice Day\n\n");  
  printf("Unschool.in Minor project created by JAI..\n\n");
  }
  else
  {   printf("\n\n       Invalid choice\n\n");
    goto label;  }
  return 0;
}
// ....Generating result.... //
  
int getresult(int p,int s)
{
  int comment;
  srand(time(0));
  comment=rand()%3;
  if(p==s)
  {
    printf("\n\n\t            \t It's a TIE");
  }
  else if(p==1)
  {
    if(s==2)
    {  printf("\n\n\t          \t System win");
       score_system+=1;  }
    else
    {  printf("\n\n\t          \t Player wins");
       printf("\n\n\t              %s",comments[comment]);
       score_player+=1;  }
  }
  else if(p==2)
  {
    if(s==3)
    {  printf("\n\n\t          \t System Wins");
      score_system+=1; }
    else
     { printf("\n\n\t          \t Player Wins");   
       printf("\n\n\t              %s",comments[comment]);
      score_player+=1;  }
  }
  else
  {
    if(s==2)
    {  printf("\n\n\t          \t Player Wins");
         printf("\n\n\t             %s",comments[comment]);
     score_player+=1; }
    else
     { printf("\n\n\t          \t System Wins"); 
      score_system+=1; }
  }
  printf("\n\n");
  for(int i=0;i<41;i++)
    printf("-");
  return 0;
}
