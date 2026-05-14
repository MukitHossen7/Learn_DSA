
// # include <stdio.h>
// # include <string.h>
// int main (){
//     int t;
//     scanf("%d", &t);
//     for(int i = 0; i < t; i++){
//     char s[10001];
//     scanf("%s", &s);
//     int length = strlen(s);
//     int cap = 0;
//     int small = 0;
//     int digit = 0;
//     for(int i = 0; i < length; i++ ){
        
//         if(s[i] >= 'A' && s[i] <= 'Z'){
//            cap ++;
//         }else if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             small ++;
//         }else if (s[i] >= '0' && s[i] <= '9')
//         {
//           digit ++;
//         }
    
//     }

//        printf("%d %d %d\n", cap, small, digit);
//     }
//     return 0;
// }

# include <stdio.h>
# include <string.h>
int main (){
    char s[10001];
    scanf("%s", &s);
    int length = strlen(s);
   int frc[26] = {0};

    for(int i = 0; i < length; i++){
        char val = s[i];
        frc[ val- 'a' ] ++;
        
    }

       for(int i = 0; i < 26; i++){
        if(frc[i] > 0){
        char val = 97 + i;
        printf("%c - %d\n", val, frc[i]);
    
        }
        
    }
    
    return 0;
}