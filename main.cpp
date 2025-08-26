#include "transponer.h"

int main() {
    int original[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpuesta[3][2];

    transponerMatriz(original, transpuesta);
    imprimirMatrizTranspuesta(transpuesta);

    return 0;
}
