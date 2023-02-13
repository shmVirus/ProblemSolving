#include <iostream>
int main (void) {
    int n;
    std:: cin >> n;
    if (n>=1 && n<=10 || n>=22 && n<=25) std:: cout << "0\n";
    else if (n==21 || n>=11 && n<=19) std:: cout << "4\n";
    else if (n==20) std:: cout << "15\n";
    return 0;
}
