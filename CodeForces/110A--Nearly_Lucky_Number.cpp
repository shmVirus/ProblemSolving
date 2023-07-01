#include <iostream>
int main() {
    long long int n, c=0;
    std:: cin >> n;
    do {
        int r = n%10;
        n /= 10;
        if (r==4 || r==7) {
            c++;
        }
    } while (n!=0);
    if (c==4 || c==7) {
        std:: cout << "YES" << std:: endl;
    }
    else {
        std:: cout << "NO" << std:: endl;
    }
    return 0;
}
