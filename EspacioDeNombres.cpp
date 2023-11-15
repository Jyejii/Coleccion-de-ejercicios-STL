#include <iostream>
namespace Matematicas{
    int suma(int a, int b){
        return a + b;
    }
    int resta(int a,int b){
        return a - b;

    }
}
int main() {
    std::cout<<"Suma:"<<Matematicas::suma(10,3)<<std::endl;
    std::cout<<"resta:"<<Matematicas::resta(9,5)<<std::endl;
    return 0;
}
