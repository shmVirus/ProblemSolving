#include <iostream>
int main() {
    int shoes[5], c=0;
    for (int i=0; i<4; i++) {
        std:: cin >> shoes[i];
    }
    for (int i=0; i<4; i++) {
        for (int j=i+1; j<4; j++) {
            if (shoes[i] == shoes[j]) {
                c++;
                break;
            }
        }
    }
    std:: cout << c << std:: endl;
    return 0;
}
