#include<iostream>
int main(void){
	int n, t; std::cin >> n >> t;
	if (n==1 && t==10) std::cout << "-1\n";
	else if (n==1 && t!=10) std::cout << t << std::endl;
	else if (n>=2) {
		std::cout << t;
		t==10? n-- : 0;
		while(--n) std::cout << "0";
		std::cout << std::endl;
	}
	return 0;
}
