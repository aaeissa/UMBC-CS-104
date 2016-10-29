/*Filename: calc.c / calc.out
 Name: Ahmed Eissa
 Date: October 16, 2015
 Section: CMSC104-1093
 Email: aeissa2@umbc.edu
 Description: this is the source code for a simple calculator program that prompts the user to select a mathematical operation and to provide input for the operation to be perfomred. 
*/ 

#include <stdio.h> 

int main(){

  /*userChoice variable represents which operation the user chose from the menu presented to them */ 
  char userChoice;
  /*Below, there are three variables for each operation that the user is able to perform - 2 variables for their input numbers, and one variable that is the result of the operation.  */
  int addOne, addTwo, subOne, subTwo, multOne, multTwo, remainderOne, remainderTwo;
  float sum, divOne, divTwo, difference, quotient, product, remainder;

  /*Prompting the user to select an operation from the menu.*/
  printf("Welcome to a simple calculator application.\nPlease choose one of the following:\nA) Addition\nS) Subtraction\nD) Division\nM) Multiplication\nR) Get a Remainder\nQ) Quit\nChoice: "); 
  scanf("%c", &userChoice);

  /*If user user chooses addition, the operation is performed below. */
  if (userChoice == 'A' || userChoice == 'a'){
      printf("What is the first number you want to add? ");
      scanf("%d", &addOne);
      printf("What is the second number you want to add? ");
      scanf("%d", &addTwo);

      sum = addOne + addTwo;
      printf("The sum is: %.2f\n", sum);
  }

  /*If user chooses substraction, the operation is performed below.*/ 
  else  if (userChoice == 'S' || userChoice == 's'){
      printf("What is the first number you want to subtract? ");
      scanf("%d", &subOne);
      printf("What is the second number you want to subtract? ");
      scanf("%d", &subTwo);

      difference = subOne - subTwo;
      printf("The difference is: %.2f\n", difference);
  }
  
  /*If user chooses division, the operation is performed below. If the user attempts to divide by 0, they will be altered that this is impossible, and the program wille exit smoothly.*/
  else if (userChoice == 'D' || userChoice == 'd'){
      printf("What is the first number you want to divide by? ");
      scanf("%f", &divOne);
      printf("What is the second number you want to divide by? ");
      scanf("%f", &divTwo);
      
      if (divTwo == 0){
	printf("You cannot divide by 0.\n");
	printf("Thank you for using CMSC 104 calculator.\n");
      }

      else{
      quotient = divOne / divTwo;
      printf("The quotient is: %.2f\n", quotient);
      }
    }

  /*If the user chooses multiplication, the operation is performed below.*/
  else if (userChoice == 'M' || userChoice == 'm'){
      printf("What is the first number you want to multiply by? ");
      scanf("%d", &multOne);
      printf("What is the second number you want to multiply by? ");
      scanf("%d", &multTwo);

      product = multOne * multTwo;
      printf("The product is: %.2f\n", product);
    }

  /*If the user chooses to get a remainder, the operation is performed below.*/ 
  else if (userChoice == 'R' || userChoice == 'r'){
      printf("What is the first number you want to divide by? ");
      scanf("%d", &remainderOne);
      printf("What is the second number you want to divide by? ");
      scanf("%d", &remainderTwo);

      remainder = remainderOne % remainderTwo;
      printf("The remainder is: %.2f\n", remainder);
    }

  /*If the user user chooses to quit, the program will thank them for using the calculator, and end.*/ 
  else if(userChoice == 'Q' || userChoice == 'q'){
      printf("Thank you for using the CMSC 104 calculator!\n");
    }
  /*If the user does not select an appropriate option from the menu, the program will terminate*/ 
  /* else if (userChoice != 'A' || userChoice != 'a' || userChoice != 'S' || userChoice != 's' || userChoice != 'D' || userChoice != 'd' || userChoice != 'M' || userChoice != 'm' || userChoice != 'R' || userChoice != 'r' || userChoice != 'Q' || userChoice != 'q'){ 
      printf("Invalid choice.\n");
      printf("The program will now terminate.\n");
      }*/

  else {
    printf("Invalid choice.\n");
    printf("The program will now terminate.\n");
  }

  return 0;
}
