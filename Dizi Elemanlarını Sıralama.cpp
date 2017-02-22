// Kullanıcının girdigi sayılardan ne kadar istiyorsa büyükten küçüge sıralamak..

#include<iostream>

using namespace std;

#define MAX 10000

void kaydir(int indis, int *maxlar, int n) {

	for (int k = n-1;k > indis; k--)
	{
		maxlar[k] = maxlar[k - 1];
	}
}

int main() {

	int n, k, sayilar[MAX], maxlar[MAX] = {0};
	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		cin >> sayilar[i];
	}
	for (int i = 0; i < k; i++){
		for (int j = 0; j < k; j++)
		{
			//sayilar dizisini elemaları maxlar dizisinin elamnlarıdan büyükse yer değiştir..
			if (sayilar[i]>=maxlar[j])
			{
				kaydir(j, maxlar, n);
				maxlar[j] = sayilar[i];
				break;
			}
		}
	}
	//Display..
	for (int i = 0; i < n; i++)
	{
		cout << maxlar[i] << " "<<endl;
	}


	system("pause");
	return 0;	
}