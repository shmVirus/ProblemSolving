#include <iostream>
int main() {
    char a[105], b[105];
    scanf("%s %s", a, b);
    for (int i=0; a[i]!='\0'; i++) {
        if (a[i]==b[i]) a[i]='0';
        else a[i]='1';
    }
    printf("%s\n", a);
    return 0;
}