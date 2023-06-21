#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/// FOR HIDING CURSOR.
void hidecursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}
/// FOR ARROW CURSOR.
// realPosition is the position arrow is at.
// arrowPosition is the position where the user want the arrow to be.
void arrowHere(int realPosition, int arrowPosition)
{
    char arrow = 16;

    if (realPosition == arrowPosition)
    {
        printf("%c ", arrow);
    }

    else
        printf("  ");
}

/// for animation
void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/// Loading animation.
void loading()
{
    int time = 15;
    char c1 = 177, c2 = 219;
    gotoxy(98, 18);
    printf("Loading ... Please wait.");

    // 1st character print.
    int x1 = 99;
    while (x1 <= 120)
    {
        gotoxy(x1, 20);
        printf("%c", c1);
        x1++;
    }

    // 2nd character print.
    int x2 = 99;
    while (x2 <= 120)
    {
        gotoxy(x2, 20);
        printf("%c", c2);
        Sleep(time);
        x2++;
    }
}
void loading1()
{
    int time = 15;
    char c1 = 177, c2 = 219;
    gotoxy(98, 31);
    printf("Loading ... Please wait.");

    // 1st character print.
    int x1 = 99;
    while (x1 <= 120)
    {
        gotoxy(x1, 33);
        printf("%c", c1);
        x1++;
    }

    // 2nd character print.
    int x2 = 99;
    while (x2 <= 120)
    {
        gotoxy(x2, 33);
        printf("%c", c2);
        Sleep(time);
        x2++;
    }
}

/// Structures.
struct transaction_info
{
    char name[100];
    char sign;
    int amount;
    char date[10];
};
struct transaction_info t_user[505];

struct st
{
    char first_name[20];
    char last_name[20];
    char user_name[20];
    char password[20];
};
struct st user[15];

struct transaction
{
    char userID[20]; /// user name for each id
    int id_balance;  /// balance for each id
    int tran_num;    /// transaction number for each id
};
struct transaction id[15]; /// for multiple transaction

struct note
{
    char note_name[30];
    int num_note;
};
struct note note_user[15];

int exitFlag = 0; /// This flag is used for exiting the application.
int id_num = 0;   /// number of  id  currently saved
int balance;      /// total balance;
int n_num, num;   /// transaction ending point for each id
int id_pos;       /// id position
int tran_add;
int id_point;
char my_note[200][200];
char name[20];
char password[20];
int n_last, n_pos, n_start;
int sort_start,sort_end;

void login();
void signup();
void main_page();
void add_money();
void read_tran();
void write_tran();
void show_tran();
void remove_tran();
void remove_money();
void search_id();
void read_note();
void write_note();
void show_note();
void note_page();
void add_notes();
void remove_note();
void aboutUs();
void date_check();
void First_page();
void tran_sort();

int t_num; /// how many transaction done

int number; /// for remove_tran function

void read_tran() /// to read  transaction
{
    FILE *ch;

    ch = fopen("transaction.txt", "r");

    fscanf(ch, "%d", &id_num);

    int start;

    int i, j;

    num = 0;

    for (i = 0; i < id_num; i++)
    {
         start = 0;

        fscanf(ch, "%s", &id[i].userID);
        fscanf(ch, "%d", &id[i].id_balance);
        fscanf(ch, "%d", &id[i].tran_num);

        num += id[i].tran_num; /// tran ending point for each id

         if (strcmp(name, id[i].userID) == 0){ /// id balance check
            balance = id[i].id_balance;

            sort_start = num - id[i].tran_num ;
            sort_end = num;
        }

        start = num - id[i].tran_num;

        for (j = start; j < num; j++)
        {
            fscanf(ch, "%s", &t_user[j].name);
            fscanf(ch, " %c", &t_user[j].sign);
            fscanf(ch, "%d", &t_user[j].amount);
            fscanf(ch, " %s", &t_user[j].date);
        }
    }

    fclose(ch);
}

void write_tran() /// to write transactio
{
    FILE *ch;
    ch = fopen("transaction.txt", "w");

    if (ch == 0)
        printf("file doesnot exixit");

    num = 0;

    fprintf(ch, "%d\n", id_num);

    int i, j;

    for (i = 0; i < id_num; i++)
    {
        int start = 0;

        fprintf(ch, "%s\n", id[i].userID);
        fprintf(ch, "%d\n", id[i].id_balance);
        fprintf(ch, "%d\n", id[i].tran_num);

        num += id[i].tran_num; /// tran ending point for each id

        start = num - id[i].tran_num;

        for (j = start; j < num; j++)
        {
            fprintf(ch, "%s\n", t_user[j].name);
            fprintf(ch, "%c\n", t_user[j].sign);
            fprintf(ch, "%d\n", t_user[j].amount);
            fprintf(ch, "%s\n", t_user[j].date);
        }
    }

    fclose(ch);
}

