//Tic Tac Toe between 2 players or player vs computer
#include <stdio.h>
#include  <stdlib.h> 
#include  <time.h>

int main(){
    //prompt user for game they wish to play
    printf("Welcome to Tic Tac Toe! \n"); 
    printf("1---person vs person \n \n");
    printf("2---person vs. random computer \n \n");
    printf("Enter your choice(1 or 2): \n");
    //read information from console
    int i;
    scanf("%d", &i);
    printf("=============================\n\n");
    printf("You have entered choice %d", i); 
    printf("\n\nYour Current status is: \n\n");

    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n\n");
    printf("Player1: make your move\n");

    time_t t;
    srand((unsigned)  time(&t)); //time for real random numbers

    //game if i = 1(person vs. person)
    if(i == 1)
    {
    //add game
    }

    //game if i = 2(random computer)
    if(i == 2)
    {

    }



    //asdfasdf



    return 0;
}