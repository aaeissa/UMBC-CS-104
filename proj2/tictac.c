/* Name: Ahmed EIssa
   Date: 12/14/15
   Class: CMSC104-1096
   Professor: Sharyn Kurland
   Email: aeissa2@umbc.edu
   Description: This program is a simple game of tic-tac-toe. It takes presents the game board, takes input f
   terminates when there is a winner. 
 */ 

#include <stdio.h>
#include <stdlib.h>

// this constant represents the size of the game board
#define SIZE 9

void printBoard(char board[SIZE]);
int check();
int checkTwo();
void firstBoard(char board[SIZE], int moveOne);
void boardTwo(char board[SIZE], int moveTwo);
int slotCheck(char board[SIZE], int moveOne);
int slotCheckTwo(char board[SIZE], int moveTwo);
int horiz(char board[SIZE]);
int vert(char board[SIZE]);
int diagonal(char board[SIZE]);

/* printBoard: prints the tic-tac-toe game board
   inputs: board(the tic-tac-toe game tiles)
   outputs: None */ 
void printBoard(char board[SIZE]){

  // prints an array of characters, which is the game board  
  printf("|%c| |%c| |%c|\n|%c| |%c| |%c|\n|%c| |%c| |%c|\n", board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);

}

/* check: ensures that player 1 selects a valid tle. 
   inputs: none
   outputs: choiceOne (player 1's valid input) */
int check(){

  int choiceOne;

  printf("[Player One] Where do you want to place your 'o' (1-9)? ");
  scanf("%d", &choiceOne);

  // checking input to ensure it's within the valid range
  while(choiceOne < 1 || choiceOne > 9){
    printf("%d is an invalid tile.\n", choiceOne);
    printf("Where do you want to place your 'o' (1-9)? ");
    scanf("%d", &choiceOne);
  }
  return choiceOne;
}

/* checkTwo: ensures that player 2 selects a valid tle.                                                                                                                                                              
   inputs: none                                                                                                                                                                                                   
   outputs: choiceTwo (player 2's valid input) */
int checkTwo(){

  int choiceTwo;

  printf("[Player Two] Where do you want to place your 'x' (1-9)? ");
  scanf("%d", &choiceTwo);

  // checking input to ensure it's within the valid range                                                                                                                                                        
  while(choiceTwo < 1 || choiceTwo > 9){
    printf("%d is an invalid tile.\n", choiceTwo);
    printf("Where do you want to place your 'o' (1-9)? ");
    scanf("%d", &choiceTwo);
  }
  return choiceTwo;
}

/* firstBoard: places player 1's 'o' onto the game board
   inputs: board(the tic-tac-toe game tiles), moveOne (player 1's first move)
   outputs: none                                                                                                                                                                       
 */ 
void firstBoard(char board[SIZE], int moveOne){

  /*matches player 1's move with one of the following cases/tiles on the board, and replaces an integer 
    in the array with an 'o' */ 

switch(moveOne){

 case 1:
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
   board[moveOne - 1] = 'o';
   break;
 }
}

/*boardTwo: places player 2's 'x' onto the game board
  inputs: board(the tic-tac-toe game tiles), moveTwo (player 2's game move)
  outputs: none
*/
void boardTwo(char board[SIZE], int moveTwo){

  /*matches player 2's move with one of the following cases/tiles on the board, and replaces an integer in the array with an 'x'*/ 
  switch(moveTwo){

  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    board[moveTwo - 1] = 'x';
    break;
  }
}

/* slotCheck: checks to see if player1 has chosen a tile that already has a value
   inputs: moveOne(player 1's move), moveTwo (player 2's move) 
   outputs: moveOne (player 1's valid move) */
int slotCheck(char board[SIZE], int moveOne){

  //error check to ensure that player 1 is unable to place an 'o' where a game value already exists 

  while((board[moveOne - 1] == 'o') || (board[moveOne - 1] == 'x')){
    printf("Slot %d already has a value.\n", moveOne);
    printf("Where do you want to place your 'o' (1-9)? ");
    scanf("%d", &moveOne);
  
    //rechecks the input to ensure it's within the valid range 
    while(moveOne < 1 || moveOne > 9){
      printf("%d is an invalid tile.\n", moveOne);
      printf("Where do you want to place your 'o' (1-9)? ");
      scanf("%d", &moveOne);
    }
  }
  return moveOne;
}

/* slotCheckTwo: checks to see if player2 has chosen a tile that already has a value
   inputs: moveOne(player 1's move), moveTwo (player 2's move)
   outputs: moveTwo (player 2's valid move) */
int slotCheckTwo(char board[SIZE], int moveTwo){

  //error check to ensure that player 2 is unable to place an 'x' where a game value already exists
 
  while((board[moveTwo - 1] == 'o') || (board[moveTwo - 1] == 'x')){
    printf("Slot %d already has a value.\n", moveTwo);
    printf("Where do you want to place your 'x' (1-9)? ");
    scanf("%d", &moveTwo);

    //rechecks the input to ensure it's within the valid range
    while(moveTwo < 1 || moveTwo > 9){
      printf("%d is an invalid tile.\n", moveTwo);
      printf("Where do you want to place your 'x' (1-9)? ");
      scanf("%d", &moveTwo);
    }
  }

  return moveTwo;
}

