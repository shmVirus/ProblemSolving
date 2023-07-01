#include <iostream>
int main() {
    int n,r=0, a=-1,b=-1;
    std:: cin >> n;
    for (int i=0; i<n; i++) {
        if(i%2) std:: cin >> a;
        else std:: cin >> b;
        if(a!=b) r++;
    }
    std:: cout << r << std:: endl;
    return 0;
}