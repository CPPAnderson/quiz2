//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <time.h> 

// all global variables that will be needed for the TTT program
char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
char letter = 'X';
int y, x, cx, cy;
time_t t;
// a contruct that first clears the screen of previous code and then print out the TTT board
void printScreen(){
    system("cls");
    printf("    1   2   3   \n");
    printf("  +-----------+ \n");
    printf("1 | %c | %c | %c | \n", a1, a2, a3);
    printf("  +-----------+ \n");
    printf("2 | %c | %c | %c | \n", b1, b2, b3);
    printf("  +-----------+ \n");
    printf("3 | %c | %c | %c | \n", c1, c2, c3);
    printf("  +-----------+ \n");

}

// a contruct that makes sure that the spot the player is trying to move to has not been already taken or also with range

// if player chooses a slot that is already taken, program ask the player to re-enter for a new spot.

// if player enters a x and y value that is out of range of the board, this construct should ask him to re-enter there x and y

// A construct that changes letters on the board

// A construct that returns true if the game is over with a winner.

// a construct that generates a random number

// a construct that makes sure the computer is making valid moves

int main(){

    //prompt user for game they wish to play 
    
    switch(){
        case (1):
            //player vs player
            while (true){
                
                // asks player 1 for there X and Y 

                // asks player 2 for there x and y
            }
            break;
        case (2):
            //player vs computer
            while (true){ 

                //asks player for there x and y

                // code for computers side

            }
            break;
    }

    return 0;
}