#include <iostream>
int main(void){
	int t; std::cin >> t;
	while(t--){
		int a, b, n;
		std::cin >> a >> b >> n;
		int s=0;
		while (a<=n && b<=n) {
			a+2*b>2*a+b? a+=b : b+=a;
			s++;
		}
		std::cout << s << std::endl;
	}
	return 0;
}
