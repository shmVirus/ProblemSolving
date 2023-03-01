#include<iostream>
int main(void){
	int n, m; std::cin >> n >> m;
	if (n>=m) std::cout << n-m << std::endl;
	else {
		int s=0;
		while (m-n) {
			if (m%2 || m<n) m++;
			else m /= 2;
			s++;
		}
		std::cout << s << std::endl;
	}
	return 0;
}
