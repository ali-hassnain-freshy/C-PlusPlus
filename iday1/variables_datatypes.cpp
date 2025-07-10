#include <iostream>

int main(){
    std::cout << "Hello, World!" << "\n";
    std::cout << "i Like, Pizzas!";
    
    //variables and datatypes

    int a = 1;
    int b  = 2;
    //sum of a and bv
    int sum = a + b;
    std::cout<< sum << "\n";
    
    double c = 12.1;
    double d = 32.1;
    std::cout << c << "\n" << d << "\n";

    bool is_power_connected_of_room1 = true;
    bool is_power_connected_of_room2 = false;


    std::string name = "Ali";
    std::string school_name = "PPS";
    std::string surname = "Maher";
    std::cout<< "name " << name << " studies in " <<school_name<<" father name "<<surname;
    return 0;

}