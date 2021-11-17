#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(0, "Russian");

	int chek = 1;
	bool chekk;
	while (chek==1)
	{
		cout << "Введите 1 для запуска, 0 для завершения программы >";
		cin >> chek;
		switch (chek)
		{
		case(0):
			break;
		case(1):
			{
				int k, n;
				bool chekk = true;
				while (chekk == 1)
				{
					cout << "Введите k (0<k<5) и n (k<n). Введите два нуля для завершения" << endl << '>';
					cin >> k;
					cout << endl << '>';
					cin >> n;
					if (k == 0 and n == 0)
						break;
					if (k < 0)
					{
						cout << "k меньше порогового значения"<<endl;
						continue;
					}
					if (k >= 5)
					{
						cout << "k больше порогового значения" << endl;
						continue;
					}
					if (k >= n)
					{
						cout << "Нарушено условие задачи" << endl;
						continue;
					}

					int *mass1 = new int[n];
					int *mass2 = new int[n];
					for (int i = 0; i <= n - 1; i++)
					{
						mass1[i] = rand();
						cout << mass1[i]<<endl;
					}
					cout << "\n";
					for (int i = 0; i <= n - 1; i++)
					{
						int c = i + k;
						if (c > n-1)
							c -= n;
						mass2[c] = mass1[i];
					}
					for (int i = 0; i <= n-1; i++)
					{
						mass1[i] = mass2[i];
						cout << mass1[i] << endl;
					}
				}
			}
		default:
			{
				cout<< endl;
				chek = 1;
				continue;
			}
		}
	}

}

