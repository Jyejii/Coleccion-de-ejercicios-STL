#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
int main() {
    std::cout << "Area del triangulo: " << geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << geometria::calcularAreaCirulo(5) << std::endl;
    return 0;
}

