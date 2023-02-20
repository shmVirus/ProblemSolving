#include <iostream>
int main (void) {
    std::string s; std::cin >> s;
    int a=0; char c;
    for (int i=0; s[i]!='\0'; i++) {
        c = s[i];
        if (c=='Q') {
            for (int j=i+1; s[j]!='\0'; j++) {
                c = s[j];
                if (c=='A') {
                    for (int k=j+1; s[k]!='\0'; k++) {
                        c = s[k];
                        if (c=='Q') a++;
                    }
                }
            }
        }
    }
    std::cout << a << std::endl;
    return 0;
}
