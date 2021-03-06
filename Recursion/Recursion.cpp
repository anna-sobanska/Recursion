#include <iostream>
using namespace std;

int recursiveSum(int m, int n) {
	if (m == n)
		return m;
	return m + recursiveSum(m + 1, n);
}

int recursivePower(int basic, int index) {
	if (index == 1)
		return basic;
	return basic * recursivePower(basic, index - 1);
}

int recursiveFactorial(int number) {
	if (number < 2)
		return 1;
	return number * recursiveFactorial(number - 1);
}



int main() {

	int sum=0;
	int m=1, n=4;

	cout <<"Sum = " <<recursiveSum(m,n) << endl;
	cout <<"Power = " << recursivePower(m, n) << endl;
	cout << "Factorial = " << recursiveFactorial(n) << endl;

	system("pause>0");
}