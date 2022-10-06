#include <iostream>
int main() {
    int n, x;
    char child[55];
    std:: cin >> n >> x;
    std:: cin >> child;
    for (int j=0; j<x; j++) {
        for (int i=0; child[i]!='\0'; i++) {
            if (child[i]=='B' && child[i+1]=='G') {
                child[i] = 'G';
                child[i+1] = 'B';
                i++;
            }
        }
    }
    std:: cout << child << std:: endl;
    return 0;
}
