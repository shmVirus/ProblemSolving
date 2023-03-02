#include <iostream>
int main(void) {
	int n, x, y; std::cin >> n >> x;
	int a=1, s=1;
	while(--n) {
		std::cin >> y;
		y>=x? (a++, (a>s? s=a : 0)) : a=1;
		x=y;
	}
	std::cout << s << std::endl;
	return 0;
}
