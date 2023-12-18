#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MatrixSize = 3;

	int ourMatrix[MatrixSize][MatrixSize] = {};
	int rowSum[MatrixSize] = {}; 
	int columnSum[MatrixSize] = {}; 

	cout << "Feel Matrix" << MatrixSize << 'х' << MatrixSize << "by numbers\n";
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << rowNum + 1 << "row";
			cout << columnNum + 1 << "col";
			cin >> ourMatrix[rowNum][columnNum];
		}
		cout << endl;
	}

	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
			rowSum[rowNum] += ourMatrix[rowNum][columnNum]; 
			columnSum[rowNum] += ourMatrix[columnNum][rowNum];
		}
		cout << "|" << endl;
	}

	cout << "\nrow summ!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-я строка: " << rowSum[i] << endl;
	}

	cout << "\ncol summ!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-col: " << columnSum[i] << endl;
	}
	return 0;
}
