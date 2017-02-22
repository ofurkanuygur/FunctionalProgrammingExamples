#include <iostream>

using namespace std;


int fibonacci(int n);

int main() {

	int n;
	cout << "Fibonacci icin sayi giriniz : "<<endl;
	cin >> n;
	cout << "Sayinin fibonaccisi : " << fibonacci(n)<<endl;

	system("pause");
	return 0;
}
	int fibonacci(int n) {

		if (n<0)
		{
			return -1;
		}
		if (n==0)
		{
			return 0;
		}
		if (n==1)
		{
			return 1;
		}
		return fibonacci(n - 1) + fibonacci(n - 2);
}



