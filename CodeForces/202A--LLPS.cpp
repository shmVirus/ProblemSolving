#include <iostream>
int main() {
    char str[15];
    scanf("%[^\n]", str);
    char ch=str[0];
    int c=1;
    for (int i=1; str[i]!='\0'; i++) {
        if (str[i] > ch) {
            ch = str[i];
            c=1;
        } else if (str[i] == ch) {
            c++;
        }
    }
    for (int i=0; i<c; i++) {
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
