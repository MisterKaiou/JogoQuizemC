#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define MAX_QTD_QUESTIONS 15
#define QTD_QUESTIONS 10
#define NAME_SIZE 20
#define MAX_ENTRIES 20

struct list
{
    char question[150];
    char answers1[50];
    char answers2[50];
    char answers3[50];
    char answers4[50];
    char answers5[50];
    char correctAnswer;
    char trivia[110];
} quizGame[MAX_QTD_QUESTIONS];

struct scores
{
    char name[NAME_SIZE];
    int score;
} topScores[MAX_ENTRIES];

void generateQuestions(FILE *ql)
{
    int i = 0;

    if ((ql = fopen("QuestionsList.dat", "rb") == NULL)) 
        ql = fopen("QuestionsList.dat", "wb");
    else
    {
        ql = fopen("QuestionsList.dat", "ab");
        return;
    }

    strcpy(quizGame[0].question, "What is the name of the princess you have to save in the video game, -Zelda-?");
    strcpy(quizGame[0].answers1, "a) Link");
    strcpy(quizGame[0].answers2, "b) Zelda");
    strcpy(quizGame[0].answers3, "c) Navi");
    strcpy(quizGame[0].answers4, "d) Peach");
    strcpy(quizGame[0].answers5, "e) Daysy");
    quizGame[0].correctAnswer = 'b';
    strcpy(quizGame[0].trivia, "Zelda - Link tries to save Zelda.");

    strcpy(quizGame[1].question, "What is the bestselling video game for the Nintendo 64 console?");
    strcpy(quizGame[1].answers1, "a) Mario Kart 64");
    strcpy(quizGame[1].answers2, "b) Super Mario 64");
    strcpy(quizGame[1].answers3, "c) Super Smash Bros");
    strcpy(quizGame[1].answers4, "d) Golden Eye");
    strcpy(quizGame[1].answers5, "e) Metal Gear");
    quizGame[1].correctAnswer = 'b';
    strcpy(quizGame[1].trivia, "Super Mario 64 - Super Mario has sold approximately 11.62 million copies.");

    strcpy(quizGame[2].question, "What is the name of the main character in the strategy video game, -Pikmin-?");
    strcpy(quizGame[2].answers1, "a) Hector");
    strcpy(quizGame[2].answers2, "b) Samus");
    strcpy(quizGame[2].answers3, "c) Olimar");
    strcpy(quizGame[2].answers4, "d) Albious");
    strcpy(quizGame[2].answers5, "e) Louie");
    quizGame[2].correctAnswer = 'c';
    strcpy(quizGame[2].trivia, "Olimar - Olimar is from the planet Hocotate.");

    strcpy(quizGame[3].question, "Developed by Capcom, what is the name of the main character in the video game series, -Devil May Cry-?");
    strcpy(quizGame[3].answers1, "a) Dante");
    strcpy(quizGame[3].answers2, "b) Snake");
    strcpy(quizGame[3].answers3, "c) Nero");
    strcpy(quizGame[3].answers4, "d) Mondus");
    strcpy(quizGame[3].answers5, "e) Vergil");
    quizGame[3].correctAnswer = 'a';
    strcpy(quizGame[3].trivia, "Dante - The series revolves around the death of his mother Eva.");

    strcpy(quizGame[4].question, "What is the name of the second installment of the -Elder Scrolls-?");
    strcpy(quizGame[4].answers1, "a) Bloodmoon");
    strcpy(quizGame[4].answers2, "b) Oblivion");
    strcpy(quizGame[4].answers3, "c) Morrowind");
    strcpy(quizGame[4].answers4, "d) Daggerfall");
    strcpy(quizGame[4].answers5, "e) Blades");
    quizGame[4].correctAnswer = 'd';
    strcpy(quizGame[4].trivia, "Daggerfall - The lastest Elder Scroll that was announced was titled Blades(2019).");

    strcpy(quizGame[5].question, "Who is the main character in the -Metal Gear Solid- video game series?");
    strcpy(quizGame[5].answers1, "a) Ocelot");
    strcpy(quizGame[5].answers2, "b) Snake");
    strcpy(quizGame[5].answers3, "c) Gaiden");
    strcpy(quizGame[5].answers4, "d) Vulcan");
    strcpy(quizGame[5].answers5, "e) Quiet");
    quizGame[5].correctAnswer = 'b';
    strcpy(quizGame[5].trivia, "Snake - Metal Gear Solid was first published by Konami in 1998.");

    strcpy(quizGame[6].question, "The video game -World at War- comes from what video game series?");
    strcpy(quizGame[6].answers1, "a) Battlefield");
    strcpy(quizGame[6].answers2, "b) Red Orchestra");
    strcpy(quizGame[6].answers3, "c) Halo");
    strcpy(quizGame[6].answers4, "d) Call of Duty");
    strcpy(quizGame[6].answers5, "e) Medal of Honor");
    quizGame[6].correctAnswer = 'd';
    strcpy(quizGame[6].trivia, "Call of Duty - World at War came out in 2008.");

    strcpy(quizGame[7].question, "What company published the FPS video game, -Far Cry 4-?");
    strcpy(quizGame[7].answers1, "a) EA");
    strcpy(quizGame[7].answers2, "b) Bethesda");
    strcpy(quizGame[7].answers3, "c) Microsoft");
    strcpy(quizGame[7].answers4, "d) Ubisoft");
    strcpy(quizGame[7].answers5, "e) Rockstar");
    quizGame[7].correctAnswer = 'd';
    strcpy(quizGame[7].trivia, "Ubisoft - Other games from Ubisoft are Splinter Cell, Assassin's Creed, Rainbow Six and Prince of Persia.");

    strcpy(quizGame[8].question, "What video game features the hero B. J. Blazkowicz?");
    strcpy(quizGame[8].answers1, "a) Fable III");
    strcpy(quizGame[8].answers2, "b) Wolfenstein, The New Order");
    strcpy(quizGame[8].answers3, "c) Halo ODST");
    strcpy(quizGame[8].answers4, "d) Doom 3");
    strcpy(quizGame[8].answers5, "e) Boarderlands 3");
    quizGame[8].correctAnswer = 'b';
    strcpy(quizGame[8].trivia, "Wolfenstein, The New Order - Blazkowicz leads a counter-offensive against a Nazi regime.");

    strcpy(quizGame[9].question, "What is the fictional continent that the video game -Fable III- takes place in?");
    strcpy(quizGame[9].answers1, "a) Morrowind");
    strcpy(quizGame[9].answers2, "b) Drakengaurd");
    strcpy(quizGame[9].answers3, "c) Nether Realm");
    strcpy(quizGame[9].answers4, "d) Albion");
    strcpy(quizGame[9].answers5, "e) Anor Londo");
    quizGame[9].correctAnswer = 'd';
    strcpy(quizGame[9].trivia, "Albion - Fable III takes place fifty years after Fable II ends, and Logan has now taken the throne.");

    strcpy(quizGame[10].question, "In what video game can you be a human or an Irathian?");
    strcpy(quizGame[10].answers1, "a) Skyrim");
    strcpy(quizGame[10].answers2, "b) Defiance");
    strcpy(quizGame[10].answers3, "c) Darkspore");
    strcpy(quizGame[10].answers4, "d) Titanfall");
    strcpy(quizGame[10].answers5, "e) Black Desert");
    quizGame[10].correctAnswer = 'b';
    strcpy(quizGame[10].trivia, "Defiance - In the DLC for Defiance, you can also be a Castithan.");

    strcpy(quizGame[11].question, "Who is the main character in Kingdom Hearts?");
    strcpy(quizGame[11].answers1, "a) Shinji");
    strcpy(quizGame[11].answers2, "b) Riku");
    strcpy(quizGame[11].answers3, "c) Kairi");
    strcpy(quizGame[11].answers4, "d) Sora");
    strcpy(quizGame[11].answers5, "e) Ventus");
    quizGame[11].correctAnswer = 'd';
    strcpy(quizGame[11].trivia, "Sora - Best friends with Riku and Kairi, Sora is a cheerful teenager who lives on Destiny Islands.");

    strcpy(quizGame[12].question, "In what game would you encounter enemies called -Big Daddies-?");
    strcpy(quizGame[12].answers1, "a) Duke Nukem");
    strcpy(quizGame[12].answers2, "b) Fallout");
    strcpy(quizGame[12].answers3, "c) Doom");
    strcpy(quizGame[12].answers4, "d) Bioshock");
    strcpy(quizGame[12].answers5, "e) Postal");
    quizGame[12].correctAnswer = 'd';
    strcpy(quizGame[12].trivia, "Bioshock - Bioshock takes place in the underwater world of Rapture.");

    strcpy(quizGame[13].question, "Where does the game S.T.A.L.K.E.R. take place?");
    strcpy(quizGame[13].answers1, "a) Kyrat");
    strcpy(quizGame[13].answers2, "b) USA");
    strcpy(quizGame[13].answers3, "c) Ukraine");
    strcpy(quizGame[13].answers4, "d) Germany");
    strcpy(quizGame[13].answers5, "e) Siberia");
    quizGame[13].correctAnswer = 'c';
    strcpy(quizGame[13].trivia, "Ukraine - S.T.A.L.K.E.R. takes place after the Chernobyl nuclear accident.");

    strcpy(quizGame[14].question, "In what video game would you find the character -Jackie Estacado-?");
    strcpy(quizGame[14].answers1, "a) The Darkness");
    strcpy(quizGame[14].answers2, "b) F.E.A.R.");
    strcpy(quizGame[14].answers3, "c) Resident Evil");
    strcpy(quizGame[14].answers4, "d) Homefront");
    strcpy(quizGame[14].answers5, "e) The Observer");
    quizGame[14].correctAnswer = 'a';
    strcpy(quizGame[14].trivia, "The Darkness - 'I remember the night of my 21st birthday, that was the first time I died.' - Jackie Estacado.");

    fwrite(&quizGame, sizeof(quizGame), 1, ql);

    fclose(ql);
}

