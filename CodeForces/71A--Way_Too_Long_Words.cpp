#include <iostream>
int main() {
    int n;
    std:: cin >> n ;
    for (int i=0; i<n; i++) {
        char str[100], res[4];
        int length, arr[2],
        a=0, t;
        scanf("%s", str);
        for (length=0; str[length]!='\0'; length++);
        if (length > 10) {
            res[0] = str [0];
            t = length - 2;
            while (t!=0) {
                arr[a] = t % 10;
                t /= 10;
                a++;
            }
            if (a==2) {
                res[1] = arr[1]+'0';
                res[2] = arr[0]+'0';
                res[3] = str[--length];
                res[4] = '\0';
            }
            else{
                res[1] = arr[0]+'0';
                res[2] = str[--length];
                res[3] = '\0';
            }
            std:: cout << res << std:: endl;
        }
        else {
            std:: cout << str << std:: endl;
        }
    }
    return 0;
}
