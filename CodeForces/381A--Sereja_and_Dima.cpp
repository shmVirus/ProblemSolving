#include <iostream>
int main (void) {
    int n; std::cin >> n;
    int a[n], s=0, d=0;
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    for (int i=0, j=n-1, x=0; x<n; x++) {
        x%2==0? (a[i]>a[j]? (s+=a[i],i++) : (s+=a[j],j--)) : (a[i]>a[j]? (d+=a[i],i++) : (d+=a[j],j--));
    }
    std::cout << s << " " << d << std::endl;
    return 0;
}
