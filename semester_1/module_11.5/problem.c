// # include <stdio.h>
// int main (){
//     int n, m;
//     scanf("%d %d", &n,&m);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

// int fnc[m + 1 ];

//      for(int i = 0; i < n; i++){
//         for(int j = 1; j <= m; j++ ){
//             if(a[i] == fnc[j]){
//           fnc[j]++;
//         }
//         }


    //     if(a[i] == 1){
    //       fnc[1]++;
    //     }else if (a[i] == 2)
    //     {
    //          fnc[2]++;
    //     }else if (a[i] == 3)
    //     {
    //  fnc[3]++;
    //     }else if (a[i] == 4)
    //     {
    //           fnc[4]++;
    //     }else if (a[i] == 5)
    //     {
    //       fnc[5]++;
    //     }
         
    // }
   
    //    printf("1: %d\n", fnc[1]);
    //    printf("2: %d\n", fnc[2]);
    //    printf("3: %d\n", fnc[3]);
    //    printf("4: %d\n", fnc[4]);
    //    printf("5: %d\n", fnc[5]);

//     for(int j = 1; j <= m; j++ ){
//              printf("%d\n", fnc[j]);
//         }
//     return 0;
// }

// # include <stdio.h>
// int main (){
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n];
//     for(int i = 0; i < n; i++){
//          scanf("%d", &a[i]);
//     }
//     int fre[m];
//     for(int i = 1; i <= m; i++){
//         fre[i] = 0;
//     }
  
//     for(int i = 0; i < n; i++){
//           int val = a[i];
//           fre [val] ++;
//     }
//     for(int i = 1; i <= m; i++){
//          printf("%d\n", fre[i]);
//     }
//     return 0;
// }


// # include <stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     char a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%s", &a[i]);
//     }
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum = sum + (a[i] - '0');
//     }
//     printf("%d", sum);
//     return 0;
// }


# include <stdio.h>
int main (){
    char s[10000001];
    scanf("%s",&s);
    printf("%s",s);
    return 0;
}