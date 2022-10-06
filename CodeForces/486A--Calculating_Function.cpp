#include <iostream>
int main() {
    long long int n;
    std:: cin >> n;
    if (n%2==0) n = n/2;
    else n = -(n+1)/2;
    std:: cout<< n << std:: endl;
    return 0;
}