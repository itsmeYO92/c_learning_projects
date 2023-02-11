#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

	printf("welcome to my quiz game\n");
	int menu,c,score=0;
	printf("to quite; please enter 0\nto start please enter 1");
start:	printf("\nyour choice:  ");
	scanf("%d",&menu);fgetc(stdin); //still needs some input validation it breaks when it gets something differnt than an inrt
	
	if(menu==0){return 0;}else if(menu==1){printf("the game will start now");}else{
	printf("wrong answer please entre 1 or 0");
	goto start; 
	}

	printf("the game started");

char questions[10][150]={"Waht is the name of the main antagonist in the Shakespeare play Othello?",
"What element is denoted by the chemical symbol Sn in the periodic table?",
"How many of Henry VIII's wives were called Catherine?",
"What was the most popular girls name in the UK in 2021?",
"What is the name of the 1976 film about the Watergate scandal, starring Robert Redford and Dustin Hoffman?",
"Which comedian was the second permanent host of Never Mind the Buzzcocks after Mark Lamarr?",
"Which popular video game franchise has released games with the subtitles World At War and Black Ops?",
"In what US State is the city Nashville?",
"Which rock band was founded by Trent Reznor in 1988?"};

char answers[10][30]={"iago","tin","3","olivia","all the president's man","simon amstell","call of duty","tennessee","nine inch nails"};
char ans[30];
char lower[30];
for(int i=0;i<9;i++){
	printf("\nYOUR SCORE: %d pts\n",score);
	printf("\n%s\n",questions[i]);
	printf("YOUR ANSWER:  ");
	fgets(ans,30,stdin);
	for(int j=0;ans[j];j++){
	lower[j]=tolower(ans[j]);
	}
	if(strcmp(lower,answers[i])==0){
	printf("\nGOOD ANSWER +3 pts\n");
	score+=3;
	
	}else{
	printf("\nWRONG ANSWER -1 pts  (answer is: %s)\n",answers[i]);
	score--;
	
	}






}

        return 0;

}
