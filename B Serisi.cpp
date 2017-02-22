//B serileri 0 ve 1'le başlar kendinden önce iki B serisi çift sayısı toplamına eşit olur tek ve eksi sayıların degeri -1 olur ..
#include <iostream>

using namespace std;

int b_serisi(int n) {
	if (n<0 || n%2==1)
	{
		return -1;
	}
	if (n==0)
	{
		return 0;
	}
	if (n==2)
	{
		return 1;
	}
	return b_serisi(n - 2) + b_serisi(n - 4);

}

int main() {
	int n;

	cout << "B serisi icin sayi giriniz : " << endl;
	cin >> n;
	cout << "SAyinin B serisi degeri : " << b_serisi(n) << endl;

	system("pause");
	return 0;

}