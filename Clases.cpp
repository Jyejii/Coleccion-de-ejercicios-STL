#include <iostream>
namespace Geometria{
    class Circulo{
    private:
        double radio;
    public:
        Circulo(double r):radio(r){}
        double CalcularArea(){
            return 3.14*radio*radio;
        }
        double CalcularPerimetro(){
            return 2 * 3.14 * radio;
        }
    };
}
int main() {
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.CalcularArea() << std::endl;
    std::cout << "Perimetro: " << c.CalcularArea() << std::endl;
    return 0;
}