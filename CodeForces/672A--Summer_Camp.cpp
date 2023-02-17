// ! solved with help of chatGPT, wanted to know mathematical formula instead Concatenation
#include <iostream>
#include <string>
int main (void) {
    int n;
    std::cin >> n;
    int l = 1;  // length(actual_number)
    int c = 9;  // number of possible digits for above length, e.g 10-99 for l=2
    int s = 1;  // starting point of each length digits, e.g 1,10,100
    while (n > l * c) {
        n -= l++ * c;   // remaining n after finding l,c,m
        c *= 10;
        s *= 10;
    }
    s += (n - 1) / l; // actual number
    std::string num = std::to_string(s);
    char d = num[(n - 1) % l]; // digit at specified index
    std::cout << d << '\n';
    return 0;
}
