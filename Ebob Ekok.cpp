// ekok bulurken iki yol var 1.ikisayını çarpımının ebob a bölümü 2. iki sayıyı sa bölenlerine bulunur birbiriyle çarpılır .

#include <iostream>

using namespace std;


void ebobHesapla(int a, int b, int *pEbob) {
	*pEbob = 1;
	int ortakbolen = 2;
	while (a!=1 && b!=1)
	{
		while (a % ortakbolen == 0 && b % ortakbolen == 0) 
		{
			*pEbob *= ortakbolen;
			a /= ortakbolen;
			b /= ortakbolen;
		}
		while (a % ortakbolen==0)
		{
			a /= ortakbolen;
		}
		while (b % ortakbolen==0)
		{
			b /= ortakbolen;
		}
		++ortakbolen;
	}

}
void ekokHesapla(int a, int b, int*pEkok) {
	int ebob;
	ebobHesapla(a, b, &ebob);
	*pEkok = a*b / ebob;

}

void hesapla(int a, int b, int *pEbob, int *pEkok) {

	ebobHesapla(a, b, pEbob);
	ekokHesapla(a, b, pEkok);

}

int main() {

	int a, b, ebob, ekok;
	cin >> a >> b;

	hesapla(a, b, &ebob, &ekok);
	cout << "Sayilarin ebobu : " << ebob << endl;
	cout << "Sayilarin ekoku : " << ekok << endl;

	system("pause");
	return 0;
}

	
