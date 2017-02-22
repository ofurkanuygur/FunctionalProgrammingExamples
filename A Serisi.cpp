// A serisi 2 ve 3'le başlar ve kendinden önceki iki sayının çarpımı olarak devam eder..
#include<iostream>

using namespace std;

int a_serisi(int n) {


	if (n<0)
	{
		return -1;
	}
	if (n==0)
	{
		return 2;
	}
	if (n==1)
	{
		return 3;
	}
	return a_serisi(n - 1)*a_serisi(n - 2);
}

int main() {

	int n;

	cout << "A serisi icin bir sayi giriniz : " << endl;
	cin >> n;
	cout << "Sayinin a serisi degeri : " << a_serisi(n) << endl;
	
	system("pause");
	return 0;
}