void add_money() // 12
{
    char ch[] = "BACK";

    read_tran();
    search_id();

    for (int i = tran_add; i > id_point; i--)
    {
        t_user[i] = t_user[i - 1];
    }
    gotoxy(50, 7);

    printf("----------------------------------------------------------------------------------");
    gotoxy(50, 27);

    printf("----------------------------------------------------------------------------------");
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(50, i);
        printf("|");
    }
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(131, i);
        printf("|");
    }
    gotoxy(80, 9);
    printf("...............................");
    gotoxy(85, 8);
    printf("------Add money------");

    gotoxy(73, 11);
    printf("**Type and enter 'BACK' to get back**");

    gotoxy(54, 13);
    printf("Enter name : ");
    scanf("%s", &t_user[id_point].name);

    if (strcmp(t_user[id_point].name, ch) == 0)
    {
        system("cls");
        main_page();
    }

    gotoxy(54, 14);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(54, 15);
    printf("Enter amount : ");
    scanf("%d", &t_user[id_point].amount);

    if (t_user[id_point].amount > 100000)
    {
        gotoxy(80, 20);
        printf("**Maximum limit exceeded**");
        gotoxy(82, 21);
        printf("[ Max Limit One Lac ]");
        gotoxy(78, 24);
        printf(">> Press any key to continue <<");

        getch();
        system("CLS");
        add_money();
    }

    else
    {
        gotoxy(54, 16);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        gotoxy(54, 17);
        printf("Enter date (dd/mm/yyyy) format: ");
        scanf("%s", &t_user[id_point].date);

        date_check();

        t_user[id_point].sign = '+';

        gotoxy(54, 18);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        // gotoxy(18,14);
        //  printf("  => %d ",id_point);

        id[id_pos].id_balance += t_user[id_point].amount;

        id[id_pos].tran_num++;

         tran_sort();

        write_tran();

        loading(); // For loading animation.

        gotoxy(97, 23);
        printf("***Transaction successfull***");

        gotoxy(97, 24);
        printf("=>Press any key to get back<=");

        getch();
        system("CLS");

        main_page();
    }
}

void date_check() /// to check date
{

    char s[15];
    strcpy(s, t_user[id_point].date);
    int k = strlen(s);

    int day = (s[0] - '0') * 10 + (s[1] - '0');
    int month = (s[3] - '0') * 10 + (s[4] - '0');
    int year = (s[6] - '0') * 1000 + (s[7] - '0') * 100 + (s[8] - '0') * 10 + (s[9] - '0');

    if (k != 10 || day < 1 || day > 31 || month < 1 || month > 12 || year > 2023)
    {

        gotoxy(80, 20);
        printf(" Notice : Date invalid ");
        gotoxy(75, 23);

        printf(" >> Press any key to try again <<");

        getch();
        system("CLS");
        add_money();
    }
}
void remove_money() // 12
{
    char ch[] = "BACK";

    read_tran();
    search_id();

    for (int i = tran_add; i > id_point; i--)
    {
        t_user[i] = t_user[i - 1];
    }

    gotoxy(50, 7);

    printf("----------------------------------------------------------------------------------");
    gotoxy(50, 27);

    printf("----------------------------------------------------------------------------------");
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(50, i);
        printf("|");
    }
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(131, i);
        printf("|");
    }
    gotoxy(80, 9);
    printf("...............................");

    gotoxy(85, 8);
    printf("-----Remove money------");

    gotoxy(73, 11);
    printf("**Type and enter 'BACK' to get back**");
    gotoxy(54, 13);
    printf("Enter name : ");
    scanf("%s", &t_user[id_point].name);

    if (strcmp(t_user[id_point].name, ch) == 0)
    {
        system("cls");
        main_page();
    }

    gotoxy(54, 14);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(54, 15);
    printf("Enter amount : ");
    scanf("%d", &t_user[id_point].amount);
    gotoxy(54, 16);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(54, 17);
    printf("Enter date (dd/mm/yyyy) format: ");
    scanf("%s", &t_user[id_point].date);

    date_check();

    t_user[id_point].sign = '-';

    gotoxy(54, 18);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    /// to check if enough balance is available to remove

    if (id[id_pos].id_balance >= t_user[id_point].amount)
    {

        id[id_pos].id_balance -= t_user[id_point].amount;

        id[id_pos].tran_num++;

        tran_sort();

        write_tran();

        loading(); // For loading animation.

        gotoxy(97, 23);
        printf("**Transaction successfull**");
    }
    else
    {
        loading(); // For loading animation.

        gotoxy(97, 23);
        printf("**Insufficient balance**");
    }

    gotoxy(97, 24);
    printf("=>Press any key to get back<=");

    getch();
    system("CLS");

    main_page();
}

