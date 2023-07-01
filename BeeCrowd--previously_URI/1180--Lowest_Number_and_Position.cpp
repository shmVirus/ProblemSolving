#include <iostream>
int main() {
   int N, sm, smp, X[1000];
   std:: cin >> N;
   for(int i=0; i<N; i++) {
      std:: cin >> X[i];
   }
   sm = X[0];
   smp = 0;
   for(int i=1; i<N; i++) {
      if (X[i] <= sm) {
         sm = X[i];
         smp = i;
      }
   }
   std:: cout << "Menor valor: " << sm << std:: endl << "Posicao: " << smp << std:: endl;
   return 0;
}