void getChoice(char *ch, int j, int *sc)
{
    fflush(stdin);
    *ch = fgetchar();

    while (*ch != 'a' && *ch != 'b' && *ch != 'c' && *ch != 'd' && *ch != 'e' && *ch != 'A' && *ch != 'B' && *ch != 'C' && *ch != 'D' && *ch != 'E')
    {
        printf("Invalid choice, please try again: ");
        fflush(stdin);
        *ch = fgetchar();
    }

    if (*ch == quizGame[j].correctAnswer || *ch == quizGame[j].correctAnswer - 32)
    {
        printf("Correct!! %s", quizGame[j].trivia);

        ++*sc;
    }
    else
        printf("Wrong!! %s", quizGame[j].trivia);
}

int play(FILE *ql, int *score, char playerName[NAME_SIZE])
{
    int counter, questionNumber = 1, randomizer, randVector[QTD_QUESTIONS] = {NULL}, i, j, temp;
    char choice;
    unsigned char used[MAX_QTD_QUESTIONS] = {0};
    srand(time(NULL));
    *score = 0;
    
    do
    {
        system("cls");
        printf("What's your name: ");
        fflush(stdin);
        fgets(playerName, NAME_SIZE, stdin);
        temp = strlen(playerName) - 1;
        playerName[temp] = '\0';

        if (strlen(playerName) == NULL)
        {
            printf("Please, type a valid name...\n");
            Sleep(1500);
        }
        

    } while (strlen(playerName) == NULL);

    ql = fopen("QuestionsList.dat", "rb");

    if (ql == NULL)
    {
        printf("Error opening file!\n");
        perror("Error:");
        getch();
        exit(1);
    }

    fread(&quizGame, sizeof(quizGame), 1, ql);

    j = 0;

    do
    {
        randomizer = rand() % MAX_QTD_QUESTIONS;
        for(i = 0; i < j; i++)
        {
            if (j == 0) break;

            if (used[randomizer])
            {
                randomizer = i;
            }
        }

        randVector[j] = randomizer;
        j++;

        used[randomizer] = 1;

    } while (j < QTD_QUESTIONS);

    j = 0;

    for(counter = 0; counter < QTD_QUESTIONS; counter++)
    {
        j = randVector[counter];
        system("cls");
        printf("Your score: %i\n\n", *score);
        printf("Question number: %i:\n", questionNumber++);
        printf("%s\n", quizGame[j].question);
        printf("%s\n", quizGame[j].answers1);
        printf("%s\n", quizGame[j].answers2);
        printf("%s\n", quizGame[j].answers3);
        printf("%s\n", quizGame[j].answers4);
        printf("%s\n\n", quizGame[j].answers5);
        printf("Your choice: "); 
        getChoice(&choice, j, score);

        printf("\n\nPress any key to continue... ");
        getch();
    }
    fclose(ql);

    return &score;
}

