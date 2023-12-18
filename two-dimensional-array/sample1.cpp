#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
 setlocale(LC_ALL, "rus");
 
 const int RowCount = 9;
 const int ColumnCount = 9;
 
 int ourMatrix[RowCount][ColumnCount] = {};
 
 for (int rowNum = 1; rowNum <= RowCount; rowNum++)
 {
 for (int columnNum = 1; columnNum <= ColumnCount; columnNum++)
 {
 ourMatrix[rowNum - 1][columnNum - 1] = rowNum * columnNum;
 cout << setw(4) << ourMatrix[rowNum - 1][columnNum - 1];
 }
 cout << endl;
 } 
 return 0;
}
