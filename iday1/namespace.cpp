#include <iostream>
using namespace std;
namespace first{
    int x = 2;
}
namespace second{
    int x = 3;
}
int main(){
    int x = 1;
    cout<< x << "\n" << first::x << "\n" << second::x;

}