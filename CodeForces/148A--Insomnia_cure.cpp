#include <iostream>
int main() {
    int k,l,m,n,d, x=0;
    std:: cin >> k >> l >> m >> n >> d;
    for (int i=1; i<=d; i++){
        if (i%k==0) x++;
        if (i%l==0 && i%k!=0) x++;
        if (i%m==0 && i%k!=0 && i%l!=0) x++;
        if (i%n==0 && i%k!=0 && i%l!=0 && i%m!=0) x++;
    }
    std:: cout << x << std:: endl;
    return 0;
}