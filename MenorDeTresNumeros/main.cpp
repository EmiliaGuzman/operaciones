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
    std::cout << "El resultado de la suma es " << x+y << std::endl;
    
    std::cout << " Resta de dos numeros\n";
    std::cout << " Ingrese un numero: ";
    std::cin >> x;
    std::cout << " Ingrese un numero: ";
    std::cin >> y;
    std::cout << "El resultado de la resta es " << x-y << std::endl;
    
    std::cout << " Multiplicacion de dos numeros\n";
    std::cout << " Ingrese un numero: ";
    std::cin >> x;
    std::cout << " Ingrese un numero: ";
    std::cin >> y;
    std::cout << "El resultado de la multiplicacion es " << x*y << std::endl;
    
    
    return 0;
}
