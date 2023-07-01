#include <iostream>
int main() {
   int n, o=0,e=0, odd[5],even[5];
   for(int t=0; t<15; t++) {
      std:: cin >> n;
      if (n%2!=0) {
         odd[o] = n;
         o++;
         if (o==5) {
            for (int x=0; x<o; x++) {
               std:: cout << "impar[" << x << "] = " << odd[x] << std:: endl;
            }
            o = 0;
         }
      } else {
         even[e] = n;
         e++;
         if (e==5) {
            for (int y=0; y<e; y++) {
               std:: cout << "par[" << y << "] = " << even[y] << std:: endl;
            }
            e = 0;
         }

      }
      if (t==14) {
         for (int x=0; x<o; x++) {
            std:: cout << "impar[" << x << "] = " << odd[x] << std:: endl;
         }
         for (int y=0; y<e; y++) {
            std:: cout << "par[" << y << "] = " << even[y] << std:: endl;
         }
      }
   }
   return 0;
}
