#include<iostream>
#include<iomanip>
#include<string.h>
#include<cmath>
using namespace std;
// @Main Data Function
void Menu_Num(){
    cout << endl << "=================| MENU |================" << endl;
    cout << "1. Input " << endl;
    cout << "2. Output " << endl;
    cout << "3. Search " << endl;
    cout << "4. Update " << endl;
    cout << "5. Insert " << endl;
    cout << "6. Delete " << endl;
    cout << "7. Sort " << endl;
    cout << "8. Add " << endl;
    cout << "9. Exit " << endl;
    cout << "Please Select One Option : ";
}
// @Main Data Function
void Menu_Char(){
    cout << endl << "=================| MENU |================" << endl;
    cout << "A. Contructor " << endl;
    cout << "B. Input " << endl;
    cout << "C. Output " << endl;
    cout << "D. Search " << endl;
    cout << "E. Update " << endl;
    cout << "F. Insert " << endl;
    cout << "G. Delete " << endl;
    cout << "H. Sort " << endl;
    cout << "I. Add " << endl;
    cout << "J. Exit " << endl;
    cout << "Please Select One Option : ";
}
// @Main Data Function Array
void Menu_Arr(string param[],int n){
    cout << endl << "=================| MENU |================" << endl;
    for(int i = 0; i < n; i++){
        cout << param[i] << endl;
    }
    cout << "Please Select One Option : ";
}