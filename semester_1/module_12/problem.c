// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int length_2 = 0;
//     int length_3 = 0;
//     for(int i = 0; i < n; i++){
//         if(a[i] % 2 == 0){
//             length_2 ++;
//         }else if (a[i] % 3 == 0)
//         {
//             length_3 ++;
//         }
//     }
//      printf("%d %d", length_2, length_3);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     char s[100001];
//     scanf("%s", &s);
//    int length_s = strlen(s);
//    int con = 0;
  
//    for(int i = 0; i < length_s; i++){
//     if(s[i] != 'a' && s[i] != 'e' &&  s[i] != 'i' && s[i] != 'o' && s[i] != 'u' ){
//      con ++;
//     }
    
//    }

//     printf("%d", con);
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int t;
//     scanf("%d" , &t);
//     for(int i = 0; i< t; i++){
//      int m1, m2 ,d;
//      scanf("%d %d %d",&m1, &m2,&d);
//      int totalTime =(d * m1) / (m1 + m2);
//      int fewer_days = d - totalTime;
   
//      printf("%d\n", fewer_days);
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// int main (){
//     int t;
//     scanf("%d", &t);
    
//     char s[10001];
//     scanf("%s", &s);
//     int length = strlen(s);
//     int cap = 0;
//     int small = 0;
//     int digit = 0;
//     for(int i = 0; i < length; i++ ){
        
//         if( 65 < 90 ){
//             printf("%c ", s[i]);
//         }
        
//         // printf("%c ", s[i]);
//     }

//     //    printf("%d ", cap);
//     return 0;
// }