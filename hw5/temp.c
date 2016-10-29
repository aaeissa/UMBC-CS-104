
/* Name: Ahmed Eissa
   Date: 11/7/15
   email: aeissa2@umbc.edu
   class: CMSC104-1093
   Description: This program will take up to 10 temperature readings from the user and find the minimum, maximum and average temperature. */

#include <stdio.h>

/*Avoiding the use of magic numbers by setting constants for my array size and the '301' quit option */
#define AMNT 10
#define QUIT 301


/* checkArray: error checks the range of the array of temperatures to ensure that the elemnts are not less than -200 or greater than 300.

   inputs: input (a temperature that is entered into the array)

   output: if the user enters 301, the function quits. Otherwise, it returns the user's input.  */ 
int checkArray(int input);


/*min: identifies the minimum element in an array. 
  inputs: tempList (array of temperatures), counter (the number of times user has put in a temperature.)
  outputs: function returns an integer representing the smallest temperature in the array*/
int min(int tempList[], int counter);

/*max: identifies the maximum element in an array.                          
  inputs: tempList (array of temperatures), counter (the number of times user has put in a temperature.)                                               
  outputs: function returns an integer representing the biggest temperature\
  in the array*/
int max(int tempList[], int counter);

/*avg: identifies the average of the elements in the array.
  inputs: tempList (array of temperatures), counter (the number of times user has put in a temperature.)                                                 outputs: function returns a float representing the average of all the temperatures in the array*/
float avg(int tempList[], int counter);




int checkArray(int input){

  /* while the input is in the valid range and not quit */
  while (((input < -200) || (input > 300)) && (input != 301)){
      printf("Invalid value.\nEnter a temperature between -200 and 300.\nEnter 301 to stop entering values. ");
      scanf("%d", &input);
     }
  
  /* if input is 301, quit */
  if (input == QUIT){
    return QUIT;
    }

  return input;
}


int min(int tempList[], int counter){
  int i, smallest;

  /* choose value to initially represent the smallest value in the array */
  smallest = tempList[0];

  /* iterate through next consectuive array elements */
  for (i = 0; i < counter; i++){
    /* compare next element to original chosen element*/
    if (tempList[i] < smallest){
      /* set that value to be the new smallest element*/
      smallest = tempList[i];
    }
  } 
  return smallest;
}


int max(int someTemps[], int counter){
  int i, biggest;
  /* declare array position to be 1 */
  int position = 1;

  /* choose a value to initially represent the biggest value in the array */
  biggest = someTemps[0];
  
  /* iterate through the next consecutive elements in the array */
  for (i = 1; i < counter; i++){
    /* if the current position is greater than the original value */
    if (someTemps[i] > biggest){
      /* set that value to now be the biggest */
      biggest = someTemps[i];
      position = i + 1;
    }
  }

  return biggest;
}



float avg(int tempList[], int counter){
  float sum = 0;
  int i;
  float average = 0;

  /* iterate through array */
  for (i = 0; i < counter; i++){
    /* for each iteration, add array element to sum */
    sum = sum + tempList[i];
  }   
  
  /* to find the average, divide the sum by the total number of elements */
  average = sum / counter;

  return average;
}



int main(){

  /* initialze variables */ 
  int i, small, big, input;
  int counter = 0;
  int fillCount = 10;
  int tempList[AMNT];
  float average;
    

  /* Ask the user for a temperature and put it directly into the array of temperatures. */
  for(i = 0; i < fillCount; i++){
    printf("Enter a temperature between -200 and 300.\nEnter 301 to stop entering values. ");
    scanf("%d", &input);

    /* validate user input */ 
    input = checkArray(input);
    
    /* check for the 301 case */ 
    if (input == QUIT){
      fillCount = 0;
    }
    /* increase counter */ 
    else{
      tempList[i] = input;
      counter++;
    }
  }

  /* call to functions to calculate avg, min, and max */
  /* store returned values in variables average, small, big */
  average = avg(tempList, counter);
  small = min(tempList, counter);
  big = max(tempList, counter);

  /* print results */
  printf("The average temperature was %.2f degrees.\n", average);
  printf("The maximum temperature recorded was %d degrees.\n", big);
  printf("The minimum temperature recorded was %d degrees.\n", small);

 return 0;
}
