#include <stdio.h>

int main(){
    char operation;
    int mod1, mod2;
    float num1, num2, answer;
    do{
        printf("A) Addition\n");
        printf("S) Subtraction\n");
        printf("D) Division\n");
        printf("M) Multiplication\n");
        printf("R) Modulus\n");
        printf("Q) Quit\n");
        printf("What operation do you want to perform? ");
        scanf(" %c", &operation);

        switch(operation){
            case 'a':
            case 'A':
                printf("Enter the first operand: ");
	        scanf("%f", &num1);
                printf("Enter the second operand: ");
                scanf("%f", &num2);
                answer = num1 + num2;
                printf("Your answer is: %f!\n", answer);
                break;

            case 's':
            case 'S':
                printf("Enter the first operand: ");
                scanf("%f", &num1);
                printf("Enter the second operand: ");
                scanf("%f", &num2);
                answer = num1 - num2;
                printf("Your answer is: %f!\n", answer);
                break;

            case 'D':
	    case 'd':
                printf("Enter the first operand: ");
                scanf("%f", &num1);
                printf("Enter the second operand: ");
                scanf("%f", &num2);
                answer = num2 / num2;
                printf("Your answer is: %f!\n", answer);

       	    case 'M':
            case 'm':
                printf("Enter the first operand: ");
                scanf("%f", &num1);
                printf("Enter the second operand: ");
                scanf("%f", &num2);
                answer = num1 * num2;
		printf("Your answer is: %f!\n", answer);

            case 'R':
            case 'r':
                printf("Enter the first operand: ");
                scanf("%d", &mod1);
                printf("Enter the second operand: ");
                scanf("%d", &mod2);
                answer = mod1 % mod2;
		printf("Your answer is: %f!\n", answer);
                break;

 	    case 'q':
	    case 'Q':
	        printf("Thank you for using this calculator.\n");
	        printf("The calculator will now exit.\n");
	        break;

	       
       	    default:
  	        printf("Not a valid choice!\nChoose again!\n");
		break;
             }

        }

    while(operation != 'q' && operation != 'Q');

    return 0;
}
