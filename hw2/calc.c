/*Filename: calc.c
 *Author: Ahmed Eissa
 *Date: September 25, 2015
 *Description: This program performs basic math functions in the context of a shopping trip to the mall. 
 */

#include <stdio.h> 

int main (){

  float endMoney; 
  int shirts;
  float totalShirts;
  float myCoffee; 
  float allCoffee; 
  int friends;
  float jeans;
  float total;
  int atm;
  float handled;


  printf("How much money did you have at the end of the day? $");
  scanf("%f", &endMoney);
 
  printf("How many shirts did you buy? ");
  scanf("%d", &shirts);
  totalShirts = shirts * 2.50;

  printf("How many friends did you meet up with? ");
  scanf("%d", &friends);
  myCoffee = 2.75;
  allCoffee = friends * 2.75 + myCoffee;
 
  printf("How much were the jeans? $");
  scanf("%f", &jeans); 

  printf("\n");

  printf("Calculating your original amount...\n");

  printf("\n");
  atm = 10;
  handled = atm + allCoffee + jeans + totalShirts + endMoney;
  printf("You handled $%.2f throughout the day.\n", handled);
  
  total = totalShirts + jeans + allCoffee;
  printf("You spent $%.2f total.\n", total);
 
  return 0;
}
