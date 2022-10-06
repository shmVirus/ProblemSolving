#include <iostream>
int main() {
    int n, x, y, t;
    std:: cin >> t;
    while(t!=0) {
        std:: cin >> n;
        x = n%10;
        x--;
        x = x * 10;
        y = 0;
        do {
            n /= 10;
            y++;
        } while(n!=0);
        if (y==1) x += 1;
        if (y==2) x += 3;
        if (y==3) x += 6;
        if (y==4) x += 10;
        std:: cout << x << std:: endl;
        t--;
    }
    return 0;
}