void leaderboards(FILE *ql, int *score, char playerName[NAME_SIZE])
{
    int entryCounter = 0, i;
    char teste1, teste2;

    ql = fopen("Leaderboards.dat", "ab+");

    if (ql == NULL)
    {
        printf("Error when creating leaderboards file...");
        perror("Error:");
        return;
    }

    fread(&topScores, sizeof(topScores), 1, ql);

    teste1 = (teste1 == topScores[0].name);

    if (strcmp(topScores[0].name, "") == 0 || strcmp(playerName, "") == 0)
    {
        system("cls");

        for (i = 0; i < MAX_ENTRIES; i++)
        {
            if(strcmp(topScores[i].name, "") != 0) ++entryCounter;
        }

        if(strlen(playerName) == NULL)
        {   
            strcpy(topScores[entryCounter].name, playerName);
            topScores[entryCounter].score = *score;
            fwrite(&topScores, sizeof(topScores), 1, ql);
        }

        for(i = 0; i <= entryCounter; i++)
        {
            printf("%s", topScores[i].name);
            printf("%c%i\n", 9, topScores[i].score);
        }
        getch();
    }

    else if (strlen(topScores[0].name) == NULL)
    {
        system("cls");
        printf("There aren't any leaderboards yet, play a round and check back!");
        printf("\n\nPress any key to continue...");
        getch();
        ql = fopen("Leaderboards.dat", "ab+");
    }
    else
        ql = fopen("Leaderboards.dat", "ab+");

    fclose(ql);
}



