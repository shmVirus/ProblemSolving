#include <iostream>
#include <iomanip>
int main() {
   double X, arr[100];
   std:: cin >> X;
   for (int i=0, j=99; i<100; i++, j--) {
      arr[j] = X;
      std:: cout << "N[" << i << "] = " << std:: fixed << std:: setprecision(4) << arr[j] << std:: endl;
      X/=2;
   }
   return 0;
}
