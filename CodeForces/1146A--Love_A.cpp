#include <iostream>
int main (void) {
    std::string s; std::cin >> s;
    int l=0, a=0;
    for (l=0; s[l]!='\0'; l++) {
        if (s[l]=='a') a++;
    }
    std::cout << ( a>(l/2)? l : 2*a-1 ) << std::endl;
    return 0;
}
