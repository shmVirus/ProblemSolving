#include <iostream>
int main(void) {
	int t, a, b, c; std::cin >> t;
	while(t--) {
		std::cin >> a >> b >> c;
		std::cout << (a==b+c || b==c+a || c==a+b? "YES\n" : "NO\n");
	}
	return 0;
}
