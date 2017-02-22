// ARDIŞIK SAYI TABLOSU OLUŞTURMAK..UZUN OLUCAK
#include<iostream>

using namespace std;

#define MAX 101

int main() {

	int tablo[MAX][MAX];//2 bouytlu dizi tanımlaması

	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
	for (int j = 0; j < n; j++)
		{
			cin >> tablo[i][j];
		}
	}

	int max_ardisik = 0, yeni_max_ardisik, k,l, x;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			
			x = tablo[i][j];
			k = j;
			yeni_max_ardisik = 0;
			while (tablo[i][k]==x && k<n)
			{
				++x;++k;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//azalan satırlar için yukardaki artan içindi..
			x = tablo[i][j];
			k = j;
			yeni_max_ardisik = 0;
			while (tablo[i][k]==x && k<n)
			{
				--x;++k;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sutünlar için artan ve azalan ..
			x = tablo[i][j];
			k = i;
			yeni_max_ardisik = 0;
			while (tablo[k][j]==x && k<n)
			{
				++x;++k;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sutün azaltan..
			x = tablo[i][j];
			k = i;
			yeni_max_ardisik = 0;
			while (tablo[k][j]==x && k<n)
			{
				--x;++k;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sag alt artan..
			x = tablo[i][j];
			k = i;
			l = j;
			yeni_max_ardisik = 0;
			while (tablo[k][l] == x && k<n && l<n)
			{
				++x;++k;++l;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sağ alt azalan..
			x = tablo[i][j];
			k = i;
			l = j;
			yeni_max_ardisik = 0;
			while (tablo[k][l] == x && k<n && l<n)
			{
				--x;++k;++l;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sağ üst artan..
			x = tablo[i][j];
			k = i;
			l = j;
			yeni_max_ardisik = 0;
			while (tablo[k][l] == x && k<n && l>=0)
			{
				++x;++k;--l;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
			//sag üst azalan..
			x = tablo[i][j];
			k = i;
			l = j;
			yeni_max_ardisik = 0;
			while (tablo[k][l] == x && k<n && l >= 0)
			{
				--x;++k;--l;++yeni_max_ardisik;
			}
			if (yeni_max_ardisik >max_ardisik)
			{
				max_ardisik = yeni_max_ardisik;
			}
		}
	}

	cout << max_ardisik;

	system("pasue");
	return 0;
}
