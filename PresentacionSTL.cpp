#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    std::cout << "vector numeros despues de el valor 6:\n";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    std::cout<<"valores del conjunto al eliminiar 1:"<<std::endl;
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout<<std::endl;

    return 0;
}