#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "nao_acertou.hpp"
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "chuta.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "salva_arquivo.hpp"
#include "imprime_palavra.hpp"
#include "adiciona_palavra.hpp"

using namespace std;

string palavra_secreta;
map<char,bool> chutou;
vector<char> chutes_errados;

int main(){

     imprime_cabecalho();

     palavra_secreta = sorteia_palavra();

    while (nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {

        imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta, chutou);

        chuta(chutes_errados, chutou, palavra_secreta);
 
    if(nao_acertou(palavra_secreta, chutou)){
        cout << "Você perdeu. Tente novamente." << endl;

    }
    else{

        cout << "Você ganhou! Parabéns." << endl;
        cout << "Gostaria de adicionar nova palavra ao banco? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }

    }
}
}