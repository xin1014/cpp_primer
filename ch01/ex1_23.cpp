#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item curr_item, next_item;
	if(std::cin >> curr_item){
		int cnt = 1;
		while(std::cin >> next_item){
			if(curr_item.isbn() == next_item.isbn()){
				cnt += 1;
			}
			else{
				std::cout << curr_item << " occurs " << cnt << " times." << std::endl;
				curr_item = next_item;
				cnt = 1;
			}
		}
		std::cout << curr_item << " occurs " << cnt << " times." << std::endl;
	}
	return 0;
}


