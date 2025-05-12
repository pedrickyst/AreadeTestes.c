#include <stdio.h>

int main() {

    char nome1[10] = "Descarga";
    char nome2[10] = "Etiquetagem";
    char nome3[10] = "Conferencia";
    char nome4[10] = "Guarda";
    int usuario;
    float Descarga = 1.11;
    float Etiquetagem = 1.46;
    float Conferencia = 0.55;
    float Guarda = 2.50;

    printf("Digite o Número de PALETES: ");
    scanf("%d", &usuario);
    
    printf("%s = %d %f\n", nome1, usuario * Descarga) % 60;
    printf("%s = %d %f\n", nome2, usuario * Etiquetagem) % 60;
    printf("%s = %d %f\n", nome3, usuario * Conferencia) % 60;
    printf("%s = %d %f\n", nome4, usuario * Guarda) % 60;
    
    
    return 0;
}