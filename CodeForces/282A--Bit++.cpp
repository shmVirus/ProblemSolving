#include <iostream>
int main() {
    int x=0, n;
    std:: cin >> n;
    for(int i=0; i<n; i++) {
        char X[5];
        scanf("%s", X);
        if(X[1]=='+' && X[2]=='+') {
            x++;
        }
        else if (X[1]=='-' && X[2]=='-') {
            x--;
        }
        else if (X[0]=='+' && X[1]=='+') {
            ++x;
        }
        else if (X[0]=='-' && X[1]=='-') {
            --x;
        }
    }
    std:: cout << x << std:: endl;
    return 0;
}
