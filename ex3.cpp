#include <iostream>
using namespace std;
void sort_table(int* table){
	int max = table[0];
	int min = table[0];
	int n = 10, index = 0;
	int stable[10] = { 0 };
	int j = -1;
	while (n--){
		j++;
		for (int i = 0; i < 10; i++){
			if (table[i] > max){
				max = table[i];
				index = i;}
			if (j == 0){
				if (table[i] < min)
					min = table[i];}
		}
		table[index] = min;
		stable[k] = max;
		max = table[0];
		index = 0;}
	for (int i = 0; i < 10; i++)
		cout << stable[i] << " ";
}
int main(){
	int table[10] = { 14, -50, 7, 15, -8, 24, 5, -4, -82, 9 };
	sort_table(table);}
