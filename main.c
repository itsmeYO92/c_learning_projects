#include <stdio.h>

int main() {

	printf("welcome to my quiz game\n");
	int menu,c,score=0;
	printf("to quite; please enter 0\nto start please enter 1");
start:	printf("\nyour choice:  ");
	scanf("%d",&menu); //still needs some input validation it breaks when it gets something differnt than an int
	
	if(menu==0){return 0;}else if(menu==1){printf("the game will start now");}else{
	printf("wrong answer please entre 1 or 0");
	goto start; 
	}

	printf("the game started");
question1:
	printf("\nFirst question: WHAT IS THE CAPITAL OF FRANCE\n");
	printf("1. Madrid\n2. Paris\n3. Rabat\n");
	printf("Please provide your answer:  ");
	scanf("%d",&c);
	if(c==2){printf("\nGOOD ANSWER\n");score=score+3;}
	else if(c==1||c==3){
	printf("\n wrong answer\n");score--;}else{printf("wrong choice please entre 1 2 or 3\n");goto question1;}


question2:
        printf("\nYOUR SCORE IS:%d\nIn what US State is the city Nashville?\n",score);
        printf("1. California\n2. Ohio\n3. Tennesse\n");
        printf("Please provide your answer:  ");
        scanf("%d",&c);
        if(c==3){printf("\nGOOD ANSWER\n");score=score+3;}
        else if(c==1||c==2){
        printf("\n wrong answer\n");score--;}else{printf("wrong choice please entre 1 2 or 3\n");goto question2;}

question3:
        printf("\nYOUR SCORE IS:%d\nWhat is the capital of New Zealand?\n",score);
        printf("1. Wellington\n2. Auckland\n3. Dunedin\n");
        printf("Please provide your answer:  ");
        scanf("%d",&c);
        if(c==1){printf("\nGOOD ANSWER\n");score=score+3;}
        else if(c==3||c==2){
        printf("\n wrong answer\n");score--;}else{printf("wrong choice please entre 1 2 or 3\n");goto question3;}
        return 0;

}
