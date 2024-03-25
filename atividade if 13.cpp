#include <stdio.h>

int main() {
    float n1, n2, n3, m;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    

    m = (n1 + n2 + (n3 * 2)) / 4;
    
    if (m >= 60) {
        printf("aprovado!\n");
    } else {
        printf("reprovado.\n");
    }
    
    return 0;
}

