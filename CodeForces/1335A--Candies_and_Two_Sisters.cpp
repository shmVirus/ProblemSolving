#include<iostream>
int main(void) {
	int t; std::cin >> t;
	while(t--){
		long long int n; std::cin >> n;
		int s = n>2? (n-1)/2 : 0;
		std::cout << s << std::endl;
	}
	return 0;
}
