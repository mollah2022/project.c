#include<stdio.h>
#include <conio.h>
#include<windows.h>
  char square[10] = { 'o', '1', '2','3',
  '4', '5', '6', '7','8','9' };
   char mark;
   int checkwin();
   void board();
   void cboard();
   int comp_win();
   int block_user();
int main()
{

   int x;
    for (x = 0; x < 2; x++)
  Beep(398,500);
  Beep(400,500);



    int player = 1, i, choice,t1,t_1=1,p;
    int start,k=1;

    menu:

        system("cls");

        system("COLOR 4F");

    square[1]='1';square[2]='2';
    square[3]='3';square[4]='4';
    square[5]='5';square[6]='6';
    square[7]='7';square[8]='8';
    square[9]='9';
    printf("\tTic-Tac-Toe:A Game of Xs and Os\n\n\ \n");


    printf("\t\t1. Single Player\n\n");
    printf("\t\t2. Multiplayer Player\n\n\n");

    printf("Enter your choice :--");
    scanf("%d",&start);

    if(start==1){
     system("COLOR 1F");
    do{

    cboard();
    player = (player%2) ?  1 : 2;
    mark = (player == 1) ? 'X' : 'O';

    if(player==1){

    printf("Player %d, enter a number: ", player);
    scanf("%d", &choice);
    t1=choice;
    if (choice == 1 && square[1] == '1')
    square[1] = mark;
    else if (choice == 2 && square[2] == '2')
    square[2] = mark;
    else if (choice == 3 && square[3] == '3')
    square[3] = mark;
    else if (choice == 4 && square[4] == '4')
    square[4] = mark;
    else if (choice == 5 && square[5] == '5')
    square[5] = mark;
    else if (choice == 6 && square[6] == '6')
    square[6] = mark;
    else if (choice == 7 && square[7] == '7')
    square[7] = mark;
    else if (choice == 8 && square[8] == '8')
    square[8] = mark;
    else if (choice == 9 && square[9] == '9')
    square[9] = mark;
    else {
    printf("Invalid move ");
    player--;
    getch();
    }
    }
    if(player==2){
    if((t1==1 || t1==2 || t1==4 || t1==5) && t_1==1)
    {
    square[9] = mark;
    p=1;
    t_1=0;
    }
    else if(t_1==1){
    square[1] = mark;
    p=2;
    t_1=0;
    }
    else if( comp_win()){
    }
    else if( block_user()){
    }
    else if(p==1 && square[6]=='6'){
    square[6] = mark;
    p=6;
    }
    else if(p==1 && square[8]=='8'){
    square[8] = mark;
    p=8;
    }
    else if(p==1 && square[5]=='5'){
    square[5] = mark;
    p=5;
    }
    else if(p==6 && square[5]=='5'){
    square[5] = mark;
    }
    else if(p==8 && square[5]=='5'){
    square[5] = mark;
    }
    else if(p==5 && square[2]=='2'){
    square[2] = mark;
    }
    else if(p==5 && square[4]=='4'){
    square[4] = mark;
    }
    else if(p==2 && square[4]=='4'){
    square[4] = mark;
    p=4;
    }
    else if(p==2 && square[2]=='2'){
    square[2] = mark;
    p=3;
    }
    else if(p==2 && square[5]=='5'){
    square[5] = mark;
    p=10;
    }
    else if(p==4 && square[5]=='5'){
    square[5] = mark;
    }
    else if(p==3 && square[5]=='5'){
    square[5] = mark;
    }
    else if(p==10 && square[6]=='6'){
    square[6] = mark;
    }
    else if(p==5 && square[8]=='8'){
    square[8] = mark;
    }
    else{
    for(int l=1;l<=9;l++){
    if(square[l]!='X'){
    square[l] = mark;
    break;
    }
    }
    }
    }
    i = checkwin();
    player++;
    } while (i == - 1);

    cboard();
    if (i == 1){
    if(--player==2) {

    printf("==>\aComputer win \n");
            int x;
    for (x = 0; x < 2; x++)
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Beep(550, 250);
    Sleep(150);
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Sleep(100);
    }
    else if(player==1){

    printf("==>\aPlayer win \n");
    int x;
    for (x = 0; x < 2; x++)
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Beep(550, 250);
    Sleep(150);
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Sleep(100);

    }
    }
    else{


     printf("==>\aGame draw\n");
       int x;
    for (x = 0; x < 2; x++)
    Beep(550, 250);
    Sleep(150);
    Beep(550, 250);
    Beep(550, 250);
     getch();
    }
    printf("Press 0 for menu:--");
    scanf("%d",&k);

    if(k==0) goto menu;
    else
    return 0;
    }
   else if(start==2){

         system("COLOR 2F");

    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();

    if (i == 1){

        printf("==>\aPlayer %d win\n ", --player);
         int x;
    for (x = 0; x < 2; x++)
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Beep(550, 250);
    Sleep(150);
    Beep(440, 400);
    Sleep(50);
    Beep(494, 400);
    Beep(600, 350);
    Beep(600, 300);
    Beep(600, 150);
    Sleep(100);
    }
    else{


        printf("==>\aGame draw\n");
        int x;
    for (x = 0; x < 2; x++)
    Beep(550, 250);
    Sleep(150);
    Beep(550, 250);
    Beep(550, 250);
    }


    getch();

    printf("Press 0 for menu:--");
    scanf("%d",&k);

   if(k==0) goto menu;
    else
    return 0;
    }
}

     int comp_win()
   {
   if(square[1]=='O' && square[2]=='O' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else if(square[1]=='O' && square[3]=='O' && square[2]=='2')
    {
    square[2]=mark;
    return 1;
    }
    else if(square[2]=='O' && square[3]=='O' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[4]=='O' && square[5]=='O' && square[6]=='6')
    {
    square[6]=mark;
    return 1;
    }
    else if(square[4]=='O' && square[6]=='O' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[6]=='O' && square[5]=='O' && square[4]=='4')
    {
    square[4]=mark;
    return 1;
    }
    else if(square[7]=='O' && square[8]=='O' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[7]=='O' && square[9]=='O' && square[8]=='8')
    {
    square[8]=mark;
    return 1;
    }
    else if(square[8]=='O' && square[9]=='O' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[1]=='O' && square[4]=='O' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[1]=='O' && square[7]=='O' && square[4]=='4')
    {
    square[4]=mark;
    return 1;
    }
    else if(square[4]=='O' && square[7]=='O' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[2]=='O' && square[5]=='O' && square[8]=='8')
    {
    square[8]=mark;
    return 1;
    }
    else if(square[2]=='O' && square[8]=='O' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='O' && square[8]=='O' && square[2]=='2')
    {
    square[2]=mark;
    return 1;
    }
    else if(square[3]=='O' && square[6]=='O' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[3]=='O' && square[9]=='O' && square[6]=='6')
    {
    square[6]=mark;
    return 1;
    }
    else if(square[6]=='O' && square[9]=='O' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else if(square[1]=='O' && square[5]=='O' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[1]=='O' && square[9]=='O' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='O' && square[9]=='O' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[3]=='O' && square[5]=='O' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[3]=='O' && square[7]=='O' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='O' && square[7]=='O' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else{
    return 0;
    }
 }

    int block_user()
    {
     if(square[1]=='X' && square[2]=='X' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else if(square[1]=='X' && square[3]=='X' && square[2]=='2')
    {
    square[2]=mark;
    return 1;
    }
    else if(square[2]=='X' && square[3]=='X' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[4]=='X' && square[5]=='X' && square[6]=='6')
    {
    square[6]=mark;
    return 1;
    }
    else if(square[4]=='X' && square[6]=='X' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[6]=='X' && square[5]=='X' && square[4]=='4')
    {
    square[4]=mark;
    return 1;
    }
    else if(square[7]=='X' && square[8]=='X' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[7]=='X' && square[9]=='X' && square[8]=='8')
    {
    square[8]=mark;
    return 1;
    }
    else if(square[8]=='X' && square[9]=='X' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[1]=='X' && square[4]=='X' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[1]=='X' && square[7]=='X' && square[4]=='4')
    {
    square[4]=mark;
    return 1;
    }
    else if(square[4]=='X' && square[7]=='X' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[2]=='X' && square[5]=='X' && square[8]=='8')
    {
    square[8]=mark;
    return 1;
    }
    else if(square[2]=='X' && square[8]=='X' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='X' && square[8]=='X' && square[2]=='2')
    {
    square[2]=mark;
    return 1;
    }
    else if(square[3]=='X' && square[6]=='X' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[3]=='X' && square[9]=='X' && square[6]=='6')
    {
    square[6]=mark;
    return 1;
    }
    else if(square[6]=='X' && square[9]=='X' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else if(square[1]=='X' && square[5]=='X' && square[9]=='9')
    {
    square[9]=mark;
    return 1;
    }
    else if(square[1]=='X' && square[9]=='X' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='X' && square[9]=='X' && square[1]=='1')
    {
    square[1]=mark;
    return 1;
    }
    else if(square[3]=='X' && square[5]=='X' && square[7]=='7')
    {
    square[7]=mark;
    return 1;
    }
    else if(square[3]=='X' && square[7]=='X' && square[5]=='5')
    {
    square[5]=mark;
    return 1;
    }
    else if(square[5]=='X' && square[7]=='X' && square[3]=='3')
    {
    square[3]=mark;
    return 1;
    }
    else{
    return 0;
    }
 }
  int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}
void board()
    {
        system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
     }
     void cboard()
    {
        system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Computer (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
     }
