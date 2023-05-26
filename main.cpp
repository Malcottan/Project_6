#include <iostream>
using namespace std;


int main(){
    int size = 10, temp = 0;
    int c[size] {0};
    bool flag = true;

    for (int i = 0; i < size; i++){
        cout << "Enter = ";
        cin >> c[i];
    }
    while (flag){
        for (int j = 0; j < size; j+=2){
            if (c[j] > c[j+1]){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
        for (int j = 1; j < size - 1; j+=2){
            if (c[j] > c[j+1]){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
        for (int j = 0; j <= size; j++){
            if (j == 10){
                flag = false;
            }
            if (c[j] > c[j+1]){
                break;
            }
        }
        if (flag == false){
            break;
        }
    }
    for (int i = 0; i < size; i++){
        if (i < 9){
            cout << c[i] << " ";
        } else {
            cout << c[i] << endl;
        }
    }
    for (int i = 0; i < size - 5; i++){
        temp = c[i];
        c[i] = c[size - 1 - i];
        c[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++){
        if (i < 9){
            cout << c[i] << " ";
        } else {
            cout << c[i] << endl;
        }
    }
    return 0;
}