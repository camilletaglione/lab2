#include <iostream>
using namespace std;
int main(){
	int min, max, index, mmax;
	int array[10] = { 0 };
	int mod_array[10] = { 0 };

	cout << "Enter 10 values" << endl;
	int i;
	for (i = 0; i < 10; i++){
		cin >> array[i];
		for (int j = 0; j < i; j++){
			if (array[i] == array[j]){
				mod_array[j]++;
				break;}
		}
	}
	min = array[0];
	max = array[0];
	mmax = mod_array[0];
	index = 0;
	for (int i = 0; i < 10; i++){
		cout << mod_array[i];}

	for (int i = 0; i < 10; i++){
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		if (mod_array[i] > mmax){
			index = i;
			mmax = mod_array[i];}
	}
	if (mmax == 0){
		cout << "all values ??happen once each value to the same frequent" << endl;
		cout << "minimum value : " << min << "maximum value :" << max << endl;}
	else
		cout << "minimum value : " << min << "maximum value :" << max << "mod (most occured value)" << array[index] << endl;
}