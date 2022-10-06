#include <iostream>
int main() {
    char c[105], tc[10];
    bool isTrue = false;
    scanf("%s", c);
    for(int i=0; c[i]!='\0'; i++) {
        if (c[i] == 'h') {
            for (int j=i; c[j]!='\0'; j++) {
                if (c[j] == 'e') {
                    for (int k=j; c[k]!='\0'; k++) {
                        if (c[k] == 'l') {
                            for (int l=k; c[l]!='\0'; l++) {
                                if (c[l] == 'l') {
                                    for (int m=l; c[m]!='\0'; m++) {
                                        if (c[m] == 'o') {
                                            isTrue = true;
                                            if(isTrue) {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (isTrue) {
        std:: cout << "YES" << std:: endl;
    }
    else {
        std:: cout << "NO" << std:: endl;
    }
    return 0;
}
