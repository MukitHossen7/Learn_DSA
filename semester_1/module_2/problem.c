// Take a number from user and check if its a even number or odd number.

// # include <stdio.h>
// int main(){
//     int user_input;
//     scanf("%d", &user_input);
//     if(user_input % 2 == 0 ){
//         printf("That is an even number. %d \n" , user_input);
//     }else{
//         printf("That is an odd number. %d \n" , user_input);
//     }

// }

// 2.Take a number from user and check if its a positive or negative number.

#include <stdio.h>
int main(){
    int user_input;
    scanf("%d", &user_input);
    if(user_input > 0){
        printf("That is a positive number. %d \n" , user_input);
    }else if (user_input < 0){
        printf("That is a negative number. %d \n" , user_input);
}
}