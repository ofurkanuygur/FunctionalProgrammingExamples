// n tane doğal sayının ortalamasını alan bir program ..
#include <iostream>
#include<iomanip>
using namespace std;

float ortalama_hesapla(int n) {

	int sayi;
	float toplam = 0;
	cout << "Sayilari giriniz : ";
	for (int i = 0; i < n; i++)
	{
		cin >> sayi;
		toplam += sayi;
	}
	return toplam;
}
int main() {

	int n;
	cout << "Kac sayi gireceksiniz : ";
	cin >> n;	

	cout << fixed << setprecision(2);
	cout << "Girilen sayilarin ortalaması : " << ortalama_hesapla(n) << endl;

	system("pause");
	return 0;
}