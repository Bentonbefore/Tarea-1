#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

	int x[9];
	cout << "ingresa 5 numeros. \n";
	
	for (int y = 0; y <= 4; y++)
	{
		cin >> x[y];
	}
	
	for (int y = 0; y <= 4; y++)
	{
		cout << x[y];
		cout << "\n";
	}


	for (int y = 4; y >= 0; y--)
	{
		cout << "El reverso de esos numeros es: \n" << x[y] << "\n";
	}


	system("PAUSE");
	return 0;
}
