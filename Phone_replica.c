#include <stdio.h>
#include <stdlib.h>  //system commands like dir,cls
#include <string.h>  //string compare,concatination
#include <conio.h>   //getch()
#include <time.h>    //rand(),sand(),time_t,curtime
#include <windows.h> //Sleep()
#include <unistd.h>  //for moving into directory using chdir(),for file path getcwd()
struct contact
{
    char name[20];
    long long int phoneno;
    char email[30];
    char gen;
};
struct contact cse[20];
struct tictactoe
{
    char arr;
};
int contact_count = 5;
char *app_store[15]; // for store function
int st_ct = 4;       // for store function
char *apps[20];      // for apps function
int app_ct = 7;      // for apps function
char *load_page[21];

void App_list(int app_ct);
void Apps();
void Playstore();
void inbuilt_apps();
void loading_page();
void Store();

void Clock();
void password();
void pass_hide(char pass[7]);
void Home();
void Calculator();
void Currency_conv();
void R_P_C();
void Adventure_game();
void tic_tac_toe();

void Calender();
void Phonebook();
void Settings();
void ChangePassword();
void Wallpapers();
char *Wallpaper_print = "def_wall.txt"; // default wallpaper
void Wall_print();
void Font();
void Background();
char color[2] = "7"; // default font colour
char bg[2] = "0";    // default background color
void File_manager();
void folder_edit();
void file_edit();
void Management(); // file,folder management
void Show_dir();   // display files,folders
void Press_any_key();
void See_all_dir();
void file_path();
void txt_edit();
char *b_address; // base address(path) of this code
char *filepath;  // address(path) of curent directory
FILE *fptr;
char ch;

int main()
{

    b_address = (char *)malloc(100 * sizeof(char));
    getcwd(b_address, 100);// address of this code
    strcat(b_address,"\\FILEMANAGER");//address to open file manager 
    Store();
    inbuilt_apps();
    printf("\n");

    password(); // function(password)
    printf("\n");

}

void password()
{

    system("cls");
    Wall_print(); // print wallpaper
    Clock();      // show today date and time

    char pass[7], Rpass[20];
    printf("\nEnter 6 digit PIN to UNLOCK Mobile: ");
    pass_hide(pass);
    fptr = fopen("password.txt", "r");

    fscanf(fptr, "%s", Rpass);
    int c = strcmp(pass, Rpass);

    if (c == 0)
    {

        system("cls");
        Home();
    }
    else
    {
        while (c != 0)
        {
            printf("\nIncorrect Password. Try again!\nEnter 6 digit PIN to UNLOCK Mobile: ");
            pass_hide(pass);
            c = strcmp(pass, Rpass);
        }
        if (c == 0)
        {
            system("cls");
            Home();
        }
    }
    fclose(fptr);
}
void pass_hide(char pass[7])
{
    int pass_size = 0;
    while (pass_size < 7)
    {
        pass[pass_size] = getch();
        if (pass[pass_size] == '\r')
        {
            pass[pass_size] = '\0';
            break;
        }
        else if (pass[pass_size] == '\b')
        {
            if (pass_size > 0)
            {
                pass_size--;
                printf("\b \b");
            }
        }
        else
        {
            printf("*");
            pass_size++;
        }
    }
}

void Clock()
{

    time_t curtime;
    time(&curtime);
    printf("\n\nCLOCK\n\n");
    printf("%s", ctime(&curtime));
}
void loading_page()
{
    load_page[0] = "[____________________]";
    load_page[1] = "[#___________________]";
    load_page[2] = "[##__________________]";
    load_page[3] = "[###_________________]";
    load_page[4] = "[####________________]";
    load_page[5] = "[#####_______________]";
    load_page[6] = "[######______________]";
    load_page[7] = "[#######_____________]";
    load_page[8] = "[########____________]";
    load_page[9] = "[#########___________]";
    load_page[10] = "[##########__________]";
    load_page[11] = "[###########_________]";
    load_page[12] = "[############________]";
    load_page[13] = "[#############_______]";
    load_page[14] = "[##############______]";
    load_page[15] = "[###############_____]";
    load_page[16] = "[################____]";
    load_page[17] = "[#################___]";
    load_page[18] = "[##################__]";
    load_page[19] = "[###################_]";
    load_page[20] = "[####################]";
}

void Home()
{
    int home;

    printf("HOME\n");

    printf("1. Apps\n2. Settings\n3. Lock\n4. Power OFF\n> ");
Home1:
    scanf("%d", &home);
    switch (home)
    {
    case 1:
        system("cls");
        // function(all apps)
        Apps();
        break;
    case 2:
        system("cls");
        Settings();
        break;
    case 3:
        // function(Lock)
        system("cls");
        password();
        break;
    case 4:
        // function(exit)
        system("cls");
        exit(0);
    default:
        printf("Enter valid input!\n> ");
        fflush(stdin);
        goto Home1;
    }
}

