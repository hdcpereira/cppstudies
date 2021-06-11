#include "le_arquivo.hpp"
#include <vector>

extern std::string palavra_secreta;

std::string sorteia_palavra()
{
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();
    
    return palavras[indice_sorteado];
}
