#include<stdio.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>

int main(){
    
    srand(time(0));
    char rock[]="rock";
    char paper[]="paper";
    char scissor[]="scissor";
    char quit[]="quit";
    while (1)
    {
    char input[10];
    int choice =0;
    int comp_count = rand()%(3) + 1;
    
    printf("\nPlease choose rock paper scissor or quit: ");
    scanf("%s",input);
    
    printf("\n**********************++++++++++++++++++++++++++++++++++++++****************************\n"); 
    
    if(strcmp(input, paper)==0)
    {
        choice=2;
        printf("\n YOU CHOSE: Paper\n"); 
    }
    else if(strcmp(input, rock)==0)
    {
        choice=1;
        printf("\n YOU CHOSE: Rock\n" ); 
    }
    else if(strcmp(input, scissor)==0)
    {
        choice=3;
        printf("\n YOU CHOSE: Scissor\n"); 
    }
    else if(strcmp(input, quit)==0){
        exit(1);
    }

    printf("\n**********************++++++++++++++++++++++++++++++++++++++****************************\n"); 
    
    if(comp_count==2)
    {
        printf("\n Computer CHOSE: Paper"); 
    }
    else if(comp_count==1)
    {
        printf("\n Computer CHOSE: Rock"); 
    }
    else if(comp_count==3)
    {
        printf("\n Computer CHOSE: Scissor"); 
    }
     printf("\n**********************++++++++++++++++++++++++++++++++++++++****************************\n"); 
    if((choice-comp_count==0)){
        printf("\n Result: it's a tie");
    }
    else if((choice-comp_count)==1 || (choice-comp_count)==-2 ){
        printf("\n Result: You Win....Nice Job");
    }
    else{
        printf("\n Result: Computer Win....hard luck");
    }
    }
    

    
     
    return 0;
} 