/* horiz: checks to see if either player wins horizontally 
    inputs: board(the tic-tac-toe game tiles)
    outputs: winner (a value to signify if player 1 or player 2 wins the game) */
int horiz(char board[SIZE]){

  int winner;


  // the following if-else if statements check for horizontal rows of 'o' and 'x', and re-define the 'winner' value accordingly 
  if(board[0] == 'o' && board[1] == 'o' && board[2] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
  }
  else if(board[3] == 'o' && board[4] == 'o' && board[5] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[6] == 'o' && board[7] == 'o' && board[8] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[0] == 'x' && board[1] == 'x' && board[2] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  else if(board[3] == 'x' && board[4] == 'x' && board[5] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  else if(board[6] == 'x' && board[7] == 'x' && board[8] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  return winner; 
}

/* vert : checks to see if either player wins vertically
    inputs: board(the tic-tac-toe game tiles)
    outputs: winner (a value to signify if player 1 or player 2 wins the game) */

int vert(char board[SIZE]){
  int winner;

  // the following if-else if statements check for vertical columns of 'o' and 'x', and re-define the 'winner' value accordingly
  if(board[0] == 'o' && board[3] == 'o' && board[6] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[1] == 'o' && board[4] == 'o' && board[7] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[2] == 'o' && board[5] == 'o' && board[8] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[0] == 'x' && board[3] == 'x' && board[6] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  else if(board[1] == 'x' && board[4] == 'x' && board[7] == 'x'){
    printf("Player 2 wins!\n");
    winner = 2;
   }
  else if(board[2] == 'x' && board[5] == 'x' && board[8] == 'x'){
    printf("Player 2 wins!\n");
    winner = 2;
   }
  return winner;
}

/* diagonal: checks to see if either player wins diagonally
    inputs: board(the tic-tac-toe game tiles)
    outputs: winner (a value to signify if player 1 or player 2 wins the game) */
int diagonal(char board[SIZE]){
  int winner;

  // the following if-else if statements check for diagonal lines of 'o' and 'x', and re-define the 'winner' value accordingly
  if(board[0] == 'o' && board[4] == 'o' && board[8] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[2] == 'o' && board[4] == 'o' && board[6] == 'o'){
    printf("Player 1 won!\n");
    winner = 1;
   }
  else if(board[0] == 'x' && board[4] == 'x' && board[8] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  else if(board[2] == 'x' && board[4] == 'x' && board[6] == 'x'){
    printf("Player 2 won!\n");
    winner = 2;
   }
  return winner;
}

int main(){
  //initializing array of characters, which contains the numbers 1-9, to create the tic-tac-toe game board
  char board[SIZE] = {'1','2', '3', '4', '5', '6', '7', '8', '9'};
  //initializing variables
  int moveOne, moveTwo, winOne, winTwo, winThree, winnerOne, winnerTwo, winnerThree;

  //prints the game board at the beginning of the game, before the first move
  printBoard(board); 

  // the do-while structure allows for all game functions to occur at least one time before checking for a winner to terminate the game
  do{

    // player 1 begins the game is prompted to input a move; the move is then error checked for range and validity, and is checked to see if player 1 has won by 1 of 3 ways
    moveOne = check();

    moveOne = slotCheck(board, moveOne);
  
    firstBoard(board, moveOne);

    winOne = horiz(board);

    winTwo = vert(board);

    winThree = diagonal(board);

    //the game board is printed again before player 2 is prompted for input
    printBoard(board);    
  
    // this ensures that player 2 will only be prompted for input if player 1 has not yet won the game
    if ((winOne != 1 && winOne !=2) && (winTwo != 1 && winTwo != 2) && (winThree != 1 && winThree != 2)){  

      // player 2 is prompted to input a move; the move is then error checked for range and validity, and is checked to see if player 2 has won by 1 of 3 total ways
      moveTwo = checkTwo();

      moveTwo = slotCheckTwo(board, moveTwo);

      boardTwo(board, moveTwo);

      winnerOne = horiz(board);

      winnerTwo = vert(board);
      
      winnerThree = diagonal(board);

      // the game board is printed again after player 2's move and before player 1's next move (if the game goes to that stage)
      printBoard(board);

    }

    // the game will only continue while these conditions are NOT met - which means that the game will loop until there is a winner
} while((winOne != 1 && winOne != 2) && (winTwo != 1 && winTwo != 2) && (winThree != 1 && winThree != 2) && (winnerOne != 1 && winnerOne !=2) && (winnerTwo != 1 && winnerTwo != 2) && (winnerThree != 1 && winnerThree != 2));


  return 0;
}
