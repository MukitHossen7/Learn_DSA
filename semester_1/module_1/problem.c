
// 1.Explain why we need long long int data type? 
// The long long int data type is needed in C to store lar
// ger integer values that exceed the range of the standard int data type. The int data type typically has a range of -2,147,483,648 to 2,147,483,647 (for 32-bit systems), which may not be sufficient for certain applications that require handling very large numbers. The long long int data type can store values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (for 64-bit systems), making it suitable for situations where larger integer values are needed.
// if( 1000000000 < num){
//     need long long int data type 
//     return 0;
// }

// Write all the rules for naming a variable in C programming
// 1. A variable name can only contain letters (a-z, A-Z), digits (0-9), and underscores (_).
// 2. A variable name cannot start with a digit.
// 3. A variable name cannot be a reserved keyword in C.
// 4. Variable names are case-sensitive.
// 5. It is good practice to use descriptive names for variables.

// Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.

#include <stdio.h>
int main (){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d %d", num2, num1);

    return 0;
}