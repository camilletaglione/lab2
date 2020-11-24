#include <iostream>
using namespace std;
int* sort_table(int* table, int size){
	int* head = table;
	int* next = table + 1;
	int temp;
	for (int i = 0; i <= size; i++){
		for (int j = i + 1; j < size; j++){
			if (*table > * next){
				temp = *table;
				*table = *next;
				*next = temp;}
			table++;
			next++;}
		table = head;
		next = head + 1;}
	return table;}

int main(){
	int table[10] = { 14, -50, 7, 15, -8, 24, 5, -4, -82, 9 };
	int* sorted = sort_table(table, 10);
	for (int i = 0; i < 10; i++)
		cout << *sorted++ << " ";}