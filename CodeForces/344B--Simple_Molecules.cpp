#include <iostream>
int main(void){
    int a, b, c;
    std:: cin >> a >> b >> c;

    if ((a+b-c)<0  || (b+c-a)<0 || (c+a-b)<0)  {
        std:: cout << "Impossible" << std:: endl;
    } else if( (a+b+c)%2 == 1 ) {
        std:: cout << "Impossible" << std:: endl;
    } else {
        std:: cout << (a+b-c)/2 << " " << (b+c-a)/2 << " " << (c+a-b)/2 << std:: endl;
    }
    return 0;
}
