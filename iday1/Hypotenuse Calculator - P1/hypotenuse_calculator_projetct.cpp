#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int y;
    
    cout<<"Enter num1: ";
    cin >> x;
    cout<<"Enter num2: ";
    cin >> y;
    int a = pow(x,2);
    int b = pow(y,2);

    int hy = sqrt(a+b);
    cout << "hypotenuse is "<< hy; 
    
}