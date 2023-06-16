
void note_page()  /// note page
{
    int position =1;
    int keyPressed = 0;

    while(keyPressed != 13)
    {

    system("cls");


    gotoxy(15,5);
    arrowHere(1, position);
    printf(" Show notes");


    gotoxy(15,7);
    arrowHere(2, position);
    printf(" Add note");

    gotoxy(15,9);
    arrowHere(3, position);
    printf(" Remove note");

    gotoxy(15,12);
    arrowHere(4, position);
    printf(" Back to Main menu.");

    keyPressed = getch();

    if(keyPressed == 80 && position != 4)
        position++;

    else if(keyPressed == 72 && position !=1)
        position--;

    else position = position;


    ///Operations.

    if(position == 1 && keyPressed == 13)
        show_note();


    if(position == 2 && keyPressed == 13)
        add_notes();

    if(position == 3 && keyPressed == 13)
         remove_note();

    else if(position == 4 && keyPressed == 13)
        main_page();
    }
}