void menu(FILE *ql, int *failsafe)
{
    int selection = 0, score;
    char playerName[NAME_SIZE] = {NULL};

    system("cls");

    printf("-------GAMES QUIZ-------\n");
    printf("|1 - Play                |\n");
    printf("|2 - Leaderboards        |\n");
    printf("|3 - Manage Questions    |\n");
    printf("|4 - Credits             |\n");
    printf("|5 - Exit                |\n");
    printf("------------------------\n");
    scanf("%i", &selection);

    switch (selection)
    {
    case 1:
        play(&ql, &score, playerName);
        leaderboards(&ql, &score, playerName);
        *failsafe = 1;
        break;

    case 2:
        playerName[NAME_SIZE] = NULL;
        leaderboards(&ql, score, playerName);
        *failsafe = 1; 
        break;
    
    /*case 3:
        credits();
        break;

    case 4:
        manageQuestions();
    */
    case 5:
        exit(0);
        break;

    default:
        printf("Invalid choice");
        fgetchar();
        failsafe = 1;
        break;
    }
}

int main()
{
    int failsafe = 1;
    FILE *ql;

    printf("Welcome to the General Knowledge Quiz on Games!\n");
    printf("All questions cover several games, hit as much as you can!!\n\n");
    printf("Press any key to continue...");
    getch();

    generateQuestions(&ql);

    while(failsafe == 1) menu(&ql, &failsafe);

    getch();
}