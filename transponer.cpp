#include "transponer.h"
#include <iostream>
// BUGGY CODE!
void transponerMatriz(const int (&matrizEntrada)[2][3], int (&matrizSalida)[3][2]) {
    for (int i = 0; i < 3; ++i) { // ¿Son correctos estos límites?
        for (int j = 0; j < 3; ++j) {
            matrizSalida[i][j] = matrizEntrada[j][i]; // ¿Están bien los índices?
        }
    }
}
void imprimirMatrizTranspuesta(const int (&mat)[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << mat[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
