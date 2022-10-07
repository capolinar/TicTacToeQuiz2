//Tic Tac Toe between 2 players or player vs computer
#include <stdio.h>
#include  <stdlib.h> 
#include  <time.h>

char square[10] = { '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }; //the tictactoe board
//function to print board, used after every move made my a player
void printBoard()
{
    //system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 is X-----Player 2 is O \n\n\n");


    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", square[1], square[2], square[3]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", square[4], square[5], square[6]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", square[7], square[8], square[9]);
    printf("+-----------+\n");
}

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

    
/*
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n\n");
    */
    printBoard();
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