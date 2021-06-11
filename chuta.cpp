#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"

void chuta(std::vector<char>& chutes_errados,std::map<char,bool>& chutou,std::string palavra_secreta){

        std::cout << "qual o seu chute?" << std::endl;
        char chute;
        std::cin >> chute;

    chutou[chute] = true;

        if(letra_existe(chute)){
            std::cout << "você acertou. seu chute está na palavra!" << std::endl;
        }
        else{
            chutes_errados.push_back(chute);
            std::cout << "você errou. seu chute não está na palavra." << std::endl;
        }
    
    std::cout << "FIM DE JOGO" << std::endl; 
    std::cout << "a palavra secreta era: " << palavra_secreta << std::endl;

}