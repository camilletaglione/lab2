#include <iostream>
using namespace std;
void PascalTriangle(int size){
    int arr[size][size];

    for (int l = 0; line < size; l++){
        for (int i = 0; i <= l; i++){
            if (l == i || i == 0)
                arr[l][i] = 1;
            else
                arr[l][i] = arr[l - 1][i - 1] +
                arr[l - 1][i];
            cout << arr[l][i] << " ";}
        cout << "\n";}
}
int main(){
    int size;
    cout << "enter pascal triangle size";
    cin >> size;
    PascalTriangle(size);
    return 0;}