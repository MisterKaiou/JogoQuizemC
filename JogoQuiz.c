#include <stdio.h>
#include <locale.h>

void generateQuestions(FILE **questions)
{
    
}

int main()
{
    int dificulty;
    FILE *questions;

    setlocale(LC_ALL, "Portuguese");

    printf("Bem vindo ao Quiz de conhecimento geral!\n");
    printf("Todas as perguntas abrangem vários assuntos diversos, acerto o máximo que puder!!\n");
    printf("Em qual dificuldade gostaria de jogar?\n\n");
    printf("Fácil (1);\n");
    printf("Mediano (2);\n");
    printf("Difícil (3);\n");
    printf("Sair (4)\n\n");
    printf("Escolha: ");
    sscanf("%d", &dificulty);
    

    switch (dificulty)
    {
    case 1:
        
        break;
    
    default:
        break;
    }

    printf("Escolha a dificuldade: ");

    generateQuestions(&questions);



}