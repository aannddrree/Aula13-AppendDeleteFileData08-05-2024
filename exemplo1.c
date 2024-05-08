#include <stdio.h>

void adicionarDados(const char *nomeArquivo, const char *novosDados) {
    // Abrir o arquivo para adicionar dados (modo "a" - append)
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "a");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    
    // Adicionar os novos dados ao final do arquivo
    fprintf(arquivo, "%s\n", novosDados);
    
    // Fechar o arquivo
    fclose(arquivo);
    
    printf("Novos dados foram adicionados ao arquivo.\n");
}

int main() {
    // Chamar a função para adicionar os novos dados ao arquivo "dados.txt"
    adicionarDados("dados.txt", "Nova linha de dados.");
    
    return 0;
}