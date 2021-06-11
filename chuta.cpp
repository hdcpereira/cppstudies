#include <iostream>
#include <map>
#include <vector>

#include "letra_existe.hpp"

extern std::vector<char> chutes_errados;
extern std::map<char,bool> chutou;
extern std::string palavra_secreta;


void chuta(){
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