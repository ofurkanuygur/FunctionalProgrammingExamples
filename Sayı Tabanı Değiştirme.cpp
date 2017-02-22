
#include<iostream>

using namespace std;

void onluk_tabana_donustur(int verilen_taban, int sayi, int *sonuc) {
	int kalan, bolum, carpim = 1;
	*sonuc = 0;
	while (sayi!=0)
	{
		kalan = sayi % 10;
		*sonuc += kalan*carpim;
		bolum = sayi / 10;
		sayi = bolum;
		carpim *= verilen_taban;
	}
}

void onluk_tabandan_donustur(int İstenilen_taban, int sayi, int*sonuc) {
	int kalan, bolum, carpim = 1;
	*sonuc = 0;
	while (sayi!=0)
	{
		kalan = sayi%İstenilen_taban;
		*sonuc += carpim*kalan;
		bolum = sayi / İstenilen_taban;
		sayi = bolum;
		carpim *= 10;
	}
}

void taban_degistir(int sayi_tabani, int sayi, int istenilen_taban, int*sonuc) {

	int onluk;
	onluk_tabana_donustur(sayi_tabani, sayi, &onluk);
	onluk_tabandan_donustur(istenilen_taban, onluk, sonuc);
}

int main() {


	int sayi_tabani, sayi, istenilen_taban, sonuc;
	cin >> sayi_tabani >> sayi >> istenilen_taban;
	taban_degistir(sayi_tabani, sayi, istenilen_taban, &sonuc);
	cout << sonuc ;

	system("pause");
	return 0;
}
