#include <iostream>
int main(void) {
	long long int n, a; std::cin >> n;
	while (n--) {
		std::cin >> a;
		while(a%2==0) {
			a/=2;
		}
		if(a%2==1 && a>1) std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}
	return 0;
}
