//Tic Tac Toe between 2 players or player vs computer
#include <stdio.h>
#include  <stdlib.h> 
#include  <time.h>
#include <stdbool.h>

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

int win() //function that returns 1 if game is over, -1 if in progress, and 0 if over and no result(TIE)
{                                                             //each of these check if X or O are in a row
                                                        //essentially checks all combinations of win conditions
   
    if (square[1] != ' ' && square[2] != ' ' && square[1] == square[2] && square[2] == square[3]) //top row
        return 1;
        
    else if (square[4] != ' ' && square[5] != ' ' &&  square[4] == square[5] && square[5] == square[6])//middle row
        return 1;
        
    else if (square[7] != ' ' && square[8] != ' ' && square[7] == square[8] && square[8] == square[9])//bottom row
        return 1;
        
    else if (square[1] != ' ' && square[4] != ' ' && square[1] == square[4] && square[4] == square[7])//left column
        return 1;
        
    else if (square[2] != ' ' && square[5] != ' ' && square[2] == square[5] && square[5] == square[8])//middle column
        return 1;
        
    else if (square[3] != ' ' && square[6] != ' ' && square[3] == square[6] && square[6] == square[9])//bottom column
        return 1;
        
    else if (square[1] != ' ' && square[5] != ' ' && square[1] == square[5] && square[5] == square[9])//left diaganol
        return 1;
        
    else if (square[5] != ' ' && square[5] != ' ' && square[3] == square[5] && square[5] == square[7])//right diagnol
        return 1;
        
    else if (square[1] != ' ' && square[2] != ' ' && square[3] != ' ' && //checks if any remaining spaces
        square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7] 
        != ' ' && square[8] != ' ' && square[9] != ' ')

        return 0; //if no remaining spaces, game is over(tie)
    else
        return  - 1; //if there is remaining spaces, game is in progress

}

int main(){
    //prompt user for game they wish to play
    printf("Welcome to Tic Tac Toe! \n"); 

    printf("Make sure to enter a number between 1 and 9 that correspond to these spaces:\n\n");
    printf("+-----------+\n");
    printf("| 1 | 2 | 3 | \n");
    printf("+-----------+\n");
    printf("| 4 | 5 | 6 | \n");
    printf("+-----------+\n");
    printf("| 7 | 8 | 9 | \n");
    printf("+-----------+\n\n");

    printf("1---person vs person \n \n");
    printf("2---person vs. random computer \n \n");
    printf("Enter your choice(1 or 2): \n");
    //read information from console
    int i;
    scanf("%d", &i);
    printf("=============================\n\n");
    printf("You have entered choice %d", i); 
    printf("\n\nYour Current status is: \n\n");

    
/*blank board
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n");
    printf("|   |   |   | \n");
    printf("+-----------+\n\n");
    */
 
    printBoard();


    time_t t;
    srand((unsigned)  time(&t)); //time for real random numbers
    int w = win();//w is win status

    //game if i = 1(person vs. person)
    if(i == 1)
    {
    //add game
    }

    //game if i = 2(random computer)

    if(i == 2)
    {
        
        printf("Test message, w should be -1 actual: %d\n",w);
        while(w == -1)//keeps loop while game is in progress
        {
            bool valid = false;
            while(!valid)
            {
                printf("Player 1: make your move\n\n"); //player1 prompt
                int choice;
                scanf("%d", &choice);
                 if(choice > 0 && choice < 10)
                 {
                    if(square[choice] == ' ')
                    {
                        square[choice] = 'X';
                        printBoard();
                        valid = true;
                    }
                    else if(square[choice] != ' ')
                    {
                        printf("Space is already taken. \n");
                       
                    }

                 }
                 else
                 {
                    printf("Number is not between 1 and 9, please enter again\n");
                 }
            

            }

        
           

            
            w = win();
            printf("Test message, w should be -1 to continue, actual: %d\n",w);
            /*
            printf("Test message, w should be -1 to continue, actual: %d\n",w);
            printf("Test message, to exit loop enter 0 \n\n");
            int exit;
            scanf("%d", &exit);
            w = exit;
            */
        }

    }






    return 0;
}