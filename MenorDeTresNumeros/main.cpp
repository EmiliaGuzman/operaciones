#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    std::cout << " Suma de dos numeros\n";
    std::cout << " Ingrese un numero: ";
    std::cin >> x;
    std::cout << " Ingrese un numero: ";
    std::cin >> y;
    std::cout << "La suma es " << x+y << std::endl;
    
    std::cout << " Resta de dos numeros\n";
    std::cout << " Ingrese un numero: ";
    std::cin >> x;
    std::cout << " Ingrese un numero: ";
    std::cin >> y;
    std::cout << "La resta es " << x-y << std::endl;
    
    std::cout << " Division de dos numeros\n";
    std::cout << " Ingrese un numero: ";
    std::cin >> x;
    std::cout << " Ingrese un numero: ";
    std::cin >> y;
    std::cout << "La division es " << x/y << std::endl;
    
    
    return 0;
}
