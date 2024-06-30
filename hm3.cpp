#include <iostream>
using namespace std;
int main() 
{
	int temp;
	int score[10] = {10,20,30,40,50,60,70,80,90,100};
	for (int i = 0; i <= 9; i++)
	{
		cout << score[i] << " ";
	}cout << endl;

	for (int i = 0,j = 9; i <= j;i++,j--) {
		temp = score[i];
		score[i] = score[j];
		score[j] = temp;

	}

	for (int i = 0; i <= 9; i++)
	{
		cout << score[i] << " ";
	}cout << endl;

}