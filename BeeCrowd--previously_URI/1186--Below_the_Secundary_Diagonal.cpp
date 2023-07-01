#include <iostream>
#include <iomanip>
int main() {
   int d=0;
   char c;
   float s=0,m=0, arr[12][12];
   std:: cin >> c;
   for(int i=0; i<12; i++) {
      for(int j=0; j<12; j++) {
         std:: cin >> arr[i][j];
      }
   }
   for(int i=11; i>=0; i--) {
      for (int j=11; j>11-i; j--) {
         s+=arr[i][j];
         d++;
      }
   }
   if (c=='S') {
      std:: cout << std:: fixed << std:: setprecision(1) << s << std:: endl;
   } else if (c=='M') {
      m = s/d;
      std:: cout << std:: fixed << std:: setprecision(1) << m << std:: endl;
   }
   return 0;
}

