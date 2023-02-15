#include <iostream>
int main (void) {
    int a, b, c;
    std:: cin >> a >> b >> c;
    int m = (a>b)? (a>c)? ( (b>c)? (abs(b-a)+abs(b-c)):(abs(c-a)+abs(c-b))) : (abs(a-b)+abs(a-c)) : (b>c)? ((a>c)? (abs(a-b)+abs(a-c)):(abs(c-a)+abs(c-b))):(abs(b-a)+abs(b-c));
    std:: cout << m << std:: endl;
    return 0;
}
