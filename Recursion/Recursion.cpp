#include <iostream>
using namespace std;

int recursiveSum(int m, int n) {
	if (m == n)
		return m;
	return m + recursiveSum(m + 1, n);
}

int main() {

	int sum=0;
	int m=2, n=4;

	cout <<"Sum = " <<recursiveSum(m,n) << endl;

	system("pause>0");
}