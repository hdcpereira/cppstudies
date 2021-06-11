#include <iostream>
#include <vector>

extern std::vector<char> chutes_errados;

void imprime_erros(){
        std::cout << "chutes_errados:" << std::endl;
    for (char letra: chutes_errados){
        std::cout << letra << ' ';
    }
    std::cout << std::endl;
    std::cout << "chutes_errados:" << std::endl;
}