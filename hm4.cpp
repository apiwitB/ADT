#include <iostream>
using namespace std;
int main()
{
	int i, j, k;
	int found = 0;
	char a[4][4] = 
	{
		{'T','H','I','S'},
		{'W','A','T','S'},
		{'O','A','H','G'},
		{'F','G','D','T'} 
	};

	string db[12] = { "IS","THIS","HIS","AT","HI","IT","TWO","OF","FAT","THAT","HAT" };
	string temp = "";


	for (int p = 0; p < 4; p++) 
	{
		for (i = 0; i < 4; i++)
		{
			for (j = i; j < 4; j++)
			{
				for (k = i; k <= j; k++)
				{
					temp = temp + a[p][k];
				}
				cout << temp << endl;

				for (int e = 0; e < 10; e++)
				{
					if (temp == db[e]) 
					{
						found++;
						cout << "*** Found "<< found << " ***\n";
					}
						


				}


				temp.clear();




			}
			cout << endl;
		}
	}

	cout << "Total = "<< found ;
}