void Calculator()
{
    int n1, n2, symbol, calc;
    printf("CALCULATOR\n1. ON\n0. OFF\n> ");
    scanf("%d", &calc);
    while (calc == 1)
    {

        printf("Enter first number: ");
        scanf("%d", &n1);

        printf("\nEnter Operation as \n1. ADDITION(+)\n2. SUBRACTION(-)\n3. MULIPLICATION(*)\n4. DIVISION(/)\n> ");
        scanf("%d", &symbol);
        while (symbol > 4 || symbol == 0)
        {
            system("cls");
            printf("\nEnter valid number for Operation as \n1. ADDITION(+)\n2. SUBRACTION(-)\n3. MULIPLICATION(*)\n4. DIVISION(/)\n> ");
            scanf("%d", &symbol);
        }

        printf("\nEnter second number: ");
        scanf("%d", &n2);
        printf("\n\n");

        switch (symbol)
        {
        case 1:
            printf("Your Calculation is %d + %d = %d", n1, n2, n1 + n2);
            break;
        case 2:
            printf("Your Calculation is %d - %d = %d", n1, n2, n1 - n2);
            break;
        case 3:
            printf("Your Calculation is %d * %d = %d", n1, n2, n1 * n2);
            break;
        case 4:
            printf("Your Calculation is %d / %d = %.2f", n1, n2, (float)n1 / n2);
            break;
        }

        int use_again;
        printf("\n\nCALCULATOR\n1. Use Again\n0. OFF\n> ");
        scanf("%d", &use_again);

        if (use_again == 1)
        {
            system("cls");
        }
        else
        {
            break;
        }
    }
    system("cls");
    Apps();
}
void Currency_conv()
{

    float I_U = 0.012, I_S = 0.046, I_G = 0.0099, I_C = 0.083;
    float U_I = 81.42, U_S = 3.75, U_G = 0.81, U_C = 6.78;
    float S_I = 21.20, S_U = 0.27, S_G = 0.21, S_C = 1.81;
    float G_I = 100.99, G_S = 4.66, G_C = 8.42, G_U = 1.24;
    float C_I = 12.01, C_U = 0.15, C_S = 0.55, C_G = 0.12;

    int first, second, open;
    float amount, output;
    printf("CURRENCY CONVERTER\n");
    printf("------------------\n");
    printf("\n1. OPEN\n0. EXIT\n> ");
    scanf("%d", &open);
    system("cls");
    while (open == 1)
    {
        printf("AVAILABLE CURRENCIES\n");
        printf("1. INR-INDIAN RUPEES\n2. USD-UNITED STATES DOLLARS\n3. SAR-SOUDI ARABIAN RIAZ\n4. GBP-GERMAN BRITISH POUNDS\n5. CNY-CHENESE YUAN\n");
        printf("\n");
        printf("Enter FIRST Currency: ");
        scanf("%d", &first);
        while (first == 0 || first > 5)
        {
            printf("Enter correct Currency: ");
            scanf("%d", &first);
        }
        printf("Enter SECOND Currency: ");
        scanf("%d", &second);

        while (second == first || second > 5)
        {
            if (second == first)
            {
                printf("Enter Another Currency: ");
                scanf("%d", &second);
            }
            else if (second > 5 || second == 0)
            {
                printf("Enter Correct Currency: ");
                scanf("%d", &second);
            }
        }

        printf("Enter the amount you want to Convert: ");
        scanf("%f", &amount);

        switch (first)
        {
        case 1:
            switch (second)
            {
            case 2:
                output = amount * I_U;
                break;
            case 3:
                output = amount * I_S;
                break;
            case 4:
                output = amount * I_G;
                break;
            case 5:
                output = amount * I_C;
                break;
            }
            break;
        case 2:
            switch (second)
            {
            case 1:
                output = amount * U_I;
                break;
            case 3:
                output = amount * U_S;
                break;
            case 4:
                output = amount * U_G;
                break;
            case 5:
                output = amount * U_C;
                break;
            }
            break;
        case 3:
            switch (second)
            {
            case 1:
                output = amount * S_I;
                break;
            case 2:
                output = amount * S_U;
                break;
            case 4:
                output = amount * S_G;
                break;
            case 5:
                output = amount * S_C;
                break;
            }
            break;
        case 4:
            switch (second)
            {
            case 1:
                output = amount * G_I;
                break;
            case 2:
                output = amount * G_U;
                break;
            case 3:
                output = amount * G_S;
                break;
            case 5:
                output = amount * G_C;
                break;
            }
            break;
        case 5:
            switch (second)
            {
            case 1:
                output = amount * C_I;
                break;
            case 2:
                output = amount * C_U;
                break;
            case 3:
                output = amount * C_S;
                break;
            case 4:
                output = amount * C_G;
                break;
            }
            break;
        }
        system("cls");
        loading_page();
        for (int i = 0; i < 21; i++)
        {

            system("cls");
            printf("Converting currency! Please wait...\n");
            // printf("Your App is installing!\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(75); // speed 15 for delete,200 for install
        }
        printf("The Converted Currency is: %.2f", output);
        int use_again;
        printf("\n\nCheck other Currencies?\n1. YES\n0. EXIT\n> ");
        scanf("%d", &use_again);

        if (use_again == 1)
        {
            system("cls");
        }
        else
        {
            break;
        }
    }
    system("cls");
    Apps();
}
void R_P_C()
{
    int play;
    char Rock, Paper, Scissor;
    printf("ROCK PAPER SCISSORS\n");
    printf("1. Play Game\n0. Exit\n");
    scanf("%d", &play);

    while (play == 1)
    {
        FILE *fptr;
        int usr_inp, comp_inp, i;
        Rock = 0, Paper = 0, Scissor = 0;

        printf("\nYOU Vs COMPUTER\n");
        printf("1. Rock\n2. Paper\n3. Scissor\n");
        printf("What do you choose?\n> ");
    rpc_usr_inp:
        scanf("%d", &usr_inp);
        srand(time(0));
        comp_inp = (rand() % (3));

        printf("\n\nYou Chose:\n");
        switch (usr_inp)
        {
        case 1:
            fptr = fopen("rock.txt", "r");

            while (Rock != EOF)
            {
                Rock = fgetc(fptr);
                printf("%c", Rock);
            }
            fclose(fptr);
            break;
        case 2:
            fptr = fopen("paper.txt", "r");
            while (Paper != EOF)
            {
                Paper = fgetc(fptr);
                printf("%c", Paper);
            }
            fclose(fptr);
            break;
        case 3:
            fptr = fopen("scissor.txt", "r");
            while (Scissor != EOF)
            {
                Scissor = fgetc(fptr);
                printf("%c", Scissor);
            }
            fclose(fptr);
            break;
        default:
            printf("Enter valid input!\n> ");
            fflush(stdin);
            goto rpc_usr_inp;
            break;
        }

        Rock = 0, Paper = 0, Scissor = 0;
        printf("\n\nComputer Chose:\n");
        switch (comp_inp)
        {
        case 0:
            fptr = fopen("rock.txt", "r");
            while (Rock != EOF)
            {
                Rock = fgetc(fptr);
                printf("%c", Rock);
            }
            fclose(fptr);
            break;
        case 1:
            fptr = fopen("paper.txt", "r");
            while (Paper != EOF)
            {
                Paper = fgetc(fptr);
                printf("%c", Paper);
            }
            fclose(fptr);
            break;
        case 2:
            fptr = fopen("scissor.txt", "r");
            while (Scissor != EOF)
            {
                Scissor = fgetc(fptr);
                printf("%c", Scissor);
            }
            fclose(fptr);
            break;
        }

        switch (usr_inp)
        {
        case (1):
            switch (comp_inp)
            {
            case 0:
                printf("\nIT\'S DRAW :|");
                break;
            case 1:
                printf("\nYOU LOSE :(");
                break;
            case 2:
                printf("\nYOU WIN :)");
                break;
            }
            break;
        case (2):
            switch (comp_inp)
            {
            case 0:
                printf("\nYOU WIN :)");
                break;
            case 1:
                printf("\nIT\'S DRAW :|");
                break;
            case 2:
                printf("\nYOU LOSE :(");
                break;
            }
            break;
        case (3):
            switch (comp_inp)
            {
            case 0:
                printf("\nYOU LOSE :(");
                break;
            case 1:
                printf("\nYOU WIN :)");
                break;
            case 2:
                printf("\nIT\'S DRAW :|");
                break;
            }
            break;
        }

        int play_again;
        printf("\n\nPLAY AGAIN?\n1. YES\n0. NO\n> ");
        scanf("%d", &play_again);

        if (play_again == 1)
        {
            system("cls");
        }
        else if (play_again == 0)
        {
            system("cls");
            break;
        }
    }
    Apps(); // funtion(Apps)
}
void Adventure_game()
{
    char ans1[15], ans2[15], ans3[15], ans4[15], ans5[15];
    int verify1, verify2, verify3, verify4, verify5, deaded = 0;

    int hint, question1, question2, question3, question4, question5;

    srand(time(0));
    FILE *p;
call1:

    printf("WELCOME! LET'S START THE ADVENTURE!\n");
    printf("You are searching for a treasure which is locked in the room\n");
    printf("To reach that room, you have to cross 5 rooms\n");
    printf("To cross these 5 rooms, you have to solve a riddle for each room\n");
    printf("If you fail to solve any of these riddles you will be dead\n");
    printf("BE READY TO DIE...TRY TO BE ALIVE\n");
    printf("Ready to be RIDDLED?\n\n");
    printf("*NOTE: Answer all riddles in 'small letters'\n\n");

    int start;
    printf("press 1 to continue.\n\t2 to exit\n> ");
    scanf("%d", &start);

    system("cls");

    while (start == 1)
    {
        question1 = rand() % 4;

        switch (question1)
        {
        case 0:
            printf("I come from a mine and get surrounded by wood always. Everyone uses me. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("_ _ n _ i _\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans1);
            verify1 = strcmp(ans1, "pencil");

            break;

        case 1:
            printf("What is always in front of you but can't be seen?\n ");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("past, present.....\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans1);
            verify1 = strcmp(ans1, "future");

            break;

        case 2:
            printf("I shave every day, but my beard stays the same. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Oops!! there is no clue. You have to answer anyway to survive\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans1);
            verify1 = strcmp(ans1, "barber");
            break;

        case 3:
            printf("What can go through glass without breaking it?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n");
            scanf("%d", &hint);

            if (hint == 1)
                printf("3*10^8\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans1);
            verify1 = strcmp(ans1, "light");
            break;
        }
        system("cls");

        if (verify1 == 0)
        {
            printf("Your answer is correct. You can go to the next room.\n\n");
        }

        else
        {
            printf("You are dead.");
            deaded = 1;
            goto call;
        }

        // question 1 ended

        question2 = rand() % 4;

        switch (question2)
        {
        case 0:
            printf("I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Resounding\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans2);
            verify2 = strcmp(ans2, "echo");

            break;

        case 1:
            printf("I am an odd number. Take away letter and I become even. What number am I?\n ");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Rhyming of heaven\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans2);
            verify2 = strcmp(ans2, "seven");

            break;

        case 2:
            printf("You'll find me in Mercury, Earth, Mars and Jupiter, but not in Venus or Neptune. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Oops!! there is no clue. You have to answer anyway to survive\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans2);
            verify2 = strcmp(ans2, "r");
            break;

        case 3:
            printf("I'm tall when I'm young, and I'm short when I'm old. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Torch has replaced this.\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans2);
            verify2 = strcmp(ans2, "candle");
            break;
        }

        system("cls");
        if (verify2 == 0)
            printf("Your answer is correct. You can go to the next room.\n\n");
        else
        {
            printf("You are dead.");
            deaded = 1;
            goto call;
        }

        // question 2 completed

        question3 = rand() % 4;

        switch (question3)
        {
        case 0:
            printf("I make a loud sound when I'm changing. When I do change, I get bigger but weigh less. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Oops!! there is no clue. You have to answer anyway to survive.\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans3);
            verify3 = strcmp(ans3, "popcorn");

            break;

        case 1:
            printf("Who can finish a book without finishing a sentence?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Who lives in jail.\n");
            else
                printf("Enter your answer\n> > ");

            scanf("%s", ans3);
            verify3 = strcmp(ans3, "prisoner");

            break;

        case 2:
            printf("What has only two words, but thousands of letters?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("_ o _ _ o _ _ i _ _\n> ");
            else
                printf("Enter your answer> \n> ");

            scanf("%s", ans3);
            verify3 = strcmp(ans3, "postoffice");
            break;

        case 3:
            printf("What bird do you associate with lifiting weight?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("_ r _ _ e\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans3);
            verify3 = strcmp(ans3, "crane");
            break;
        }

        system("cls");

        if (verify3 == 0)
            printf("Your answer is correct. You can go to the next room.\n\n");
        else
        {
            printf("You are dead.");
            deaded = 1;
            goto call;
        }

        // question 3 completed

        question4 = rand() % 4;

        switch (question4)
        {
        case 0:
            printf("What has a neck but no head\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("-h-r-\n");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans4);
            verify4 = strcmp(ans4, "shirt");

            break;

        case 1:
            printf("If you've got it, you'll want to share it but once uou've shared it, you haven't kept it. What is it?\n ");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Oops!! there is no clue. You have to answer anyway to survive\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans4);
            verify4 = strcmp(ans4, "secret");

            break;

        case 2:
            printf("I'm orange, I wear a green hat and I sound like a parrot. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("I am brother of Raddish\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans4);
            verify4 = strcmp(ans4, "carrot");
            break;

        case 3:
            printf("I examplify a rare case where today comes before yesterday. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("It contains A to Z\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans4);
            verify4 = strcmp(ans4, "dictionary");
            break;
        }
        system("cls");

        if (verify4 == 0)
            printf("Your answer is correct. You can go to the next room.\n\n");
        else
        {
            printf("You are dead.");
            deaded = 1;
            goto call;
        }

        // question 4 completed

        question5 = rand() % 4;

        switch (question5)
        {
        case 0:
            printf("Who makes it, has no need of it. Who buys it, has no use of it. Who uses it can neither see nor feel it. What is it?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n");
            scanf("%d", &hint);

            if (hint == 1)
                printf("It stats with letter 'c' \n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans5);
            verify5 = strcmp(ans5, "coffin");

            break;

        case 1:
            printf("It cannot be seen, cannot be felt,\nCannot be heard, cannot be smelt.\nIt lies behind stars and under hills,\nAnd empty holes it fills.\nIt comes first and follows after,\nEnds life.\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Vampires Day\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans5);
            verify5 = strcmp(ans5, "darkness");

            break;

        case 2:
            printf("People make me, save me, change me, raise me. What am I?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Resident of Bank\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans5);
            verify5 = strcmp(ans5, "money");
            break;

        case 3:
            printf("What is 3/7 chicken, 2/3 cat, and 2/4 goat?\n");
            printf("Do you wanna any clue:\n1. Yes\n2. No\n> ");
            scanf("%d", &hint);

            if (hint == 1)
                printf("Oops!! there is no clue. You have to answer anyway to survive.\n> ");
            else
                printf("Enter your answer\n> ");

            scanf("%s", ans5);
            verify5 = strcmp(ans5, "chicago");
            break;
        }
        system("cls");

        char trea = 0;
        if (verify5 == 0)
        {
            printf("You have reached the treasure room.\nCongratulation!!\n");

            p = fopen("treasure.txt", "r");

            while (trea != EOF)
            {
                trea = fgetc(p);
                printf("%c", trea);
            }

            fclose(p);
            printf("\nPress any key to exit\n");
            getch();
            fflush(stdin);
            break;
            // if player wins he should go to apps list
        }
        else
        {
            printf("You are dead.");
            deaded = 1;
            goto call;
        }

        int use_again;
    call:

        printf("\n");
        if (deaded == 1)
        {
            p = fopen("rip.txt", "r");

            while (deaded != EOF)
            {
                deaded = getc(p);
                printf("%c", deaded);
            }

            fclose(p);
        }

        deaded = 0;

        printf("\n\nSearch for the Treasure once again??\n1. yes\n2. N0\n3. Display the rules\n> ");
        scanf("%d", &use_again);

        if (use_again == 1)
        {
            system("cls");
        }
        else if (use_again == 3)
        {
            system("cls");
            goto call1;
        }
        else
        {
            system("cls");
            break;
        }
    }

    Apps();
}
void tic_tac_toe()
{
    int play;
    printf("1. User vs User\n0. Exit\n");
    scanf("%d", &play);

    system("cls");

    while (play == 1)
    {
        int pos, player1, player2, dupindex = 0, i;
        struct tictactoe fun[9];
        int chk_dup[9];
        for (i = 0; i < 9; i++)
        {
            chk_dup[i] = 0;
        }

        fun[0].arr = ' ', fun[1].arr = ' ', fun[2].arr = ' ', fun[3].arr = ' ', fun[4].arr = ' ', fun[5].arr = ' ', fun[6].arr = ' ', fun[7].arr = ' ', fun[8].arr = ' ';

        printf("Instructions\n");
        printf("--------------\n");
        for (int k = 1, i = 1; i < 4; i++)
        {
            int j = 1;
            for (; j < 4; j++, k++)
            {
                printf(" %d |", k);
            }
            printf("\n");
            printf("--------------\n");
        }

        int check1 = 0;

        while (1)
        {

            printf("Select the position\n");
            printf("Player 1: \n> ");

        ticinput1:
            scanf("%d", &player1);

        call:
            i = 0;
            for (; i < dupindex; i++)
            {
                if (chk_dup[i] == player1)
                {
                    printf("the place is already reserved choose another position for player 1");
                    scanf("%d", &player1);
                    goto call;
                }
            }

            switch (player1)
            {
            case 1:
                fun[0].arr = 'X';
                chk_dup[dupindex] = 1;
                dupindex++;
                break;
            case 2:
                fun[1].arr = 'X';
                chk_dup[dupindex] = 2;
                dupindex++;
                break;
            case 3:
                fun[2].arr = 'X';
                chk_dup[dupindex] = 3;
                dupindex++;
                break;
            case 4:
                fun[3].arr = 'X';
                chk_dup[dupindex] = 4;
                dupindex++;
                break;
            case 5:
                fun[4].arr = 'X';
                chk_dup[dupindex] = 5;
                dupindex++;
                break;
            case 6:
                fun[5].arr = 'X';
                chk_dup[dupindex] = 6;
                dupindex++;
                break;
            case 7:
                fun[6].arr = 'X';
                chk_dup[dupindex] = 7;
                dupindex++;
                break;
            case 8:
                fun[7].arr = 'X';
                chk_dup[dupindex] = 8;
                dupindex++;
                break;
            case 9:
                fun[8].arr = 'X';
                chk_dup[dupindex] = 9;
                dupindex++;
                break;
            default:
                printf("Enter valid input!\n> ");
                fflush(stdin);
                goto ticinput1;
            }
            system("cls");

            for (int i = 1, k = 1; i < 4; i++)
            {
                int j = 1;
                for (; j < 4; j++, k++)
                {
                    printf(" %c |", fun[k - 1].arr);
                }
                printf("\n");
                printf("--------------\n");
            }

            if (fun[0].arr == 'X' && fun[4].arr == 'X' && fun[8].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[2].arr == 'X' && fun[4].arr == 'X' && fun[6].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[0].arr == 'X' && fun[3].arr == 'X' && fun[6].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[1].arr == 'X' && fun[4].arr == 'X' && fun[7].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[2].arr == 'X' && fun[5].arr == 'X' && fun[8].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[0].arr == 'X' && fun[1].arr == 'X' && fun[2].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[3].arr == 'X' && fun[4].arr == 'X' && fun[5].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[6].arr == 'X' && fun[7].arr == 'X' && fun[8].arr == 'X')
            {
                printf("Player 1 is winner\n");
                check1 = 1;
                break;
            }

            if (chk_dup[8] != 0)
                break;

            printf("Select the position\n");
            printf("Player 2: \n> ");
        ticinput2:
            scanf("%d", &player2);

        call1:
            i = 0;
            for (; i < dupindex; i++)
            {
                if (chk_dup[i] == player2)
                {
                    printf("the place is already reserved choose another position for player 2");
                    scanf("%d", &player2);
                    fflush(stdin);
                    goto call1;
                }
            }

            switch (player2)
            {
            case 1:
                fun[0].arr = 'O';
                chk_dup[dupindex] = 1;
                dupindex++;
                break;
            case 2:
                fun[1].arr = 'O';
                chk_dup[dupindex] = 2;
                dupindex++;
                break;
            case 3:
                fun[2].arr = 'O';
                chk_dup[dupindex] = 3;
                dupindex++;
                break;
            case 4:
                fun[3].arr = 'O';
                chk_dup[dupindex] = 4;
                dupindex++;
                break;
            case 5:
                fun[4].arr = 'O';
                chk_dup[dupindex] = 5;
                dupindex++;
                break;
            case 6:
                fun[5].arr = 'O';
                chk_dup[dupindex] = 6;
                dupindex++;
                break;
            case 7:
                fun[6].arr = 'O';
                chk_dup[dupindex] = 7;
                dupindex++;
                break;
            case 8:
                fun[7].arr = 'O';
                chk_dup[dupindex] = 8;
                dupindex++;
                break;
            case 9:
                fun[8].arr = 'O';
                chk_dup[dupindex] = 9;
                dupindex++;
                break;
            default:
                printf("Enter valid input!\n> ");
                fflush(stdin);
                goto ticinput2;
            }

            system("cls");

            for (int i = 1, k = 1; i < 4; i++)
            {
                int j = 1;
                for (; j < 4; j++, k++)
                {
                    printf(" %c |", fun[k - 1].arr);
                }
                printf("\n");
                printf("--------------\n");
            }

            if (fun[0].arr == 'O' && fun[4].arr == 'O' && fun[8].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[2].arr == 'O' && fun[4].arr == 'O' && fun[6].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[0].arr == 'O' && fun[3].arr == 'O' && fun[6].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[1].arr == 'O' && fun[4].arr == 'O' && fun[7].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[2].arr == 'O' && fun[5].arr == 'O' && fun[8].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[0].arr == 'O' && fun[1].arr == 'O' && fun[2].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[3].arr == 'O' && fun[4].arr == 'O' && fun[5].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
            else if (fun[6].arr == 'O' && fun[7].arr == 'O' && fun[8].arr == 'O')
            {
                printf("Player 2 is winner\n");
                check1 = 1;
                break;
            }
        }
        if (check1 == 0)
            printf("Draw\n");

        int play_again;
        printf("\n\nPLAY AGAIN?\n1. YES\n0. NO\n> ");
        scanf("%d", &play_again);

        if (play_again == 1)
        {
            system("cls");
        }
        else
        {
            system("cls");
            break;
        }
    }
    Apps(); // function(apps)
}

void Calender()
{
    int month, i = 1, index, todays, calen;
    printf("Open the Calender?\n1. YES\n0. NO\n> ");
    scanf("%d", &calen);
    while (calen == 1)
    {
        int firweek = 0, b = 1;
        system("cls");
        printf("Enter month of the year 2023:\n1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n");
        scanf("%d", &month);
        while (month > 12)
        {
            printf("Please enter valid month :\n");
            scanf("%d", &month);
        }
        system("cls");
        char *mon;
        switch (month)
        {
        case 1:
            index = 1, todays = 31;
            mon = "JANUARY";
            break;
        case 2:
            index = 4, todays = 28;
            mon = "FEBRUARY";
            break;
        case 3:
            index = 4, todays = 31;
            mon = "MARCH";
            break;
        case 4:
            index = 7, todays = 30;
            mon = "APRIL";
            break;
        case 5:
            index = 2, todays = 31;
            mon = "MAY";
            break;
        case 6:
            index = 5, todays = 30;
            mon = "JUNE";
            break;
        case 7:
            index = 7, todays = 31;
            mon = "JULY";
            break;
        case 8:
            index = 3, todays = 31;
            mon = "AUGUST";
            break;
        case 9:
            index = 6, todays = 30;
            mon = "SEPTEMBER";
            break;
        case 10:
            index = 1, todays = 31;
            mon = "OCTOBER";
            break;
        case 11:
            index = 4, todays = 30;
            mon = "NOVEMBER";
            break;
        case 12:
            index = 6, todays = 31;
            mon = "DECEMBER";
            break;
        default:
            printf("Enter valid month\n> ");
        }
        printf("\n\n");
        printf("\t\t\t Month - %s - 2023\n\n", mon);
        printf("       SUN     MON     TUE     WED     THU     FRI     SAT\n\n");
        switch (index)
        {
        case 1:
            printf("\t%d", i);
            break;
        case 2:
            printf("\t\t%d", i);
            break;
        case 3:
            printf("\t\t\t%d", i);
            break;
        case 4:
            printf("\t\t\t\t%d", i);
            break;
        case 5:
            printf("\t\t\t\t\t%d", i);
            break;
        case 6:
            printf("\t\t\t\t\t\t%d", i);
            break;
        case 7:
            printf("\t\t\t\t\t\t\t%d", i);
            break;
        }
        firweek = 8 - index;
        for (i = 2; i < firweek + 1; i++)
        {
            printf("\t%d", i);
        }
        printf("\n");
        for (i = firweek + 1; i < todays + 1; i++)
        {
            if (b == 8)
            {
                printf("\n");
                b = 1;
            }
            printf("\t%d", i);
            b++;
        }
        int use_again;
        printf("\n\nCheck another Month?\n1. YES\n0. NO\n> ");
        scanf("%d", &use_again);
        system("cls");
        if (use_again == 1)
        {

            i = 1;
        }
        else
        {
            break;
        }
    }
    system("cls");
    Apps();
}
void Phonebook()
{
    struct contact cse[20];
    strcpy(cse[0].name,"Akhil");
    cse[0].phoneno = 9182486950;
    strcpy(cse[0].email, "buttaakhil123@gmail.com");
    cse[0].gen = 'M';

    strcpy(cse[1].name, "Praneeth");
    cse[1].phoneno = 9876543210;
    strcpy(cse[1].email, "nagapraneethk@gmail.com");
    cse[1].gen = 'M';

    strcpy(cse[2].name, "Danish");
    cse[2].phoneno = 6311805726;
    strcpy(cse[2].email, "danishshaik089@gmail.com");
    cse[2].gen = 'M';

    strcpy(cse[3].name, "Sundar");
    cse[3].phoneno = 8678945690;
    strcpy(cse[3].email, "hemsundar0101@gmail.com");
    cse[3].gen = 'M';

    strcpy(cse[4].name, "Raju");
    cse[4].phoneno = 8123786593;
    strcpy(cse[4].email, "vrph1234@gmail.com");
    cse[4].gen = 'M';

    int check;
    printf("1. All contacts\n2. Search\n3. Create Newcontact\n4.Exit\n> ");
    scanf("%d", &check);
    system("cls");

    while (check != 4)
    {
        if (check == 1)
        {
            for (int i = 0; i < contact_count; i++)
            {
                printf("Name     : %s\n", cse[i].name);
                printf("Phone No :%lld\n", cse[i].phoneno);
                printf("Email ID :%s\n", cse[i].email);
                printf("Gender   :%c\n", cse[i].gen);
                printf("\n");
            }
            
        }
        else if (check == 3)
        {
            printf("Enter your name: ");
            scanf("%s", cse[contact_count].name);
            printf("Enter your phone number: ");
            scanf("%lld", &cse[contact_count].phoneno);
            printf("Enter your email: ");
            scanf("%s", cse[contact_count].email);
            fflush(stdin);
            printf("Enter your gender M for male F for female: ");
            scanf("%c", &cse[contact_count].gen);
            contact_count++;
            system("cls");
            printf("You are successfully created a new contact\n");
        }
        else if (check == 2)
        {
            char search[20];
            printf("Enter Name: ");
            scanf("%s", search);

            int compare, i;
            for (i = 0; i < contact_count; i++)
            {
                compare = strcmp(search, cse[i].name);
                if (compare == 0)
                    break;
            }

            if (compare == 0)
            {
                printf("Name: %s\n", cse[i].name);
                printf("Phone Number: %lld\n", cse[i].phoneno);
                printf("Gmail: %s\n", cse[i].email);
                printf("Gender: %c\n", cse[i].gen);
            }

            else
            {
                printf("There is no contact\n");
            }
        }

        int back;
        printf("Press 1 for back: ");
        scanf("%d", &back);
        while (back != 1)
        {
            printf("you entered invalid number so press 1 for back: ");
            scanf("%d", &back);
        }
        if (back == 1)
        {
            system("cls");
            printf("1. All contacts\n2. Search\n3. Create Newcontact\n4.Exit\n> ");
            scanf("%d", &check);
        }

        system("cls");
    }
    Apps();
}
void Settings()
{
    int set_inp;
    system("cls");
    printf("Settings\n");
    printf("1. Change Password\n2. Set Wallpaper\n3. Font Colour\n4. Display Colour\n5. Back\n> ");
valid_settings:
    scanf("%d", &set_inp);

    switch (set_inp)
    {
    case 1:
        system("cls");
        // function(Change password)
        ChangePassword();
        break;
    case 2:
        system("cls");
        Wallpapers(); // function(Set Wallpaper)
        break;
    case 3:
        system("cls");
        Font(); // function(font)

        break;
    case 4:
        system("cls");
        Background(); // function(display)
        break;
    case 5:
        system("cls");
        Home();
        break;
    default:
        printf("Enter valid input!\n> ");
        fflush(stdin);
        goto valid_settings;
        break;
    }
}

void Font()
{

    printf("Enter the input to change FONT COLOR");
    printf(
        "\n0 = Black       8 = Gray"
        "\n1 = Blue        9 = Light Blue"
        "\n2 = Green       A = Light Green"
        "\n3 = Aqua        B = Light Aqua"
        "\n4 = Red         C = Light Red"
        "\n5 = Purple      D = Light Purple"
        "\n6 = Yellow      E = Light Yellow"
        "\n7 = White(def)  F = Bright White"
        "\n*def = Default\nQ = Cancel\n> ");

sel_color:
    scanf("%s", color);
    char font_col[7] = "color ";
    int col_chk;

    if (color[0] == '0' || color[0] == '1' || color[0] == '2' || color[0] == '3' || color[0] == '4' || color[0] == '5' || color[0] == '6' || color[0] == '7' || color[0] == '8' || color[0] == '9')
    {
        strcat(font_col, bg);
        strcat(font_col, color);
        col_chk = system(font_col);
        if (col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto sel_color;
        }
        else
        {
            printf("\nFont Color has been Changed!\n");
            Press_any_key();
            Settings();
            // function(settings)
        }
    }
    else if (color[0] == 'a' || color[0] == 'b' || color[0] == 'c' || color[0] == 'd' || color[0] == 'e' || color[0] == 'f')
    {
        strcat(font_col, bg);
        strcat(font_col, color);
        col_chk = system(font_col);
        if (col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto sel_color;
        }
        else
        {
            printf("\nFont Color has been Changed!\n");
            Press_any_key();
            Settings();
            // function(settings)
        }
    }
    else if (color[0] == 'A' || color[0] == 'B' || color[0] == 'C' || color[0] == 'D' || color[0] == 'E' || color[0] == 'F')
    {
        strcat(font_col, bg);
        strcat(font_col, color);
        col_chk = system(font_col);
        if (col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto sel_color;
        }
        else
        {
            printf("\nFont Color has been Changed!\n");
            Press_any_key();
            Settings();
            // function(settings)
        }
    }

    else if (color[0] == 'Q' || color[0] == 'q')
    {
        printf("\nQuit");
        Settings();
        // function(setings)
    }
    else
    {
        printf("Enter valid colour\n> ");
        fflush(stdin);
        goto sel_color;
    }
}
void Background()
{
    printf("Enter the input to change DISPLAY COLOR");
    printf(
        "\n0 = Black(def)  8 = Gray"
        "\n1 = Blue        9 = Light Blue"
        "\n2 = Green       A = Light Green"
        "\n3 = Aqua        B = Light Aqua"
        "\n4 = Red         C = Light Red"
        "\n5 = Purple      D = Light Purple"
        "\n6 = Yellow      E = Light Yellow"
        "\n7 = White       F = Bright White");
    printf("\n*def = Default\nQ = Cancel\n> ");

bg_sel_color:
    scanf("%s", bg);
    char bg_col[8] = "color ";
    int bg_col_chk;

    if (bg[0] == '0' || bg[0] == '1' || bg[0] == '2' || bg[0] == '3' || bg[0] == '4' || bg[0] == '5' || bg[0] == '6' || bg[0] == '7' || bg[0] == '8' || bg[0] == '9')
    {
        strcat(bg_col, bg);
        strcat(bg_col, color);
        bg_col_chk = system(bg_col);
        if (bg_col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto bg_sel_color;
        }
        else
        {
            printf("\nBACKGROUND COLOR has been Changed!\n");
            Press_any_key();
            Settings(); // function(settings)
        }
    }

    else if (bg[0] == 'a' || bg[0] == 'b' || bg[0] == 'c' || bg[0] == 'd' || bg[0] == 'e' || bg[0] == 'f')
    {
        strcat(bg_col, bg);
        strcat(bg_col, color);
        bg_col_chk = system(bg_col);
        if (bg_col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto bg_sel_color;
        }
        else
        {
            printf("\nBACKGROUND COLOR has been Changed!\n");
            Press_any_key();
            Settings(); // function(settings)
        }
    }

    else if (bg[0] == 'A' || bg[0] == 'B' || bg[0] == 'C' || bg[0] == 'D' || bg[0] == 'E' || bg[0] == 'F')
    {
        strcat(bg_col, bg);
        strcat(bg_col, color);
        bg_col_chk = system(bg_col);
        if (bg_col_chk == 1)
        {
            printf("Foreground and Background color can\'t be same.Try again!\n> ");
            goto bg_sel_color;
        }
        else
        {
            printf("\nBACKGROUND COLOR has been Changed!\n");
            Press_any_key();
            Settings(); // function(settings)
        }
    }

    else if (bg[0] == 'Q' || bg[0] == 'q')
    {
        Settings(); // function(setings)
    }
    else
    {
        printf("Enter valid colour\n> ");
        fflush(stdin);
        goto bg_sel_color;
    }
}

void Wallpapers()
{
    int sel_wall;
    loading_page();

    printf("\t\tWALLPAPERS\n");
    printf("------------------------------------------\n");

    printf(
        "\n0. Default wallpaper - Smart Phone"
        "\n1. Wallpaper 1 - Land Phone"
        "\n2. Wallpaper 2 - Chess Pawns"
        "\n3. Wallpaper 3 - Mushroom House"
        "\n4. Wallpaper 4 - Superman Logo"
        "\n5. Wallpaper 5 - Island"
        "\n6. BACK"
        "\n");

    printf("Select a Wallpaper to change!\n> ");
wall_change:
    scanf("%d", &sel_wall);
    switch (sel_wall)
    {
    case 0:
        Wallpaper_print = "def_wall.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 1:
        Wallpaper_print = "wall_1.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 2:
        Wallpaper_print = "wall_2.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 3:
        Wallpaper_print = "wall_3.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 4:
        Wallpaper_print = "wall_4.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 5:
        Wallpaper_print = "wall_5.txt";
        for (int i = 0; i < 21; i++) // wallpaper installing screen
        {
            system("cls");
            printf("Wallpaper installing! Please Wait...\n");
            printf("%s %d%%\n", load_page[i], i * 5);
            Sleep(35);
        }
        printf("\nWALLPAPER INSTALLED!!!\n");
        Press_any_key();
        password();
        break;
    case 6:
        Settings();
        break;

    default:
        printf("Enter valid input!\n> ");
        fflush(stdin);
        goto wall_change;
        break;
    }
}
void Wall_print()
{
    ch = 0;
    fptr = fopen(Wallpaper_print, "r");
    while (ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    fclose(fptr);
    ch = 0;
}

void ChangePassword()
{
    char pass[10], Rpass[10], Npass[10], Cpass[10];

    printf("Please Enter your current password.\n> ");
    scanf("%s", pass);

    fptr = fopen("password.txt", "r");
    fscanf(fptr, "%s", Rpass);
    fclose(fptr);

    int c = strcmp(pass, Rpass);
    if (c != 0)
    {
        system("cls");
        printf("You entered Incorrect Password!\n");
        Settings();
    }
    if (c == 0)
    {
        fptr = fopen("password.txt", "w");
        printf("Enter your new password of 6 characters.\n> ");
        scanf("%s", Npass);

        int len = strlen(Npass);
        while (len != 6)
        {
            system("cls");
            printf("please enter only 6 digit password.\n> ");
            scanf("%s", Npass);
            len = strlen(Npass);
        }

        printf("Confirm of your password.\n> ");
        scanf("%s", Cpass);

        int c1 = strcmp(Npass, Cpass);
        while (c1 != 0)
        {
            system("cls");
            printf("Passwords don\'t match\n");
            printf("Please Enter your password once again.\n> ");
            scanf("%s", Npass);

            int len = strlen(Npass);
            while (len != 6)
            {
                system("cls");
                printf("please enter only 6 digit password.\n> ");
                scanf("%s", Npass);
                len = strlen(Npass);
            }
            printf("Confirm of your password.\n> ");
            scanf("%s", Cpass);
            c1 = strcmp(Npass, Cpass);
        }

        if (len == 6)
        {
            fprintf(fptr, "%s", Npass);
            fclose(fptr);

            system("cls");
            printf("Password changed Successfully!\n");
            password();
        }
    }
}

void inbuilt_apps()
{
    apps[0] = "Home";
    apps[1] = "Playstore";
    apps[2] = "Phone Book";
    apps[3] = "Calculator";
    apps[4] = "Currency Converter";
    apps[5] = "Calender";
    apps[6] = "File Manager";
}
void App_list(int app_ct)
{
    // app count app_ct=7
    for (int i = 0; i < app_ct; i++)
    {
        printf("%d. %s\n", i + 1, apps[i]);
    }
}
void Apps()
{
    int sel_app;
    printf("APPS\n");
    App_list(app_ct);

    printf("Select App to Open\n> ");
    scanf("%d", &sel_app);
    while (sel_app == 0 || sel_app > app_ct)
    {
        printf("Enter valid input:\n> "); // for valid input
        scanf("%d", &sel_app);
    }
    sel_app--;
    if (apps[sel_app] == "Home")
    {
        system("cls");
        Home();
    }
    else if (apps[sel_app] == "Phone Book")
    {
        system("cls");
        Phonebook();
    }
    else if (apps[sel_app] == "Calculator")
    {
        system("cls");
        Calculator();
    }
    else if (apps[sel_app] == "Currency Converter")
    {
        system("cls");
        Currency_conv();
    }
    else if (apps[sel_app] == "Calender")
    {
        system("cls");
        Calender();
    }
    else if (apps[sel_app] == "Playstore")
    {
        system("cls");
        Playstore();
    }
    else if (apps[sel_app] == "File Manager")
    {
        system("cls");
        File_manager();
    }
    else if (apps[sel_app] == "Back")
    {
        system("cls");
        Home();
    }
    else if (apps[sel_app] == "Tic-Tac-Toe")
    {
        system("cls");
        tic_tac_toe();
    }
    else if (apps[sel_app] == "Rock-Paper-Scissors")
    {
        system("cls");
        R_P_C();
    }
    else if (apps[sel_app] == "Adventure Game")
    {
        system("cls");
        Adventure_game();
    }
}
void Store()
{
    app_store[0] = "Back";
    app_store[1] = "Rock-Paper-Scissors";
    app_store[2] = "Tic-Tac-Toe";
    app_store[3] = "Adventure Game";
}
void Playstore()
{
    int entry;
    loading_page();
mng_apps_exit: // come to manage apps, exit
    printf("1. Manage Apps\n2. Exit\n> ");
    scanf("%d", &entry);
    while (entry == 0 || entry > 2)
    {
        printf("Enter valid input:\n> "); // for valid input
        scanf("%d", &entry);
    }

    if (entry == 1) // to manage apps
    {
        system("cls");
        int ins_del;
    ins_del_back: // come to install,delete, back
        printf("1. Install Apps\n2. Delete Apps\n3. Back\n> ");
        scanf("%d", &ins_del);

        while (ins_del == 0 || ins_del > 3)
        {
            printf("Enter valid input:\n> "); // for valid input
            scanf("%d", &ins_del);
        }

        if (ins_del == 1) // INSTALL APPS
        {
            if (st_ct == 1)
            {
                printf("All apps are installed :)\n");

                goto mng_apps_exit;
            }
            system("cls");

            for (int i = 0; i < st_ct; i++)
            {
                printf("%d. %s\n", i + 1, app_store[i]); // print app store
            }

            int ins_app;
            printf("Enter the App number you want to Install:\n> ");
            scanf("%d", &ins_app); // scan store app to add to app list
            if (ins_app == 1)
            {
                system("cls");
                goto ins_del_back; // goto manage apps, exit
            }
            ins_app--;

            apps[app_ct] = app_store[ins_app];
            app_ct++;

            char *temp = app_store[ins_app];
            app_store[ins_app] = app_store[st_ct - 1];
            app_store[st_ct - 1] = temp;
            st_ct--;

            // system("cls");

            for (int i = 0; i < 21; i++) // installing screen for app
            {
                system("cls");
                printf("Your App is installing! Please Wait...\n");
                printf("%s %d%%\n", load_page[i], i * 5);
                Sleep(175); // speed 15 for delete,175 for install
            }
            printf("%s is Installed :)\n\n", temp);
            Press_any_key();
            system("cls");
            goto mng_apps_exit;
        }
        else if (ins_del == 2) // DELETE APPS
        {

            int delete;
            system("cls");
            printf("DELETE APPS");
            printf("\nEnter the App number you want to Delete:\n");
            App_list(app_ct);
            printf("0. cancel\n> ");

            scanf("%d", &delete);
            if (delete == 0)
            {
                system("cls");
                goto ins_del_back; // go to install,delete,back
            }

            while (delete == 1 || delete == 2)
            {
                if (delete == 1)
                {
                    printf("You can\'t Delete Home, Please try another app!\n> ");
                    scanf("%d", &delete);
                }
                if (delete == 2)
                {
                    printf("You can\'t Delete PlayStore, Please try another app!\n> ");
                    scanf("%d", &delete);
                }
            }

            delete --;
            app_store[st_ct] = apps[delete];
            st_ct++;

            char *temp = apps[delete];
            apps[delete] = apps[app_ct - 1];
            apps[app_ct - 1] = temp;
            app_ct--;

            // system("cls");
            for (int i = 0; i < 21; i++) // deleting page
            {

                system("cls");
                printf("Your App is Deleting! Please Wait...\n");
                printf("%s %d%%\n", load_page[i], i * 5);
                Sleep(15); // speed 15 for delete,175 for install
            }
            printf("%s is Deleted :)\n\n", temp);
            Press_any_key();
            system("cls");
            goto mng_apps_exit;
        }
        else if (ins_del == 3)
        {
            system("cls");
            goto mng_apps_exit;
        }
    }
    if (entry == 2)
    {
        system("cls");
        Apps(); // Exit to Apps
    }
}

void Press_any_key()
{
    printf("\n\nPress any key to continue...\n");
    getch();
    fflush(stdin);
}
void File_manager()
{
    char *command;
    int open;
    printf("\t\t\tFILE MANAGER\n");
    printf("-----------------------------------------------------------\n\n");

    printf("1. Show all Files\n2. Exit\n> ");
manage_file:
    scanf("%d", &open);
    switch (open)
    {
    case 1:
        system("cls");
        See_all_dir();
        break;

    case 2:
        // function(Apps)
        system("cls");
        Apps();
        break;
    default:
        printf("Enter valid input\n> ");
        fflush(stdin);
        goto manage_file;
        break;
    }
}
void Management()
{
    int mgmt;
    system("cls");
    printf("1. Folder Management\n2. File Mangement\n3. Cancel\n> ");
mgmt:
    scanf("%d", &mgmt);
    switch (mgmt)
    {
    case 1:
        folder_edit();
        break;
    case 2:
        file_edit();
        break;
    case 3:
        system("cls");
        See_all_dir();
        break;
    default:
        printf("Enter valid input\n> ");
        fflush(stdin);
        goto mgmt;
        break;
    }
}
void folder_edit()
{
    char cmd_s[30], cmd_r[30];
    char *command;
    char f_name[50];
    int fedit;
    int f_rm_conf;
    // system("cls");
    printf("1. Create New Folder\n2. Delete Folder\n3. Back\n> ");
f_edit_home:
    scanf("%d", &fedit);
    switch (fedit)
    {

    case 1:
        // printf("%s\n",cmd_s);
        system("cls");
        Show_dir();
        printf("Enter folder name without spaces: ");
        printf("To create a sub-folder, enter the folder name in this format.\nfolder\\\\sub-folder\n> ");
        scanf("%s", f_name);
        char cmd_s[] = "mkdir ";

        strcat(cmd_s, f_name);
        system(cmd_s);
        system("cls");
        if (!chdir(f_name))
            printf("\nFolder created!\n");
        else
            printf("\nFolder is not created!\n");

        See_all_dir();
        break;

    case 2:

        system("cls");
        char cmd_r[] = "rmdir ";
        printf("Enter folder name without spaces.\n");
        printf("To remove a non-empty Directory or Folder, you need to delete the files inside the folder first.\n");
        printf("Do you wish to go back to remove files in the specific directory/folder?\n");
        printf("1. Back\n2. Continue\n> ");
        int rm_folder_dir;
    label_rm_fol_dir:
        scanf("%d", &rm_folder_dir);
        switch (rm_folder_dir)
        {
        case 1:
            system("cls");
            file_edit();
            break;
        case 2:
            system("cls");
            goto cont_del;
            break;
        default:
            printf("Enter valid input!\n> ");
            fflush(stdin);
            goto label_rm_fol_dir;
            break;
        }
    cont_del:
        Show_dir();
        printf("If you want to delete a sub-folder, then enter the folder name in this format.\n");
        printf("\nfolder\\\\sub-folder \n");
        printf("Enter \'000\' to go back.\n> ");

        scanf("%s", f_name);
        if (!(strcmp(f_name, "000")))
        {
            system("cls");
            folder_edit();
        }
        else
        {
            printf("CONFORMATION:\nDo you really want to remove this folder?\n1. YES\n2. NO\n> ");
        rem_y_n:
            scanf("%d", &f_rm_conf);
            switch (f_rm_conf)
            {
            case 1:

                system("cls");
                strcat(cmd_r, f_name);
                system(cmd_r);

                if (chdir(f_name) == 0)
                    printf("\nFolder Deleted!\n");
                else
                    printf("\nFolder is not Deleted!\n");
                See_all_dir();
                break;
            case 2:
                system("cls");
                See_all_dir();
                break;
            default:
                printf("Enter valid input!\n >");
                fflush(stdin);
                goto rem_y_n;
                break;
            }
        }

        break;
    case 3:
        system("cls");
        See_all_dir();
        break;
    default:
        printf("Enter valid input!\n> ");
        fflush(stdin);
        goto f_edit_home;
        break;
    }
}
void file_edit()
{
    system("cls");
    printf("\n1. Create new txt file\n2. Edit txt file\n3. Delete txt file\n4. Back\n> ");
    int new_txt;
edit_file:
    scanf("%d", &new_txt);
    system("cls");
    char file_exten[5] = ".txt";
    char file_name[15];
    char dir_for_file[50];

    switch (new_txt)
    {
    case 1:

        Show_dir();
        printf("Enter file name without extenion in less than 20 characters without spaces.\n> ");
    name_file:
        scanf("%s", file_name);
        int txt_size = strlen(file_name);
        if (txt_size > 20)
        {
            printf("File name should be less than 20 characters. Try again!\n> ");
            goto name_file;
        }
        else
        {
            strcat(file_name, file_exten);

            fptr = fopen(file_name, "w"); // creating new file
            fclose(fptr);
            if (!(fptr == NULL))
                printf("File Created\n");
            else
                printf("File not created\n");
            Press_any_key();
            system("cls");
            See_all_dir();
        }
        break;
    case 2:
        // file edit
        txt_edit();
        break;
    case 3:
        // use unlink(source) to delete txt file
        Show_dir();

        printf("Enter file name with \'Extenson\' without spaces to DELETE.\n> ");
        scanf("%s", file_name);

        printf("\n%s", file_name);
        int conf_del = unlink(file_name);
        if (!conf_del)
        {
            printf("File is Deleted\n");
        }
        else
        {
            printf("File is not Deleted\n");
        }
        Press_any_key();
        system("cls");
        See_all_dir();
        break;
    case 4:
        See_all_dir();
        break;

    default:
        printf("Enter valid input\n> ");
        fflush(stdin);
        goto edit_file;
        break;
    }
}
void txt_edit()
{
    char fname[20];
    int txt_edit_sel;
open_other_txt:
    Show_dir();
    printf("\nEnter text file name without 'extension' to EDIT.\nEnter '000' for Back \n> ");
    scanf("%s", fname);
    system("cls");
    if (!strcmp(fname, "000"))
    {
        file_edit();
    }
    strcat(fname, ".txt");
    fptr = fopen(fname, "r");
    if (fname == NULL)
    {
        printf("\nFile doesn\'t exist!\n");
        Press_any_key();
        goto open_other_txt;
    }
    fclose(fptr);
    printf("\n1. Read it\'s Contents\n2. Add Contents\n3. Clear all Contents\n4. Back\n> ");
sel_txt_edit:
    scanf("%d", &txt_edit_sel);

    switch (txt_edit_sel)
    {
    case 1:
        system("cls");
        fflush(stdin);
        fptr = fopen(fname, "r");
        printf("\t\tCONTENTS IN '%s'\n", fname);
        printf("-----------------------------------------------------------\n\n");
        while (ch != EOF)
        {
            ch = fgetc(fptr);
            printf("%c", ch);
        }
        ch = 0;
        fclose(fptr);
        Press_any_key();
        system("cls");
        goto open_other_txt;
        break;
    case 2:

    add_text:
        fptr = fopen(fname, "a");
        char add_txt[1000];
        system("cls");
        printf("Enter the contents you want to add and press 'ENTER' after adding.\n> ");
        fflush(stdin);
        scanf("%[^\n]s", add_txt);
        fprintf(fptr, "\n%s", add_txt);
        fclose(fptr);
        int add_txt_again;
        printf("Do you want to add another line?\n1. YES\n2. NO\n> ");
    add_another_line:
        scanf("%d", &add_txt_again);
        if (add_txt_again == 1)
        {
            fflush(stdin);
            goto add_text;
        }
        else if (add_txt_again == 2)
        {
            printf("CONTENTS ADDED!\n");
            Press_any_key();
            system("cls");
            goto open_other_txt;
        }
        else
        {
            printf("Enter valid option\n> ");
            goto add_another_line;
        }
        break;
    case 3:
        printf("Do you really want to delete all contents in '%s'\nIf yes type'YES' else type 'NO'\n> ", fname);
        char conf_del[3];
    txt_del_conf:
        scanf("%s", conf_del);
        if (!strcmp(conf_del, "YES"))
        {
            fptr = fopen(fname, "w");
            fclose(fptr);
            printf("CONTENTS DELETED!\n");
        }
        else if (!strcmp(conf_del, "NO"))
        {
        }
        else
        {
            printf("Enter valid input!\n> ");
            fflush(stdin);
            goto txt_del_conf;
        }

        Press_any_key();
        system("cls");
        goto open_other_txt;

        break;
    case 4:
        goto open_other_txt;
        break;
    default:
        printf("Enter valid input\n> ");
        fflush(stdin);
        goto sel_txt_edit;
        break;
    }
}
void Show_dir()
{
    file_path();
    system("tree /f");
}
void See_all_dir()
{
    
    chdir(b_address);
    Show_dir();
    char dir_open[20];
open_dir:
    printf("\nOpen another directory or Exit\n");
    printf("Type the folder name to open\n");
    printf("Type \'000\' for Exit\n");
    printf("Type \'..\' for previous directory\n");
    printf("999. Options\n");
    printf("\n\nNOTE: To edit a 'txt' file you need to open that specific directory!\n> ");

    gets(dir_open);
    if (!(strcmp(dir_open, "000")))
    {
        system("cls");
        File_manager();
    }
    else if (!(strcmp(dir_open, "999")))
    {
        Management();
    }

    else
    {
        system("cls");
        chdir(dir_open);
        Show_dir();
        printf("\n");
        goto open_dir;
    }
}
void file_path()
{
    filepath = (char *)malloc(100 * sizeof(char));
    getcwd(filepath, 100);
    printf("\npath: %s \n", filepath);
}
