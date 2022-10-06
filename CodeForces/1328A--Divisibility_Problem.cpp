    #include <iostream>
    int main() {
    	int t;
    	std::cin >> t;
    	while (t--) {
    		int a;
    		int b;
    		std:: cin >> a >> b;
    		if (a%b==0) {
    			std:: cout << a%b << std:: endl;
    		}
    		else {
    			if (a <= b) std:: cout << b - a << std:: endl;
    			else {
    				std:: cout << (b*((a/b)+1))-a << std:: endl;
    			}
    		}
    	}
    	return 0;
    }
