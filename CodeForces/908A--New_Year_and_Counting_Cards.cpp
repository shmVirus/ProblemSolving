#include <iostream>
int main (void) {
    std::string s; std::cin >> s;
    int f=0;
    for (int i=0; s[i]!='\0'; i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9') f++;
    }
    std::cout << f << std::endl;
    return 0;
}
