#include <iostream>

int main()
{
    std:: cout << "Enter two real values: ";
    double val1 {0};
    double val2 {0};
    std::cin >> val1 >> val2;
    if (val1 < val2)
       std::cout << "The smaller is " << val1 << " and the larger is " << val2 << ".\n";
    else
    std::cout << "The smaller is " << val2 << " and the larger is " << val1 << ".\n";
    std::cout << val1 << " + " << val2 << " = " << val1+val2 << '\n';
    std::cout << val1 << " - " << val2 << " = " << val1-val2 << '\n';
    std::cout << val1 << " * " << val2 << " = " << val1*val2 << '\n';
    std::cout << val1 << " / " << val2 << " = " << val1/val2 << '\n';
}
    
