#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
 
int main()
{
 setlocale(LC_ALL, "rus");
 
 const int MatrixSize = 7;
 
 int ourMatrix[MatrixSize][MatrixSize] = {};
 int rowSum[MatrixSize] = {};
 int numMaxRow = 0;
 
 srand(time(NULL));
 for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
 {
 cout << " | ";
 for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
 {
 ourMatrix[rowNum][columnNum] = 10 + rand() % 91;
 cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
 }
 cout << "|" << endl;
 }
 

 for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
 { 
 for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
 { 
 rowSum[rowNum] += ourMatrix[rowNum][columnNum];
 } 
 }
 
 cout << "\nSum by lines!\n";
 for (int i = 0; i < MatrixSize; i++)
 {
 cout << i + 1 << " row: " << rowSum[i] << endl;
 }
 
 for (int i = 1; i < MatrixSize; i++)
 {
 if (rowSum[i] > rowSum[numMaxRow])
 {
 numMaxRow = i;
 } 
 }
 
 cout << "The row whose sum of elements is maximum: " << numMaxRow + 1;
 cout << endl << endl;
 
 return 0;
}
