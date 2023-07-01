#include <iostream>
int main() {
    char situ[105];
    bool isDanger = false;
    scanf("%s", situ);
    for (int i=0; situ[i]!='\0'; i++) {
        if(situ[i]==situ[i+1] && situ[i+1]==situ[i+2] && situ[i+2]==situ[i+3] && situ[i+3]==situ[i+4] && situ[i+4]==situ[i+5] && situ[i+5]==situ[i+6]) {
            isDanger = true;
            break;
        }
    }
    if(isDanger) {
        std:: cout << "YES" << std:: endl;
    }
    else {
        std:: cout << "NO" << std:: endl;
    }
    return 0;
}
