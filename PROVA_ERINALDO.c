//11) Uma empresa mantém um registro do número de dias de férias disponíveis para cada funcionário. 
//Ao longo do ano, esses funcionários podem tirar férias em blocos. 
//A empresa deseja manter um controle atualizado de quantos dias ainda restam para cada funcionário. 
//Crie uma função que, dado um vetor com os dias de férias restantes e um vetor com os dias de férias tirados, 
//atualize o número de dias restantes para cada funcionário.

#include <stdio.h>

void atualizarFerias(int feriasRestantes[], int feriasTiradas[], int numFuncionarios) {
    for (int i = 0; i < numFuncionarios; i++) {
        feriasRestantes[i] -= feriasTiradas[i];
    }
}

int main() {
    int numFuncionarios;
    
    printf("Escreva o numero de funcionarios: ");
    scanf("%d", &numFuncionarios);
    
    int feriasRestantes[numFuncionarios];
    int feriasTiradas[numFuncionarios];
     
    printf("Digite o numero de ferias restantes para cada funcionario:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Funcionario %d: ", i + 1);
        scanf("%d", &feriasRestantes[i]);
    }
     
    printf("Digite o numero de ferias tiradas para cada funcionario:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Funcionario %d: ", i + 1);
        scanf("%d", &feriasTiradas[i]);
    }
    
    int feriasFicaram[numFuncionarios];
    for (int i = 0; i < numFuncionarios; i++) {
        feriasFicaram[i] = feriasRestantes[i] + feriasTiradas[i];
    }

    atualizarFerias(feriasRestantes, feriasTiradas, numFuncionarios);
    
    printf("\nDias de ferias restantes e quantos dias cada funcionario ficou:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Funcionario %d: %d dias restantes, %d dias no total\n", 
               i + 1, feriasRestantes[i], feriasFicaram[i]);
    }

    return 0;
}

    

    
