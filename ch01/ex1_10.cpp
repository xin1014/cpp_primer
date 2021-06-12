#include <iostream>

int main()
{
	int sum = 0;
	int i = 10;
	while(i >= 0){
		sum += i;
		i--;
	}
	std::cout << sum << std::endl;
}
