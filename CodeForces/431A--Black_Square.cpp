#include <iostream>
int main (void) {
    int a[4], x=0; std::cin >> a[0] >> a[1] >> a[2] >> a[3];
    std::string s; std::cin >> s;
    for (int i=0; s[i]!='\0'; i++) {
        x += a[s[i]-'0'-1];
    }
    std::cout << x << std::endl;
    return 0;
}
