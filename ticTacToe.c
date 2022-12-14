//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <time.h> 

// all variables that will be needed for the TTT program
char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
char letter = 'X';
int y, x, cx, cy;
time_t t;

void slotTaken();
void invalidInput();
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
bool gameIntegrity(){
    printf("%d %d\n", x, y);
    if ((x == 1) && (y == 1)){
        if(a1 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if ((x == 1) && (y == 2)){
        if(a2 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 1 && y == 3){
        if(a3 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 2 && y == 1){
        if(b1 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 2 && y == 2){
        if(b2 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 2 && y == 3){
        if(b3 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 3 && y == 1){
        if(c1 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 3 && y == 2){
        if(c2 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else if (x == 3 && y == 3){
        if(c3 != ' '){
            slotTaken();
        }
        else{
            return true;
        }
    }
    else{
        invalidInput();
    }
}
// if player chooses a slot that is already taken, program ask the player to re-enter for a new spot.
void slotTaken(){
    printf("Slot is already taken. Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    gameIntegrity();

}
// if player enters a x and y value that is out of range of the board, this construct should ask him to re-enter there x and y
void invalidInput(){
        printf("You have entered invalid cordinates. Enter x: ");
        scanf("%d", &x);
        printf("Enter y: "); 
        scanf("%d", &y);
        gameIntegrity();
}
// A construct that changes letters on the board
void validInput(){
    if ((x == 1) && (y == 1)){
        a1 = letter;
    }
    else if ((x == 1) && (y == 2)){
        a2 = letter;
    }
    else if (x == 1 && y == 3){
        a3 = letter;
    }
    else if (x == 2 && y == 1){
        b1 = letter;
    }
    else if (x == 2 && y == 2){
        b2 = letter;
    }
    else if (x == 2 && y == 3){
        b3 = letter;
    }
    if (x == 3 && y == 1){
        c1 = letter;
    }
    else if (x == 3 && y == 2){
        c2 = letter;
    }
    else if (x == 3 && y == 3){
        c3 = letter;
    }
}
// A construct that returns true if the game is over with a winner.
bool endGame(){
    if (a1 == a2 && a2 == a3){
        return true;
    }
    else if (b1 == b2 && b2 == b3){
        return true;
    }
    else if (c1 == c2 && c2 == c3){
        return true;
    }
    else if (a1 == b2 && b2 == c3){
        return true;
    }
    else if (a3 == b2 && b2 == c1){
        return true;
    }
    else if (a1 == b1 && b1 == c1){
        return true;
    }
    else if (a2 == b2 && b2 == c2){
        return true;
    }
    else if (a3 == b3 && b3 == c3){
        return true;
    }
    else{
        return false;
    }
}
// a construct that generates a random number
int random(){
    int num;
    num = (rand() % 3) + 1;
    return num;
}
// a construct that makes sure the computer is making valid moves
void computer(){
    
    if ((cx == 1) && (cy == 1)){
        if(a1 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 1) && (cy == 2)){
        if(a2 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 1) && (cy == 3)){
        if(a3 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 2) && (cy == 1)){
        if(b1 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 2) && (cy == 2)){
        if(b2 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 2) && (cy == 3)){
        if(b3 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 3) && (cy == 1)){
        if(c1 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 3) && (cy == 2)){
        if(c2 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
    else if ((cx == 3) && (cy == 3)){
        if(c3 != ' '){
            cx = random();
            cy = random();
            computer();
        }
    }
}

int main(){

    int option; 
    int rounds;
    srand((unsigned) time(&t)); 
    //prompt user for game they wish to play 
    printf("Welcome to Tic Tac Toe! \n");
    printf("Press 1 for player vs player \n");
    printf("Press 2 for player vs computer \n");
    scanf("%d", &option);
    
    switch(option){
        case (1):
            //player vs player
            while (true){
                
                // asks player 1 for there X and Y 
                printScreen();
                printf("Player 1 its your move...\n" );
                printf("enter x value: ");
                scanf("%d", &x);
                printf("\n");
                printf("enter y value: ");
                scanf("%d", &y);
                printf("\n");
                letter = 'X';
                printf("%d %d\n", x, y);
                if (gameIntegrity() == true){
                    validInput();
                }

                // asks player 2 for there x and y
                letter = 'O';
                printScreen();
                printf("Player 2 its your move...\n" );
                printf("enter x value: ");
                scanf("%d", &x);
                printf("\n");
                printf("enter y value: ");
                scanf("%d", &y);
                printf("\n");
                if (gameIntegrity() == true){
                    printf("%d %d\n", x, y);
                    validInput();
                }
                rounds++;
                if (rounds >= 3){
                    if (endGame() == true){
                        printScreen();
                        printf("We have a winner!!!");
                        return 0;
                    }
                }
                if (rounds == 4){
                    printf("the game has ended in a tie");
                    return 0;
                }
                

            }
            break;
        case (2):
            //player vs computer
            while (true){ 

                //asks player for there x and y
                printScreen();
                letter = 'X';
                printf("player enter your x value: ");
                scanf("%d", &x);
                printf("\n");
                printf("enter y value: ");
                scanf("%d", &y);
                printf("\n");
                if (gameIntegrity() == true){
                    validInput();
                }

                // code for computers side
                letter = 'O';
                cx = random();
                cy = random();
                computer();
                x = cx;
                y = cy;
                validInput();
                rounds++;
                if (rounds >= 3){
                    if (endGame() == true){
                        printScreen();
                        printf("We have a winner!!!");
                        return 0;
                    }
                }
                if (rounds == 4){

                    printf("the game has ended in a tie");
                    return 0;
                }
            }
    }

    return 0;
}