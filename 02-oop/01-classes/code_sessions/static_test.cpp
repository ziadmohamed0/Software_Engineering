#include <iostream>

double func(double temp) {

	static double tem = 0;
	if(tem < temp) {
		tem = temp;
	} 
	return tem;
}

int main(){
	while(true) {
		double var{0.0};
		std::cin >> var;
		double ret =  func(var);
		std::cout << "value: " << ret << std::endl;
	}
	return 0;
}
