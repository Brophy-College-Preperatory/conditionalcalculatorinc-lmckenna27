#include <stdio.h>

int main(void) {
  int first_num;
  int second_num;
  int operation_choice;

  do
    {
      printf("Enter a number between one and ten: ");
      scanf("%i", &first_num);
    }
  while (first_num > 10 || first_num < 1);

  do
    {
      printf("Enter an even number: ");
      scanf("%i", &second_num);
    }
  while (second_num % 2 != 0);

  do {
      printf("\nChoose an operation:\n" 
        "1 - Addition\n" 
        "2 - Subtraction\n"
        "3 - Multiplication\n" 
        "4 - Division\n"
      );
      scanf("%i", &operation_choice);
    }
  while (operation_choice < 1 || operation_choice > 4);

  printf("\nYour choice is: %i\n", operation_choice);

  if (operation_choice == 1) {
    int solution = first_num + second_num;
    printf("Sum: %i\n", solution);
  }
  else if (operation_choice == 2) {
    int solution = first_num - second_num;
    printf("Difference: %i\n", solution);
  }
  else if (operation_choice == 3) {
    int solution = first_num * second_num;
    printf("Product: %i\n", solution);
  }
  else if (operation_choice == 4) {
    if (second_num == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        float solution = (float) first_num / second_num;
        printf("Quotient: %.2f\n", solution);
    }
  }
}