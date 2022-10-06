#include <iostream>
int main() {
    long long int k,n,w, t, s=0;
    std:: cin >> k >> n >> w;
    for (int i=1; i<=w; i++) {
        t = k*i;
        s += t;
    }
    if (s-n>0) {
    std:: cout << s-n << std:: endl;
    }
    else {
        std:: cout << "0" << std:: endl;
    }
    return 0;
}
