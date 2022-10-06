#include <iostream>
int main() {
    char in[1005];
    scanf("%s", in);
    if (in[0]>=97 && in[0]<=122) {
        in[0] -= 32;
    }
    std:: cout << in << std:: endl;
    return 0;
}
