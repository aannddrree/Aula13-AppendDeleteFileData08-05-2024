#include <stdio.h>

void excluirArquivo(const char *nomeArquivo) {
    // Tentar excluir o arquivo
    if (remove(nomeArquivo) == 0) {
        printf("O arquivo '%s' foi excluído com sucesso.\n", nomeArquivo);
    } else {
        printf("Erro ao excluir o arquivo '%s'.\n", nomeArquivo);
    }
}

int main() {
    // Chamar a função para excluir o arquivo "dados.txt"
    excluirArquivo("dados.txt");
    
    return 0;
}
