#include <iostream>
#include <cmath>
int main(void) {
    int a, b;
    std:: cin >> a >> b;
    printf("%d %d\n", a<b?a:b, abs(a-b)/2);
    return 0;
}
