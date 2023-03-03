#include <iostream>
int main(void) {
	int t; std::cin >> t; char c;
	while(t--) {
		std::cin >> c;
		std::cout << (c=='c' || c=='o' || c== 'd' || c=='e' || c=='f' || c=='r' || c=='s'? "YES\n" : "NO\n");
	}
	return 0;
}
