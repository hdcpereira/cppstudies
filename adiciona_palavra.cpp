#include <vector>
#include <iostream>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"


void adiciona_palavra(){
    std::cout << "digite a nova palavra, usando letras maisculas" << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = le_arquivo();

    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}