
#include<iostream>

using namespace std;

int main() {

	char paragraf[10000];
	char aranan[100];
	cin.getline(paragraf, 10000);//kullanıcıdan sayı girmesini istedim..
	cin >> aranan;

	int paragraf_uzunuluk, aranan_uzunluk;
    
    //for ile uzunluk hesaplicaz..

	for (paragraf_uzunuluk = 0; paragraf[paragraf_uzunuluk]  != '\0'; paragraf_uzunuluk++);

	for (aranan_uzunluk = 0; aranan[aranan_uzunluk] != '\0'; aranan_uzunluk++);

	for (int i = 0; i <= (paragraf_uzunuluk-aranan_uzunluk); i++)
	{
		bool bulundu = true;
		for (int j = 0; j < aranan_uzunluk; j++)
		{
			char a = paragraf[i + j];//Hepsini büyük harf e çevirdik ..
			if (a<=90)
			{
				a += 32;
			}
			char b = aranan[j];
			if (b<=90)
			{
				b += 32;
			}
			if (a!=b)
			{
				bulundu = false;
				break;
			}
		}
		//hangi indis de bulunuğunu yazdırıcaz..

		if (bulundu)
		{
			cout << i;
			system("pause");
			return 0;
		}

	}

	cout << -1;

	system("pause");
	return 0;
}
