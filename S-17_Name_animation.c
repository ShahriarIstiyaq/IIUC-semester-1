#include <stdio.h>
#include <windows.h>
#include <unistd.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    system("cls");
    char c = 4;
    int time = 100;

    /// 1: Biya Bari ;)

    for (int i = 1; i <= 30; i++)
    {
        gotoxy(i, 15);
        printf("----%c",16);
        fflush(stdout);

        Sleep(time);
        gotoxy(i, 15);
        printf("       ");
        fflush(stdout);
    }

    Sleep(10);
    gotoxy(30, 15);
    printf("WELCOME TO THE SHOW-");
    Sleep(2000);
    system("cls");


    /// Printing I:

    for (int x1 = 1, x2 = 1; x1 <= 7, x2 <= 7; x1++, x2++) // From x = 1 to x = 7 & Y = 1 and Y = 7
    {

        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 6; y1++) // X = 4.
    {

        gotoxy(4, y1);
        printf("%c", c);
    }

    Sleep(time);
    system("cls");

    /// Printing S:

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // 'S' started in x = 14 & ended in x = 20
                                              // y = 1;
    {

        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 4; y1++) // 1st carve of "S" is from y =1 to y = 4.
                                    // X = 14.
    {

        gotoxy(15 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 15 - 1; x1 <= 21 - 1; x1++) // y = 4.
                                              // 2nd carve of "S" is from x = 14 to x = 20
    {

        gotoxy(x1, 4);
        printf("%c", c);
    }

    for (int y1 = 4; y1 <= 7; y1++) // X = 20
                                    // 3rd carve of "S" is from y = 4 to y = 7
    {

        gotoxy(21 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // At Y = 7
                                              // 4th carve of "S" is from x = 20 to x = 14.
    {
        gotoxy(x1, 7);
        printf("%c", c);
    }

    Sleep(time);
    system("cls");

    /// Printing T:

    for (int x = 26; x <= 32; x++) // From x = 26 to x = 32
                                   // Y = 1.
    {

        gotoxy(x, 1);
        printf("%c", c);
    }

    for (int y = 2; y <= 7; y++) // X= 29 and From y = 2 to y = 7
    {
        gotoxy(29, y);
        printf("%c", c);
    }

    Sleep(100);
    system("cls");

    /// Printing I:

    for (int x1 = 37; x1 <= 43; x1++) // From x = 37 t x = 43 & Y = 1 and Y = 7.
    {
        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x1, 7);
        printf("%c", c);
    }

    for (int y = 1; y <= 7; y++) // X = 40 & From y = 1 to y = 7
    {
        gotoxy(40, y);
        printf("%c", c);
    }

    Sleep(time);
    system("cls");

    /// Printing Y:

    for (int x1 = 48, x2 = 54, y = 1; x1 <= 51, x2 >= 51, y <= 4; x1++, x2--, y++) // Ended in Y = 4, X = 54
    {

        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int y = 4; y <= 7; y++) // Ended in X = 51 , Y = 7.
    {
        gotoxy(51, y);
        printf("%c", c);
    }

    Sleep(time);
    system("cls");

    /// Printing A:

    for (int x1 = 63, x2 = 63, y = 1; x1 >= 60, x2 <= 66, y <= 7; x1--, x2++, y++) // Form X = 60 to X = 66
                                                                                   // From Y = 1 to Y = 7
    {

        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int x1 = 60; x1 <= 66; x1++) // From x = 60 to x = 66 and Y = 4
    {

        gotoxy(x1, 4);
        printf("%c", c);
    }
    Sleep(time);
    system("cls");

    /// Printing Q:

    for (int x1 = 77; x1 >= 73; x1--) // From x = 73 to x = 77
                                      // Y = 1
    {
        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 2; y1 <= 6; y1++) // Form y = 2 to y = 6
                                    //  X = 72.
    {
        gotoxy(72, y1);
        printf("%c", c);
    }

    for (int x2 = 73; x2 <= 77 - 2; x2++) // Form x = 73 to x = 75
                                          //  Y = 7.
    {
        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y2 = 6; y2 >= 2; y2--) // From y = 2 to y =6
                                    //  X = 78
    {

        gotoxy(78, y2);
        printf("%c", c);
    }

    for (int x = 74, y = 4; x <= 80, y <= 8; x++, y++)
    {

        gotoxy(x, y);
        printf("%c", c);
    }
    Sleep(time);
    system("cls");




    /// Main Process:

    /// Printing I:

    for (int x1 = 1, x2 = 1; x1 <= 7, x2 <= 7; x1++, x2++) // From x = 1 to x = 7 & Y = 1 and Y = 7
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 6; y1++) // X = 4.
    {

        Sleep(time);
        gotoxy(4, y1);
        printf("%c", c);
    }

    /// Printing S:

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // 'S' started in x = 14 & ended in x = 20
                                              // y = 1;
    {

        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 4; y1++) // 1st carve of "S" is from y =1 to y = 4.
                                    // X = 14.
    {

        Sleep(time);
        gotoxy(15 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 15 - 1; x1 <= 21 - 1; x1++) // y = 4.
                                              // 2nd carve of "S" is from x = 14 to x = 20
    {

        Sleep(time);
        gotoxy(x1, 4);
        printf("%c", c);
    }

    for (int y1 = 4; y1 <= 7; y1++) // X = 20
                                    // 3rd carve of "S" is from y = 4 to y = 7
    {

        Sleep(time);
        gotoxy(21 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // At Y = 7
                                              // 4th carve of "S" is from x = 20 to x = 14.
    {
        Sleep(time);
        gotoxy(x1, 7);
        printf("%c", c);
    }

    /// Printing T:

    for (int x = 26; x <= 32; x++) // From x = 26 to x = 32
                                   // Y = 1.
    {
        Sleep(time);
        gotoxy(x, 1);
        printf("%c", c);
    }

    for (int y = 2; y <= 7; y++) // X= 29 and From y = 2 to y = 7
    {
        Sleep(time);
        gotoxy(29, y);
        printf("%c", c);
    }

    /// Printing I:

    for (int x1 = 37; x1 <= 43; x1++) // From x = 37 t x = 43 & Y = 1 and Y = 7.
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x1, 7);
        printf("%c", c);
    }

    for (int y = 1; y <= 7; y++) // X = 40 & From y = 1 to y = 7
    {
        Sleep(time);
        gotoxy(40, y);
        printf("%c", c);
    }

    /// Printing Y:

    for (int x1 = 48, x2 = 54, y = 1; x1 <= 51, x2 >= 51, y <= 4; x1++, x2--, y++) // Ended in Y = 4, X = 54
    {

        Sleep(time);
        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int y = 4; y <= 7; y++) // Ended in X = 51 , Y = 7.
    {
        Sleep(time);
        gotoxy(51, y);
        printf("%c", c);
    }

    /// Printing A:

    for (int x1 = 63, x2 = 63, y = 1; x1 >= 60, x2 <= 66, y <= 7; x1--, x2++, y++) // Form X = 60 to X = 66
                                                                                   // From Y = 1 to Y = 7
    {

        Sleep(time);
        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int x1 = 60; x1 <= 66; x1++) // From x = 60 to x = 66 and Y = 4
    {

        Sleep(time);
        gotoxy(x1, 4);
        printf("%c", c);
    }

    /// Printing Q:

    for (int x1 = 77; x1 >= 73; x1--) // From x = 73 to x = 77
                                      // Y = 1
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 2; y1 <= 6; y1++) // Form y = 2 to y = 6
                                    //  X = 72.
    {
        Sleep(time);
        gotoxy(72, y1);
        printf("%c", c);
    }

    for (int x2 = 73; x2 <= 77 - 2; x2++) // Form x = 73 to x = 75
                                          //  Y = 7.
    {
        Sleep(time);
        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y2 = 6; y2 >= 2; y2--) // From y = 2 to y =6
                                    //  X = 78
    {

        Sleep(time);
        gotoxy(78, y2);
        printf("%c", c);
    }

    for (int x = 74, y = 4; x <= 80, y <= 8; x++, y++)
    {

        Sleep(time);
        gotoxy(x, y);
        printf("%c", c);
    }








    ///Fun Part 2 : changing character.

    c = 219;
    /// Printing I:

    for (int x1 = 1, x2 = 1; x1 <= 7, x2 <= 7; x1++, x2++) // From x = 1 to x = 7 & Y = 1 and Y = 7
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 6; y1++) // X = 4.
    {

        Sleep(time);
        gotoxy(4, y1);
        printf("%c", c);
    }

    /// Printing S:

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // 'S' started in x = 14 & ended in x = 20
                                              // y = 1;
    {

        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 1; y1 <= 4; y1++) // 1st carve of "S" is from y =1 to y = 4.
                                    // X = 14.
    {

        Sleep(time);
        gotoxy(15 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 15 - 1; x1 <= 21 - 1; x1++) // y = 4.
                                              // 2nd carve of "S" is from x = 14 to x = 20
    {

        Sleep(time);
        gotoxy(x1, 4);
        printf("%c", c);
    }

    for (int y1 = 4; y1 <= 7; y1++) // X = 20
                                    // 3rd carve of "S" is from y = 4 to y = 7
    {

        Sleep(time);
        gotoxy(21 - 1, y1);
        printf("%c", c);
    }

    for (int x1 = 21 - 1; x1 >= 15 - 1; x1--) // At Y = 7
                                              // 4th carve of "S" is from x = 20 to x = 14.
    {
        Sleep(time);
        gotoxy(x1, 7);
        printf("%c", c);
    }

    /// Printing T:

    for (int x = 26; x <= 32; x++) // From x = 26 to x = 32
                                   // Y = 1.
    {
        Sleep(time);
        gotoxy(x, 1);
        printf("%c", c);
    }

    for (int y = 2; y <= 7; y++) // X= 29 and From y = 2 to y = 7
    {
        Sleep(time);
        gotoxy(29, y);
        printf("%c", c);
    }

    /// Printing I:

    for (int x1 = 37; x1 <= 43; x1++) // From x = 37 t x = 43 & Y = 1 and Y = 7.
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);

        gotoxy(x1, 7);
        printf("%c", c);
    }

    for (int y = 1; y <= 7; y++) // X = 40 & From y = 1 to y = 7
    {
        Sleep(time);
        gotoxy(40, y);
        printf("%c", c);
    }

    /// Printing Y:

    for (int x1 = 48, x2 = 54, y = 1; x1 <= 51, x2 >= 51, y <= 4; x1++, x2--, y++) // Ended in Y = 4, X = 54
    {

        Sleep(time);
        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int y = 4; y <= 7; y++) // Ended in X = 51 , Y = 7.
    {
        Sleep(time);
        gotoxy(51, y);
        printf("%c", c);
    }

    /// Printing A:

    for (int x1 = 63, x2 = 63, y = 1; x1 >= 60, x2 <= 66, y <= 7; x1--, x2++, y++) // Form X = 60 to X = 66
                                                                                   // From Y = 1 to Y = 7
    {

        Sleep(time);
        gotoxy(x1, y);
        printf("%c", c);

        gotoxy(x2, y);
        printf("%c", c);
    }

    for (int x1 = 60; x1 <= 66; x1++) // From x = 60 to x = 66 and Y = 4
    {

        Sleep(time);
        gotoxy(x1, 4);
        printf("%c", c);
    }

    /// Printing Q:

    for (int x1 = 77; x1 >= 73; x1--) // From x = 73 to x = 77
                                      // Y = 1
    {
        Sleep(time);
        gotoxy(x1, 1);
        printf("%c", c);
    }

    for (int y1 = 2; y1 <= 6; y1++) // Form y = 2 to y = 6
                                    //  X = 72.
    {
        Sleep(time);
        gotoxy(72, y1);
        printf("%c", c);
    }

    for (int x2 = 73; x2 <= 77 - 2; x2++) // Form x = 73 to x = 75
                                          //  Y = 7.
    {
        Sleep(time);
        gotoxy(x2, 7);
        printf("%c", c);
    }

    for (int y2 = 6; y2 >= 2; y2--) // From y = 2 to y =6
                                    //  X = 78
    {

        Sleep(time);
        gotoxy(78, y2);
        printf("%c", c);
    }

    for (int x = 74, y = 4; x <= 80, y <= 8; x++, y++)
    {

        Sleep(time);
        gotoxy(x, y);
        printf("%c", c);
    }

    Sleep(time);
    system("cls");

    gotoxy(30,15);
    printf("SHOW ENDS HERE!");
    Sleep(2000);
    system("cls");


    gotoxy(30, 15);
    printf("BYE BYE....%c", 1);

    getchar();
    return 0;
}
