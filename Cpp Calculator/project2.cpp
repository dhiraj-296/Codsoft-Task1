#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cout << "Enter No. of times you want to run the program: "<< endl;
    cin >> t;
    
    while(t--){
    double num1, num2;
    string operation;

    cout << "Enter Number 1: " << endl;
    cin >> num1;

    cout << "Enter operation ( + , - , * , / ): " << endl;
    cin >> operation; 

    cout << "Enter Number 2: " << endl;
    cin >> num2;

    if (operation == "+"){
        cout << num1 + num2 << endl;

    } else if (operation == "-"){
        cout << num1 - num2 << endl;

    } else if(operation == "*"){
        cout << num1 * num2 << endl;

    } else if(operation == "/"){
        if(num2 != 0)
            cout << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!" << endl;

    } else {
        cout << "Not a recognized operation!" <<endl;
    }
    
}
    return 0;
}
