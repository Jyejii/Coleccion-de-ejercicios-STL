#include <iostream>

namespace ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    std::cout << "Energia: " <<ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}