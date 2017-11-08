#include <iostream>
#include <vector>
using namespace std;

class FibCalculator {
	public:
		FibCalculator();
		~FibCalculator();
		long calcFibRecursive(int n);
		long calcFibDynamic(int n);	
		long calcFibTable(int n);
	
	private:
		vector<int> fibs;
};

FibCalculator::FibCalculator(){
	fibs.push_back(0);	//Fibonacci[0]
	fibs.push_back(1);	//Fibonacci[1]
	fibs.push_back(1);	//Fibonacci[2]
	
}

FibCalculator::~FibCalculator(){}

long FibCalculator::calcFibRecursive(int n){
// O(2^n)		
		if(n == 0) return 0;
		if(n == 1) return 1;
		if(n == 2) return 1;
		return calcFibRecursive(n-1) + calcFibRecursive(n-2);	
}

long FibCalculator::calcFibDynamic(int n) {
// adapted from Liang's Java version
// O(n)
	long f0 = 0;
	long f1 = 1;
	long f2 = 1;
	
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(n == 2) return 1;
	
	
	for(int i = 3; i <= n; i++){
		f0 = f1;
		f1 = f2;
		f2 = f0+f1;	
	}
	
	return f2;
}

long FibCalculator::calcFibTable(int n) {	
// also O(n)

	// start at last value that is already in the table and build up to Fibonacci[n] 
	for(int counter = fibs.size(); counter <= n; counter++)
		fibs.push_back(fibs[counter - 1] + fibs[counter - 2]);
	return fibs[n];
}

int main(int argc, char *argv[]){
	FibCalculator *f = new FibCalculator();
	int start = stoi(argv[1]);
	int n = stoi(argv[2]);
	
	for(int counter = start; counter <= n; counter++){
		cout << "calculating recursively, Fibonacci number " << counter <<  " is " << endl;
		cout << f->calcFibRecursive(counter) << endl;
		cout << "calculating iteratively, Fibonacci number " << counter << " is " << endl;
		cout << f->calcFibDynamic(counter) << endl;
		cout << "calculating with table lookup, Fibonacci number " << counter << " is " << endl;
		cout << f->calcFibTable(counter) << endl;
	}
	return 0;
}
