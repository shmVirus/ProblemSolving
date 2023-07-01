#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    int t, n, x;
    std:: cin >> t;
    for(int i=0; i<t; i++){
        std:: cin >> n;
        x = rand()%n;
        std:: cout << x << " " << n-x << std:: endl;
    }
    return 0;
}