void remove_tran() // 1
{
    read_tran();

    num = 0;
    int start;

    int k = 0;

    for (int j = 0; j < id_num; j++)
    {
        num += id[j].tran_num;

        if (strcmp(name, id[j].userID) == 0)
        {

            // printf("done");

            start = num - id[j].tran_num;
            gotoxy(54, 9);
            printf("SI.");
            gotoxy(70, 9);
            printf("Name:-");
            gotoxy(99, 9);
            printf("Amount:-");
            gotoxy(121, 9);
            printf("Date:-");
            gotoxy(50, 6);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            gotoxy(50, 8);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            gotoxy(50, 10);
            printf("----------------------------------------------------------------------------------");
            gotoxy(50, 27);

            printf("----------------------------------------------------------------------------------");
            for (int i = 7; i <= 26; i++)
            {
                gotoxy(50, i);
                printf("|");
            }
            for (int i = 7; i <= 26; i++)
            {
                gotoxy(131, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(60, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(88, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(116, i);
                printf("|");
            }
            int f = 1;

            for (int i = start; i < num; i++)
            {

                gotoxy(53, f + 10);
                printf("%d . ", f);
                gotoxy(68, f + 10);
                printf("%s", t_user[i].name);
                gotoxy(98, f + 10);
                printf("%c", t_user[i].sign);
                gotoxy(99, f + 10);
                printf("%d  ", t_user[i].amount);
                gotoxy(119, f + 10);
                printf("%s", t_user[i].date);

                f++;
            }
            // k=f+10;
        }
        // k=f+10;
    }

    gotoxy(73, 7);

    printf("Enter ther transaction number you want to remove : ");

    scanf("%d", &number); /// number declared globally

    id[id_pos].tran_num--;

    for (int f = start + number; f < num; f++)
    {
        t_user[f - 1] = t_user[f];
    }

    write_tran();

    loading1(); // For loading animation.

    gotoxy(99, 36);
    printf(">> Press any key to get back <<");

    getch();
    system("CLS");

    main_page();
}

void show_tran() /// to print and show trasantion
{

    read_tran();

    num = 0;

    // write_tran();

    int k = 0;

    for (int j = 0; j < id_num; j++)
    {
        num += id[j].tran_num;


        if (strcmp(name, id[j].userID) == 0)
        {

            // printf("done");

            int start = num - id[j].tran_num;
            gotoxy(54, 9);
            printf("SI.");
            gotoxy(70, 9);
            printf("Name:-");
            gotoxy(99, 9);
            printf("Amount:-");
            gotoxy(121, 9);
            printf("Date:-");
            gotoxy(50, 6);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            gotoxy(50, 8);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            gotoxy(50, 10);
            printf("----------------------------------------------------------------------------------");
            gotoxy(50, 27);

            printf("----------------------------------------------------------------------------------");
            for (int i = 6; i <= 27; i++)
            {
                gotoxy(50, i);
                printf("|");
            }
            for (int i = 6; i <= 27; i++)
            {
                gotoxy(131, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(60, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(88, i);
                printf("|");
            }
            for (int i = 8; i <= 27; i++)
            {
                gotoxy(116, i);
                printf("|");
            }

            int f = 1;

            for (int i = start; i < num; i++)
            {

                gotoxy(53, f + 10);
                printf("%d ", f);
                gotoxy(68, f + 10);
                printf("%s", t_user[i].name);
                gotoxy(98, f + 10);
                printf("%c", t_user[i].sign);
                gotoxy(99, f + 10);
                printf("%d  ", t_user[i].amount);
                gotoxy(119, f + 10);
                printf("%s", t_user[i].date);

                f++;
            }
            int k = f + 10;
        }
    }

    gotoxy(78, 7);
    printf(">> Press any key to get back <<");

    getch();
    system("CLS");

    main_page();
}

void tran_sort()
{
    for(int i = sort_start; i < sort_end;i++)
        for(int j = i+1 ;j<= sort_end;j++)
      {
           char s[15];
    strcpy(s, t_user[i].date);
    int size1 = strlen(s);

    int day1 = (s[0] - '0') * 10 + (s[1] - '0');
    int month1 = (s[3] - '0') * 10 + (s[4] - '0');
    int year1 = (s[6] - '0') * 1000 + (s[7] - '0') * 100 + (s[8] - '0') * 10 + (s[9] - '0');



           char p[15];
    strcpy(s, t_user[j].date);
    int size2 = strlen(p);

    int day2 = (p[0] - '0') * 10 + (p[1] - '0');
    int month2 = (p[3] - '0') * 10 + (p[4] - '0');
    int year2 = (p[6] - '0') * 1000 + (p[7] - '0') * 100 + (p[8] - '0') * 10 + (p[9] - '0');


     if(year1>year2)
        {
            t_user[500] = t_user[i];
            t_user[i] = t_user[j];
            t_user[j] = t_user[500];

        }
     else if(month1>month2)
        {
            t_user[500] = t_user[i];
            t_user[i] = t_user[j];
            t_user[j] = t_user[500];

        }
     else if(day1>day2)
        {
            t_user[500] = t_user[i];
            t_user[i] = t_user[j];
            t_user[j] = t_user[500];

        }
      }


}



void read_note()
{
    FILE *ch;
    ch = fopen("notes.txt", "r");

    num = 0;

    fscanf(ch, "%d", &id_num);

    int start = 0;

    for (int i = 0; i < id_num; i++)
    {

        fscanf(ch, "%s", note_user[i].note_name);
        fscanf(ch, "%d", &note_user[i].num_note);

        num += note_user[i].num_note;
        start = num - note_user[i].num_note;

        if (strcmp(name, note_user[i].note_name) == 0)
        {
            n_last = num;
            n_pos = i;
            n_start = start;
            // start = num - note_user[i].num_note ;
        }

        for (int j = start; j < num; j++)
        {

            fscanf(ch, " %[^\n]", my_note[j]);
        }
    }

    fclose(ch);
}

void write_note()
{
    FILE *ch;
    ch = fopen("notes.txt", "w");

    fprintf(ch, "%d\n", id_num);

    int start = 0, num = 0;

    for (int i = 0; i < id_num; i++)
    {
        fprintf(ch, "%s\n", note_user[i].note_name);
        fprintf(ch, "%d\n", note_user[i].num_note);

        num += note_user[i].num_note;
        start = num - note_user[i].num_note;

        for (int j = start; j < num; j++)
        {
            fprintf(ch, "%s\n", my_note[j]);
        }
    }

    fclose(ch);
}

void show_note()
{

    read_note();

    num = 0;

    int start = 0, k = 8;

    for (int i = 0; i < id_num; i++)
    {
        num += note_user[i].num_note;

        if (strcmp(name, note_user[i].note_name) == 0)
        {
            n_last = num;
            n_pos = i;
            start = num - note_user[i].num_note;

            int s = 1; /// for serial
            gotoxy(17, 5);

            printf("*****************************************************************************************************************");
            gotoxy(17, 7);

            printf("*****************************************************************************************************************");
            gotoxy(17, 30);

            printf("*****************************************************************************************************************");
            for (int i = 5; i <= 30; i++)
            {
                gotoxy(16, i);
                printf(".");
            }
            for (int i = 5; i <= 30; i++)
            {
                gotoxy(130, i);
                printf(".");
            }
            gotoxy(54, 6);

            printf("|| My notes ||");

            for (int j = start; j < num; j++)
            {
                gotoxy(20, k);
                k++;
                printf("%d . %s\n", s, my_note[j]);
                s++;
            }
        }
    }

    gotoxy(46, k + 5);
    printf("=> Press any key to get back <=");
    gotoxy(43, k + 6);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();

    system("CLS");

    note_page();
}

void note_page() /// note page
{
    hidecursor();
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {

        gotoxy(50, 9);
        printf("*********************************************************************************");
        gotoxy(50, 10);
        printf("                               My diary                                          ");
        gotoxy(50, 28);

        printf("*********************************************************************************");
        for (int i = 9; i <= 28; i++)
        {
            gotoxy(50, i);
            printf(".");
        }
        for (int i = 9; i <= 28; i++)
        {
            gotoxy(131, i);
            printf(".");
        }
        gotoxy(50, 11);

        printf("**********************************************************************************");
        gotoxy(50, 29);

        printf("**********************************************************************************");
        for (int i = 11; i <= 29; i++)
        {
            gotoxy(50, i);
            printf(".");
        }
        for (int i = 11; i <= 29; i++)
        {
            gotoxy(131, i);
            printf(".");
        }

        gotoxy(53, 14);
        arrowHere(1, position);
        printf(" Show notes");

        gotoxy(53, 16);
        arrowHere(2, position);
        printf(" Add note");

        gotoxy(53, 18);
        arrowHere(3, position);
        printf(" Remove note");

        gotoxy(53, 20);
        arrowHere(4, position);
        printf(" Back to Main menu.");

        keyPressed = getch();

        if (keyPressed == 80 && position != 4)
            position++;

        else if (keyPressed == 72 && position != 1)
            position--;

        else
            position = position;

        /// Operations.

        if (position == 1 && keyPressed == 13)
        {
            system("cls");
            show_note();
        }

        if (position == 2 && keyPressed == 13)
        {
            system("cls");
            add_notes();
        }

        if (position == 3 && keyPressed == 13)
        {
            system("cls");
            remove_note();
        }

        else if (position == 4 && keyPressed == 13)
        {
            system("cls");
            main_page();
        }
    }
}

void add_notes() // 1
{
    read_note();
    gotoxy(50, 7);

    printf("..................................................................................");

    gotoxy(85, 8);
    printf("|| Add notes ||");

    gotoxy(50, 27);
    printf("..................................................................................");

    gotoxy(50, 9);
    printf("..................................................................................");
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(50, i);
        printf(".");
    }
    for (int i = 7; i <= 27; i++)
    {
        gotoxy(131, i);
        printf(".");
    }

    gotoxy(54, 12);
    printf("|| start from below || ");

    gotoxy(54, 14);
    printf("=>");

    scanf(" %[^\n]", my_note[n_last]); /// n last from read note

    note_user[n_pos].num_note++;

    for (int i = num; i > n_last; i--)
        strcpy(my_note[i], my_note[i - 1]);

    write_note();

    loading(); // For loading animation.

    gotoxy(95, 22);
    printf(">> Note added successfully <<");

    gotoxy(95, 24);
    printf("=> Press any key to get back <=");

    getch();
    system("CLS");

    note_page();
}

void remove_note() // 1
{
    read_note();
    num = 0;

    int start = 0, k = 4, s, n;

    for (int i = 0; i < id_num; i++)
    {
        num += note_user[i].num_note;

        if (strcmp(name, note_user[i].note_name) == 0)
        {
            n_last = num;
            n_pos = i;
            start = num - note_user[i].num_note;
            //  printf("%d",note_user[i].num_note);

            s = 1; /// for serial

            for (int j = start; j < num; j++)
            {
                gotoxy(10, k);
                k++;
                printf("%d . %s\n", s, my_note[j]);
                s++;
            }
        }
    }
    gotoxy(10, s + 4);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(10, s + 5);
    printf("      ** Enter the serial of the note u want to remove **");
    gotoxy(10, s + 6);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(10, s + 7);
    printf("Enter :");
    scanf("%d", &n);
    gotoxy(10, s + 8);

    printf("~~~~~~~~~~");

    note_user[n_pos].num_note--;

    for (int i = n_start + n - 1; i < num; i++)
        strcpy(my_note[i], my_note[i + 1]);

    write_note();

    loading(); // For loading animation.

    gotoxy(50, s + 10);
    printf(">> Note removed successfully <<");
    gotoxy(52, s + 12);
    printf(">> PRESS ANY KEY TO GET BACK <<");

    getch();
    system("CLS");

    note_page();
}

void read_data() // 1
{

    FILE *ch;
    ch = fopen("sign_up.txt", "r");
    fscanf(ch, "%d", &id_num);
    for (int i = 0; i < id_num; i++)
    {
        fscanf(ch, "%s", &user[i].first_name);
        fscanf(ch, "%s", &user[i].last_name);
        fscanf(ch, "%s", &user[i].user_name);
        fscanf(ch, "%s", &user[i].password);
    }

    fclose(ch);
}

void write_data() // 1
{
    FILE *ch;
    ch = fopen("sign_up.txt", "w");

    //  id_num++;
    fprintf(ch, "%d\n", id_num);
    for (int i = 0; i < id_num; i++)
    {
        fprintf(ch, "%s\n", user[i].first_name);
        fprintf(ch, "%s\n", user[i].last_name);
        fprintf(ch, "%s\n", user[i].user_name);
        fprintf(ch, "%s\n", user[i].password);
    }

    fclose(ch);
}

void search_id() // 1
{
    read_tran();

    int i;

    id_point = 0;

    tran_add = 0;

    for (i = 0; i < id_num; i++)
    {
        tran_add += id[i].tran_num;

        if (strcmp(name, id[i].userID) == 0)
        {

            id_pos = i;
            id_point = tran_add;
        }
    }
}
void EXIT()
{
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {
        system("cls");
        gotoxy(50, 12);

        printf("..................................................................................");
        gotoxy(50, 27);

        printf("..................................................................................");
        for (int i = 12; i <= 27; i++)
        {
            gotoxy(50, i);
            printf(".");
        }
        for (int i = 12; i <= 27; i++)
        {
            gotoxy(131, i);
            printf(".");
        }
        gotoxy(70, 14);
        printf("Do you want to exit?!");

        gotoxy(75, 16);
        arrowHere(1, position);
        printf("YES.");

        gotoxy(75, 18);
        arrowHere(2, position);
        printf("NO.");

        keyPressed = getch();

        if (keyPressed == 80 && position != 2)
            position++;

        else if (keyPressed == 72 && position != 1)
            position--;

        else
            position = position;

        /// Operations.
        if (position == 1 && keyPressed == 13)
        {
            system("cls");
            exitFlag = 1;
            return; /// This will return to the main_page function.
        }

        else if (position == 2 && keyPressed == 13)
        {
            system("cls");
            main_page();
        }
    }
}



void main_page() /// account main page or landing page
{
    read_tran();
    hidecursor();
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {

        /// from read_tran
        gotoxy(50, 33);
        printf("-----------------------------------------------------------------------");
        gotoxy(50, 10);
        printf("-----------------------------------------------------------------------");
        for (int i = 11; i <= 32; i++)
        {

            gotoxy(50, i);
            printf("|");
        }
        for (int i = 11; i <= 32; i++)
        {

            gotoxy(120, i);
            printf("|");
        }

        gotoxy(54, 12);
        printf("|| Balance : %d", balance); /// from read_tran
        gotoxy(54, 13);
        printf("~~~~~~~~~~~~~~~~~");
        gotoxy(53, 15);
        printf("-------------------------------");
        gotoxy(53, 17);
        printf("-------------------------------");
        gotoxy(53, 19);
        printf("-------------------------------");
        gotoxy(53, 21);
        printf("-------------------------------");
        gotoxy(53, 23);
        printf("-------------------------------");
        gotoxy(53, 25);
        printf("-------------------------------");
        gotoxy(53, 27);
        printf("-------------------------------");
        gotoxy(53, 29);
        printf("-------------------------------");
        gotoxy(53, 31);
        printf("-------------------------------");
        /// gotoxy(18,6);
        /// printf("WELCOME Ekhane naam ta show kora user er", )!!

        gotoxy(53, 14);
        printf("What do you want do today!");

        gotoxy(53, 16);
        arrowHere(1, position);
        printf("1. Add money");

        gotoxy(53, 18);
        arrowHere(2, position);
        printf("2. Remove money");

        gotoxy(53, 20);
        arrowHere(3, position);
        printf("3. View Transaction History");

        gotoxy(53, 22);
        arrowHere(4, position);
        printf("4. Delete Transaction ");

        gotoxy(53, 24);
        arrowHere(5, position);
        printf("5. My Diary ");

        gotoxy(53, 26);
        arrowHere(6, position);
        printf("6. Switch account ");

        gotoxy(53, 28);
        arrowHere(7, position);
        printf("7. About us ");

        gotoxy(53, 30);
        arrowHere(8, position);
        printf("8. Exit ");

        keyPressed = getch();

        if (keyPressed == 80 && position != 8)
            position++;

        else if (keyPressed == 72 && position != 1)
            position--;

        else
            position = position;

        /// Operations.
        if (position == 1 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            add_money();
        }

        else if (position == 2 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            remove_money();
        }

        else if (position == 3 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            show_tran();
        }

        else if (position == 4 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            remove_tran();
        }

        else if (position == 5 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            note_page();
        }

        else if (position == 6 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            login();
        }

        else if (position == 7 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            aboutUs();
        }

        else if (position == 8 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            EXIT();

            if (exitFlag == 1)
                return;
        }
    }
}

void login() /// login function
{
    char ch[] = "BACK";

    gotoxy(77, 7);

    printf("------------------------------");
    gotoxy(77, 9);

    printf("------------------------------");
    gotoxy(76, 7);
    printf("|");
    gotoxy(76, 8);
    printf("|");
    gotoxy(76, 9);
    printf("|");
    gotoxy(107, 7);
    printf("|");
    gotoxy(107, 8);
    printf("|");
    gotoxy(107, 9);
    printf("|");
    gotoxy(50, 12);

    printf("----------------------------------------------------------------------------------");
    gotoxy(50, 27);

    printf("----------------------------------------------------------------------------------");
    for (int i = 13; i <= 26; i++)
    {
        gotoxy(50, i);
        printf("|");
    }
    for (int i = 13; i <= 26; i++)
    {
        gotoxy(131, i);
        printf("|");
    }
    gotoxy(84, 8);
    printf(" <<<<<LOGIN>>>>> ");
    // gotoxy(70, 13);
    // printf("**Please press ESC and then Enter to go back**");
    char login_user_name[30], login_password[30];

    gotoxy(73, 13);
    printf("**Type and enter 'BACK' to get back**");

    gotoxy(56, 15);
    printf("1.Enter user name : ");
    scanf(" %s", &login_user_name);

    /// For going back to front page.
    if (strcmp(login_user_name, ch) == 0)
    {
        system("cls");
        First_page();
    }

    gotoxy(56, 16);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~");

    /// Maksing password.
    int numOfElement = 0;
    char mask;
    gotoxy(56, 17);
    printf("2.Enter password  : ");
    while ((mask = getch()) != 13)
    {
        login_password[numOfElement] = mask;
        numOfElement++;
        printf("*");
    }
    login_password[numOfElement] = '\0';

    gotoxy(56, 18);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~");
    read_data();

    int k = 0; /// position of the userID
    /// initially kept 0

    for (int i = 0; i < id_num; i++)
    {
        if (strcmp(login_user_name, user[i].user_name) == 0)
            k = i;
    }

    /// comparing id password

    int a = strcmp(login_user_name, user[k].user_name);
    int b = strcmp(login_password, user[k].password);

    if (a == 0 && b == 0)
    {

        strcpy(name, login_user_name);

        loading(); // For loading animation.

        gotoxy(99, 22);
        printf("**Succesful login**");

        gotoxy(97, 23);
        printf("Press any key to continue");

        getch();
        system("CLS");

        main_page();

        if (exitFlag == 1)
            return; /// This will return to the First_page function.
    }

    else
    {
        loading(); // For loading animation.
        gotoxy(94, 22);
        printf("**Incorrect user name or password**");

        gotoxy(101, 23);
        printf("*please try again*");
        gotoxy(97, 24);
        printf("Press any key to try again ");

        getch();
        system("CLS");
        login();
    }

    getch();
}

void signup() /// sign up function
{

    char ch[] = "BACK";

    char first_name[20];
    char last_name[20];
    char user_name[20];
    char password[20];

    char any_key;

    read_data();
    read_tran();
    read_note();
    gotoxy(77, 7);

    printf("------------------------------");
    gotoxy(77, 9);

    printf("------------------------------");

    gotoxy(77, 7);
    printf("|");
    gotoxy(77, 8);
    printf("|");
    gotoxy(77, 9);
    printf("|");
    gotoxy(107, 7);
    printf("|");
    gotoxy(107, 8);
    printf("|");
    gotoxy(107, 9);
    printf("|");
    gotoxy(50, 12);

    printf("----------------------------------------------------------------------------------");
    gotoxy(50, 28);

    printf("----------------------------------------------------------------------------------");
    for (int i = 13; i <= 27; i++)
    {
        gotoxy(50, i);
        printf("|");
    }
    for (int i = 13; i <= 27; i++)
    {
        gotoxy(131, i);
        printf("|");
    }
    gotoxy(84, 8);

    printf("<<<<<SIGN UP>>>>>");

    gotoxy(75, 14);
    printf("**Type and enter 'BACK' to get back**");

    gotoxy(56, 16);
    printf("1.Enter first name : ");
    scanf("%s", &user[id_num].first_name);

    if (strcmp(user[id_num].first_name, ch) == 0)
        First_page();

    gotoxy(56, 17);
    printf("~~~~~~~~~~~~~~~~~~~~");

    gotoxy(56, 18);
    printf("2.Enter last name  : ");
    scanf("%s", &user[id_num].last_name);
    gotoxy(56, 19);
    printf("~~~~~~~~~~~~~~~~~~~~");
    gotoxy(56, 20);
    printf("3.Enter user name  : ");
    scanf("%s", &user[id_num].user_name);
    gotoxy(56, 21);
    printf("~~~~~~~~~~~~~~~~~~~~");

    /// Maksing password.
    int numOfElement = 0;
    char mask;
    gotoxy(56, 22);
    printf("4.Enter password   : ");

    while ((mask = getch()) != 13)
    {
        user[id_num].password[numOfElement] = mask;
        numOfElement++;
        printf("*");
    }
    user[id_num].password[numOfElement] = '\0';

    gotoxy(56, 23);
    printf("~~~~~~~~~~~~~~~~~~~~");
    int i;

    for (i = 0; i < id_num; i++) /// to check if the userID is taken
    {

        if (strcmp(user[id_num].user_name, user[i].user_name) == 0)
        {

            system("CLS");
            gotoxy(50, 12);

            printf("..................................................................................");
            gotoxy(50, 28);

            printf("..................................................................................");
            for (int i = 12; i <= 28; i++)
            {
                gotoxy(50, i);
                printf(".");
            }
            for (int i = 12; i <= 28; i++)
            {
                gotoxy(131, i);
                printf(".");
            }
            gotoxy(84, 13);
            printf("-----user name already taken-----");
            gotoxy(82, 14);
            printf("***********************************");
            gotoxy(90, 15);
            printf("Try another one >>>>");
            gotoxy(60, 18);
            printf("--------------------");

            gotoxy(60, 17);
            printf("3.Enter user name  : ");
            scanf("%s", &user[id_num].user_name);
            i = 0; /// to check if the new userID is taken
        }
    }

    strcpy(id[id_num].userID, user[id_num].user_name);
    id[id_num].id_balance = 0;
    id[id_num].tran_num = 0;

    strcpy(note_user[id_num].note_name, user[id_num].user_name);
    note_user[id_num].num_note = 0;

    id_num++;

    // strcpy(password,user[id_num].password);
    write_data();
    write_tran();
    write_note();

    loading(); // For loading animation.

    gotoxy(99, 22);
    printf("**sign up succesfull**");

    gotoxy(62, 27);
    printf("Note : please login using your user name and password\n");

    gotoxy(97, 23);
    printf("Press any key to continue!!");
    getch();

    system("CLS");

    login();
}

void First_page() // 12
{
    //  system("CLS");

    hidecursor();
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {

        hidecursor();
        gotoxy(65, 11);
        printf("------------------------------------------------------");

        gotoxy(65, 13);
        printf("------------------------------------------------------");
        gotoxy(65, 26);
        printf("------------------------------------------------------");
        for (int i = 12; i < 26; i++)
        {
            gotoxy(65, i);
            printf("|");
        }
        for (int i = 12; i < 26; i++)
        {
            gotoxy(118, i);
            printf("|");
        }

        gotoxy(84, 12);
        printf("Welcome to HALKHATA");
        gotoxy(72, 16);
        arrowHere(1, position);
        printf("Login\n");
        gotoxy(72, 18);
        arrowHere(2, position);
        printf("Sign up\n\n");
        gotoxy(72, 16);

        keyPressed = getch();

        if (keyPressed == 80 && position != 2)
            position++;

        else if (keyPressed == 72 && position != 1)
            position--;

        else
            position = position;

        if (position == 2 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            signup();
        }
        else if (position == 1 && keyPressed == 13)
        {
            system("cls");
            hidecursor();
            login();

            if (exitFlag == 1)
                return; /// This will return to the main function.
        }
    }
}

int main()
{
    hidecursor();
    system("color 0e");
    First_page();

    return 0;
}

/// Creators info
void aboutUs()
{
    char UD = 179;
    char LR = 22;
    char sign = 4;

    gotoxy(69, 12);
    printf("ABOUT US");

    // For box around about us.
    for (int x = 63; x <= 84; x++)
    {
        gotoxy(x, 11);
        printf("%c", LR);
    }

    for (int x = 63; x <= 84; x++)
    {
        gotoxy(x, 13);
        printf("%c", LR);
    }

    gotoxy(62, 12);
    printf("%c", UD);

    gotoxy(85, 12);
    printf("%c", UD);
    ;

    // Rakin info.
    gotoxy(30, 15);
    printf("%c Shafkat Islam Rakin", sign);
    gotoxy(32, 16);
    printf("ID: C231106");
    gotoxy(32, 17);
    printf("Dept. of CSE");
    gotoxy(32, 18);
    printf("IIUC.");

    for (int y = 15; y <= 18; y++)
    {
        gotoxy(53, y);
        printf("%c", UD);
    }

    // Istiyaq info.
    gotoxy(55, 15);
    printf("%c Sayed Shahriar Istiyaq", sign);
    gotoxy(57, 16);
    printf("ID: C231107");
    gotoxy(57, 17);
    printf("Dept. of CSE");
    gotoxy(57, 18);
    printf("IIUC.");

    for (int y = 15; y <= 18; y++)
    {
        gotoxy(80, y);
        printf("%c", UD);
    }

    // Nabiul info
    gotoxy(82, 15);
    printf("%c Nabiul Faisal Tawfick", sign);
    gotoxy(84, 16);
    printf("ID: C231110");
    gotoxy(84, 17);
    printf("Dept. of CSE");
    gotoxy(84, 18);
    printf("IIUC.");

    for (int y = 15; y <= 18; y++)
    {
        gotoxy(104, y);
        printf("%c", UD);
    }

    // Ifty info
    gotoxy(106, 15);
    printf("%c Mohammad Iftikar Hasan", sign);
    gotoxy(108, 16);
    printf("ID: C231083");
    gotoxy(108, 17);
    printf("Dept. of CSE");
    gotoxy(108, 18);
    printf("IIUC.");

    gotoxy(55, 22);
    printf(">>>Press any key to go back<<<");
    getch();

    system("cls");

    main_page();
}
