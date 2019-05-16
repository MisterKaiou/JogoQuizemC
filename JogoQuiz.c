#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

#define MAX_QTD_QUESTIONS 15
#define QTD_QUESTIONS 10

typedef struct
{
    char question[150];
    char answers1[50];
    char answers2[50];
    char answers3[50];
    char answers4[50];
    char answers5[50];
    char correctAnswer[1];
    char trivia[100];
} JogoQuiz;

void generateQuestions(FILE **ql)
{
    JogoQuiz jq[MAX_QTD_QUESTIONS];
    ql = fopen("questionslist.dat", "wb");

    if(ql == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        perror("Erro:");
    }

    strcpy(jq[0].question, "What is the name of the princess you have to save in the video game, -Zelda-?\0");
    strcpy(jq[0].answers1, "a) Link\0");
    strcpy(jq[0].answers2, "b) Zelda\0");
    strcpy(jq[0].answers3, "c) Navi\0");
    strcpy(jq[0].answers4, "d) Peach\0");
    strcpy(jq[0].answers5, "e) Daysy\0");
    strcpy(jq[0].correctAnswer, "b\0");
    strcpy(jq[0].trivia, "Zelda - Link is the name of the character that tries to save Zelda.\0");

    strcpy(jq[1].question, "What is the bestselling video game for the Nintendo 64 console?\0");
    strcpy(jq[1].answers1, "a) Mario Kart 64\0");
    strcpy(jq[1].answers2, "b) Super Mario 64\0");
    strcpy(jq[1].answers3, "c) Super Smash Bros\0");
    strcpy(jq[1].answers4, "d) Golden Eye\0");
    strcpy(jq[1].answers5, "e) Metal Gear\0");
    strcpy(jq[1].correctAnswer, "b\0");
    strcpy(jq[1].trivia, "Super Mario 64 - Super Mario has sold approximately 11.62 million copies.\0");

    strcpy(jq[2].question, "What is the name of the main character in the strategy video game, -Pikmin-?\0");
    strcpy(jq[2].answers1, "a) Hector\0");
    strcpy(jq[2].answers2, "b) Samus\0");
    strcpy(jq[2].answers3, "c) Olimar\0");
    strcpy(jq[2].answers4, "d) Albious\0");
    strcpy(jq[2].answers5, "e) Louie\0");
    strcpy(jq[2].correctAnswer, "c\0");
    strcpy(jq[2].trivia, "Olimar - Olimar is from the planet Hocotate.\0");

    strcpy(jq[3].question, "Developed by Capcom, what is the name of the main character in the video game series, -Devil May Cry-?\0");
    strcpy(jq[3].answers1, "a) Dante\0");
    strcpy(jq[3].answers2, "b) Snake\0");
    strcpy(jq[3].answers3, "c) Nero\0");
    strcpy(jq[3].answers4, "d) Mondus\0");
    strcpy(jq[3].answers5, "e) Vergil\0");
    strcpy(jq[3].correctAnswer, "a\0");
    strcpy(jq[3].trivia, "Dante - The series revolves around the death of his mother Eva.\0");

    strcpy(jq[4].question, "What is the name of the second installment of the -Elder Scrolls-?\0");
    strcpy(jq[4].answers1, "a) Bloodmoon\0");
    strcpy(jq[4].answers2, "b) Oblivion\0");
    strcpy(jq[4].answers3, "c) Morrowind\0");
    strcpy(jq[4].answers4, "d) Daggerfall\0");
    strcpy(jq[4].answers5, "e) Blades\0");
    strcpy(jq[4].correctAnswer, "d\0");
    strcpy(jq[4].trivia, "Daggerfall - The lastest Elder Scroll that was announced was titled Blades(2019).\0");

    fwrite(&jq, sizeof(JogoQuiz), 1, ql);

    fclose(ql);
}

int main()
{
    JogoQuiz jq[MAX_QTD_QUESTIONS];
    FILE *questionsList;

    setlocale(LC_ALL, "Portuguese");

    printf("Bem vindo ao Quiz de conhecimento geral!\n");
    printf("Todas as perguntas abrangem vários assuntos diversos, acerto o máximo que puder!!\n");
    printf("Precione qualquer tecla para continuar...");
    getch();    

    generateQuestions(&questionsList);

    questionsList = fopen("questionsList.dat", "rb");

    if (questionsList == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        perror("Erro:");
    }

    fread(&jq, sizeof(JogoQuiz), 1, questionsList);
    fclose(questionsList);

    

    getch();
}