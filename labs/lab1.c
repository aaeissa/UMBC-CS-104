/*This program will sum the user's input until the value -999 is entered
 */

#include <stdio.h>

int main(){

  float sum = 0;
  float value;

  printf("Enter a number to add to the sum or enter -999 to quit: ");
  scanf("%f", &value);
  while (value != -999){
    sum = sum + value;
    printf("Enter a number to add to the sum or enter -999 to quit: ");
    scanf("%f", &value);
  }
  
  printf("The sum produced: %.5f \n", sum);

  return 0;
}
