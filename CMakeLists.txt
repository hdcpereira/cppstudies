cmake_minimum_required(VERSION 3.13)
project(Forca)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(PROJECT_HEADERS
        adiciona_palavra.hpp
        chuta.hpp
        imprime_cabecalho.hpp
        imprime_erros.hpp
        imprime_palavra.hpp
        le_arquivo.hpp
        letra_existe.hpp
        nao_acertou.hpp
        salva_arquivo.hpp
        sorteia_palavra.hpp
        )

set(PROJECT_SOURCES
        adiciona_palavra.cpp
        chuta.cpp
        imprime_erros.cpp
        imprime_palavra.cpp
        le_arquivo.cpp
        letra_existe.cpp
        sorteia_palavra.cpp
        nao_acertou.cpp
        salva_arquivo.cpp
        forca.cpp
        )

add_executable(forca ${PROJECT_SOURCES} ${PROJECT_HEADERS})
