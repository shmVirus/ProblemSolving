#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    printf("%d:%d:%d\n", A/3600, A%3600/60, A%3600%60%60);
    return 0;
}


/*

another solution:
#include<stdio.h>
int main(){
   int h, m, s, n;
   scanf("%d", &n);

   h = n / 3600;
   m = n % 3600 / 60;
   s = n % 60;
   printf("%d:%d:%d\n", h, m, s);
   return 0;
}

*/
