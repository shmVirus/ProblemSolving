#include <iostream>
int main(){
    int n, s=0, x=0;
    std:: cin >> n;
    for (int i=0; i<n; i++){
        std:: cin >> x;
        s += x;
    }
    printf("%.10lf\n", (double)s/n);
    return 0;
}