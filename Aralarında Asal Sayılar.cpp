// Girilen iki sayını aralaronda asal oup olmadığını bulma..

#include<iostream>

using namespace std;

void aralarında_asal_mi(int sayi_1, int sayi_2, bool*sonuc) {

	int kucuk_sayi = sayi_1;
	if (sayi_2<kucuk_sayi)
	{
		kucuk_sayi = sayi_2;
	}
	*sonuc = 1;

	for (int i = 2; i <=kucuk_sayi; i++)//ortak bölen olup olmadığına bakıcam
	{
		if (sayi_1%i==0 && sayi_2%i==0) 
		{
			*sonuc = 0;
		}
	}
}

int main() {

	int a, b;
	bool cevap;
	cin >> a >> b;
	aralarında_asal_mi(a, b, &cevap);

	cout << (cevap ? "Aralarinda asal " : "Aralarında asal değil");

	system("pause");
	return 0;
}