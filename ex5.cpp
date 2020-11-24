#include <iostream>
using namespace std;
int* sortpointer(int array[], int size){
    int* max = array;
    for (int i = 0; i < size; i++){
        if (*max < array[i])
            *max = array[i];}
    return max;}
int main(){
    int size;
    cout << "Enter dataset size" << endl;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++){
        cout << "enter value" << i << endl;
        cin >> array[i];}
    int* max_value = sortpointer(array, size);
    cout << *max_value;
    return 0;}