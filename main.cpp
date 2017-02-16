#include <iostream>

#include "thRandom.h"

int main(){
	randomize();
	for (int i = 0; i < 8; ++i)
	{
		int t = generateRandomNumber(10,99);
		std::cout << t <<";";
	}
	std::cout<<std::endl;

	randomize();
	for (int i = 0; i < 8; ++i)
	{

		double d = generateRandomReal(10.0,99.0);
		std::cout << d <<";";
	}
	std::cout<<std::endl;

}