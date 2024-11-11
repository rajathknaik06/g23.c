/*At the community center’s crafting workshop, you need to determine the final cost of a new material based on its dimensions. First, calculate the initial cost by multiplying the length and width of the material, resulting in a floating-point number. This initial cost is then converted to an integer for further adjustments.



Based on the user’s choice, adjust the integer value as follows: If the choice is 1, add 5 to the converted integer. If the choice is 2, subtract 5 from it. If the choice is 3, divide the converted integer by 2. The choice is indicated by an integer input (1, 2, or 3).



Your task is to output the initial cost formatted as a floating-point number with two decimal places and the final adjusted integer cost according to the chosen operation.

Input format :
The first line consists of two space-separated float values num1 and num2, representing the first and second dimensions of the material.

The second line contains an integer choice, which indicates the adjustment operation to be performed (1, 2, or 3).

Output format :
The first line displays "Multiplication Result (as float): " followed by the result of multiplying num1 and num2 as a float value with two decimal values.

The second line displays "Converted Integer: " followed by the result as an integer value after performing the required operation on the converted result based on the choice.



Refer to the sample output for the formatting specifications.*/


#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    float multiplicationResult = num1 * num2;
    printf("Multiplication Result (as float): %.2f\n", multiplicationResult);
    int convertedInteger = (int)multiplicationResult;
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            convertedInteger += 5;
            break;
        case 2:
            convertedInteger -= 5;
            break;
        case 3:
            convertedInteger /= 2;
            break;
    }
    printf("Converted Integer: %d", convertedInteger);
    return 0;
}
