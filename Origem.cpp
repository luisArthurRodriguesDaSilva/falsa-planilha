#include<iostream>
using namespace std;

int altura, largura, j, i,k,a,b;

int main() {
	while (1) {

		cout << "largura:"; cin >> largura;
		cout << "altura:"; cin >> altura;

		

		for (i = 1; i <= altura; i++)
		{
			for (j = 1; j <= largura; j++)
			{
				if ((i * j) < 100 and (i * j) >10)
				{
					cout << "|0" << i * j;
				}
				else {
					(i * j < 10) ? cout << "|00" << i * j : cout <<"|"<< i * j;
				}
				

			}

			cout << "|" << endl;

			for (k = 0; k <= largura; k++)
			{

				cout << "----";

			}
			cout << endl;

		}

	}
}