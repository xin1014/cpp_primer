#include <iostream>

int main(){
	int sum, val;
	sum = 0;
	while( std::cin >> val)
		sum += val;
	std::cout << "Sum is " << sum << std::endl;
	
	return 0;
}	
