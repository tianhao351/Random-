#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void randomize(){
	srand( (int)time(0) );
	cout <<time(0)<< endl;
}

int generateRandomNumber(int low, int heigh){
	double _d;
	if (low > heigh)
	{		
		cout<< "generateRandomNumber: make sure that low <= heigh./n ";
		exit( 1 );
	}
	_d = (double)random()/((double)RAND_MAX + 1.0);
	return low + (int)(heigh - low + 1)*_d;
};

double generateRandomReal(double low, double heigh){
	double _d;
	if (low > heigh)
	{		
		cout<< "generateRandomReal: make sure that low <= heigh./n ";
		exit( 2 );
	}
	_d = (double)random()/(double)RAND_MAX ;
	return low + (heigh - low )*_d ;
};