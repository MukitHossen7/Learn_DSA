// #include <stdio.h>

// int main() {
//     int x = 5;
//     int y;

//     y = ++x;
//     printf("%d\n", y);  //6

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b;

//     b = a++;
//     printf("%d\n", b); //10 
//     printf("%d\n", a);  //11 
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int p = 8;
//     int q, r;

//     q = --p;  //7
//     r = p--;  //7

//     printf("%d\n", q);  //7
//     printf("%d\n", r);  //7

//     return 0;
// }


# include <stdio.h>
int main (){
    int n, i, even=0, odd=0, positive=0, negative=0;
    scanf("%d", &n);
    
    for(int j= 1; j <= n; j++){
    scanf("%d", &i);
    printf("i: %d\n", i);
        // if(i % 2 == 0){
        //     even++;
        // }
        // else{
        //     odd++;
        // }
        // if(i > 0){
        //     positive++;
        // }
        // else if(i < 0){
        //     negative++;
        // }
    }
    // printf("Even: %d\n", even);
    // printf("Odd: %d\n", odd);
    // printf("Positive: %d\n", positive);
    // printf("Negative: %d\n", negative);
    return 0;
}