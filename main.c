/* If you are reading this code then I think you are one of my most trusted person, because not only do I trust you that you won't plagiarise
I also trust you that you will somehow make sense of this mess of a code (I don't comment :P)*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
int dec =7;
int k;
char hang[100] = {'T','H','E','_','T','R','U','T','H'};
char in[100] = {'W','E','L','C','O','M','E',' ','U','S','E','R'},name[100],truth[100]= {'Y','O','U',' ','R','E','A','D',' ','T','H','A','T','?'},l;
int i,pass,j = 100;
int main()
{
//--------------------------------------Start Page--------------------------------------
epilepsy();
sp:
    system("Synopsis.txt");
    ini_ani();
    delay(200);
    epilepsy();
    delay(500);
    system("cls");
    printf("Welcome to Diabolical! \n");
    delay(100);
    printf("Made by: Aditya Ranjan \n\n");
    delay(100);
    printf("1-Play.\n");
    delay(100);
    printf("2-Quit.\n\n");
    delay(100);
    printf("Enter your option number: ");
    scanf("%d", &i);
    if(i == 1)
    {
        system("cls");
        goto init;
        system("color 4");
        for(i = 0; i<=260; i++)
        {
            printf("");
            delay(10);
        }
        delay(1000);
        goto init;
    }
    else if(i == 2)
    {
        exit(0);
    }
//------------------------------------Initialisation--------------------------------------
init:
    system("cls");
    system("color F");
    for (i = 0; i<=12; i++)
    {
        printf("%c", in[i]);
        delay(100);
    }
    printf("\nEnter ");
    delay(200);
    printf("User ");
    delay(200);
    printf("Name: ");
    scanf("%s", name);
    delay(500);
    printf("\a");
    printf("\nWelcome %s \n", name);
    printf("File number\tFile");
    printf("\n1.\t\tRead me.txt\nType File number to open: ");
    scanf("%d", &i);
    if (i == 1)
    {
        goto help;
    }
    else
    {
        irr();
        goto init;
    }
//-------------------------------Read me text---------------------------------
help:
    system("cls");
    printf("Opening file\nLoading:");
    load();
    delay(200);
    system("cls");
    printf("Welcome to M4iN's Computer \n(This is Diab's computer)\n\nIf you are reading this you have lost your memory");
    delay(500);
    printf("...M4iN \n\nIs diab still with us? I am very scared the doctor said I a$ $i#k\n");
    printf("\nAnyway, we have work to do so here are the instructions: \n\n");
    delay(500);
    printf("1. Type the file number to use a file");
    delay(500);
    printf("\n\n2. Using directory number will get you in the directory");
    delay(500);
    printf("\n\n3. Whatever happens, never input anything other than a number unless otherwise asked.");
    delay(500);
    printf("\n\n4. There are certain codes and passwords... That you have forgotten. FIND THEM! I NEED TO KNOW WHAT HAPPENED THAT NIGHT!!! \n\n");
    printf("Enter any number to continue: ");
    scanf("%d",&i);
    goto mainmenu;
//---------------------------------Main Menu--------------------------------
mainmenu:
    system("cls");
    system("color F");
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\t\t%d-%02d-%02d %02d:%02d:%02d\n",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("------------------------------------------------------\n");
    printf("Main Menu \n\n");
    printf("1. Read me.txt");
    delay(500);
    printf("\n2. M4iN <DIR>");
    delay(500);
    printf("\n3. Diab <DIR>\n");
    delay(500);
    printf("\nEnter Code: ");
    scanf("%d",&i);
    if(i == 1)
    {
        goto help;
    }
    else if(i == 2)
    {
        printf("Enter password: ");
        scanf("%d", &pass);
        if(pass == 30604)
        {
            printf("\nVerifying password: ");
            load();
            printf("\nPassword matched!");
            delay(500);
            goto main;
        }
        else if(pass == 69||pass == 420||pass == 69420)
        {
            printf("\nVerifying password: ");
            load();
            delay(100);
            system("troll.png");
            printf("\nEnter any number to continue: ");
            scanf("%d");
            goto mainmenu;
        }
        else if(pass != 30604)
        {
            printf("\nVerifying password: ");
            load();
            delay(100);
            printf("\n\nWrong Password \n\nSCROLL SCROLL SCROLL\n\nEnter any number to continue: ");
            scanf("%d");
            goto mainmenu;
        }
    }
    else if(i == 3)
    {
        goto diab;
    }
    else
    {
        irr();
        delay(500);
        goto mainmenu;
    }
//----------------------------------Diab Directory------------------------------------
diab:
    system("cls");
    system("color 4");
    printf("Diab's Directory \n\n");
    printf("1.TH4T N1TE.txt\n");
    delay(500);
    printf("2.TH4T N1TE2.txt\n");
    delay(500);
    printf("3.pH0toS <DIR>");
    delay(500);
    printf("\n4.Main Menu");
    delay(500);
    printf("\n\nEnter Code: ");
    scanf("%d",&i);
    if(i == 1)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("T1.txt");
    }
    else if(i == 2)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("T2.txt");
    }
    else if(i == 3)
    {
        goto dir;
    }
    else if(i == 4)
    {
        goto mainmenu;
    }
    else
    {
        irr();
        delay(500);
        goto diab;
    }
    printf("\nEnter any number to continue: ");
    scanf("%d");
    goto diab;
//------------------------------------Diab's photos-------------------------------
dir:
    system("cls");
    printf("Diab's Photos \n\n");
    delay(500);
    printf("1.Prescription.jpg\n");
    delay(500);
    printf("2.W1f3.jpg\n");
    delay(500);
    printf("3.D4uTr.jpg\n");
    delay(500);
    printf("4.Main menu\n\n");
    delay(500);
    printf("Enter code: ");
    scanf("%d",&i);
    if(i == 1)
    {
        printf("\nEnter password: ");
        scanf("%d",&pass);
        if(pass == 1110)
        {
            printf("\nVerifying password: ");
            load();
            printf("\nPassword matched!");
            system("pres.jpg");
            printf("\nEnter any number to continue: ");
            scanf("%d");
            goto level2;
        }
        if(pass != 1110)
        {
            printf("\nVerifying password: ");
            load();
            printf("\nWrong Password!");
            printf("\n\nDashes and Dots...\nEnter any number to continue: ");
            scanf("%d");
            goto dir;
        }
    }
    else if( i == 2)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("W1f3.jpg");
    }
    else if( i == 3)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("D4uTr.jpg");
    }
    else if( i == 4)
    {
        goto mainmenu;
    }
    else
    {
        irr();
        goto dir;
    }
    printf("\nEnter any number to continue: ");
    scanf("%d");
    goto dir;

//---------------------------------Main's Directory------------------------------------
main:
    system("cls");
    printf("M4iN's Directory \n\n");
    printf("1.Story1.txt\n");
    delay(500);
    printf("2.Story2.txt\n");
    delay(500);
    printf("3.Photos <DIR>\n");
    delay(500);
    printf("4.Main Menu\n\n");
    delay(500);
    printf("Enter Code: ");
    scanf("%d",&i);
    if(i == 1)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("s1.txt");
    }
    else if(i == 2)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("s2.txt");
    }
    else if(i == 3)
    {
        goto photos;
    }
    else if(i == 4)
    {
        goto mainmenu;
    }
    else
    {
        irr();
        delay(500);
        goto main;
    }
    printf("\nEnter any number to go to continue: ");
    scanf("%d");
    goto main;
//-----------------------------Main's Photos------------------------------------
photos:
    system("cls");
    printf("Main's photos \n\n");
    delay(500);
    printf("1.Wife.jpg\n");
    delay(500);
    printf("2.Daughter.jpg\n");
    delay(500);
    printf("3.Main Menu\n\n");
    printf("Enter Code: ");
    scanf("%d",&i);
    if(i == 1)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("Wife.jpg");
    }
    else if(i == 2)
    {
        printf("\nOpening file\nLoading:");
        load();
        system("Daughter.jpg");
    }
    else if(i == 3)
    {
        goto mainmenu;
    }
    else
    {
        irr();
    }
    printf("\nEnter any number to continue: ");
    scanf("%d");
    goto photos;


    /*----------------------------------------------------------------------------------------

                                            Level 2

    ------------------------------------------------------------------------------------------*/


//----------------------------------I hate you----------------------------------------------
level2:
    system("color F");
    for(i=0; i<=14; i++)
    {
        system("color 2");
        printf("%c",truth[i]);
        delay(50);
        system("cls");
        printf("\t");
        system("color F");
        printf("%c",truth[i]);
        printf("\a");
        delay(50);
        system("cls");
    }
    system("color 7");
    system("cls");
    delay(2000);
    printf("3 Hours have passed");
    delay(3000);
    system("color 4");
    delay(900);
    system("color 7");
//-------------------------------Main menu 2----------------------------------------------
mm2:
    system("cls");
    time_u();
    printf("Main Menu \n\n");
    printf("1. Help.txt");
    delay(500);
    printf("\n2. M4iN <DIR NOT FOUND>");
    delay(500);
    printf("\n3. Diab <DIR NOT FOUND>");
    delay(500);
    printf("\n4. A message to M4iN.mp4\n");
    delay(500);
    printf("\nEnter Code: ");
    scanf("%d",&i);
    if(i == 4)
    {
        goto msg;
    }
    else if(i != 4)
    {
        printf("Directory not found");
        delay(2000);
        goto mm2;
    }
//-------------------------------Message to main.mp4---------------------------------------
msg:
    system("cls");
    system("color 0F");
    printf("Playing \"A message to M4iN.mp4\"");
    delay(1000);
    system("dir");
    delay(2000);
    system("cls");
    delay(1000);
    printf("Clearing ");
    delay(500);
    printf("data: ");
    delay(500);
    load();
    delay(500);
    printf("\n\nData erased...");
    delay(1000);
    system("cls");
    printf("So you thought you could check my computer?");
    delay(2500);
    system("cls");
    printf("See my daughter?");
    delay(2500);
    system("cls");
    printf("NO ");
    delay(500);
    printf("YOU ");
    delay(500);
    printf("CAN'T! ");
    delay(500);
    system("color CF");
    for (i = 0; i <= 500; i++)
    {
        printf("CAN'T! ");
        delay(10);
    }
    system("cls");
    system("color 0F");
    printf("I HATE YOU,YOU HATE ME, WE HATE US.\n");
    printf("End of video.");
    delay(2000);
    system("cls");
    printf("Aren't you pathetic %s? couldn't save your family, snooping in a stranger's PC, If only you were a bit more concentrated on the road...", name);
    delay(1000);
    printf("\nLOOK AT YOURSELF!");
    printf("\nENTER ANY NUMBER TO CONTINUE: ");
    scanf("%d");
    system("cap.bat");
    printf("\nENTER ANY NUMBER TO CONTINUE: ");
    scanf("%d");
    system("cls");
    goto rev;
//--------------------------------Reverie-----------------------------------
rev:
    system("cls");
    delay(1500);
    printf("You want to know what happened that night eh?\n");
    delay(500);
    printf("You lost your family that's what happened, M4iN?\n");
    delay(500);
    printf("You were driving the car... \n");
    delay(2000);
    system("link.txt");
    printf("You were listening to this... That night... Read the 4th word to know who is to blame.\n");
    printf("Enter any number to continue: ");
    scanf("%d",&i);
    printf("\nOh yeah and, 4th word converted to number is: ");
    scanf("%d",&pass);
    if(pass == 251521)
    {
        goto doctor;
    }
    else if(pass != 251521)
    {
        printf("\nWrong password");
        delay(500);
        goto rev;
    }
//-------------------------Doctor's Dialogue------------------------
doctor:
    delay(500);
    system("cls");
    delay(500);
    printf("System corruption detected...\nPull a random file to save PC from crashing?");
    delay(500);
    printf("\nEnter 1 for Yes\nEnter 2 for no");
    printf("\nEnter response: ");
    scanf("%d",&i);
    if(i == 1)
    {
        printf("Opening File:");
        load();
        epilepsy();
    }
    else if(i == 2)
    {
        exit(0);
    }
    system("cls");
    printf("31st June.\n");
    delay(500);
    printf("Doctor: Mr.#@$%, What did you ask me to call you? Main?\n");
    delay(500);
    printf("Main: Yes sir.\n");
    delay(500);
    printf("Doctor: Sir, this... Diab, of yours...\n");
    delay(500);
    printf("Main: ...\n");
    printf("Doctor: I don't know how to say this.\n");
    delay(2000);
    printf("Enter number to continue: ");
    scanf("%d",&i);
    system("cls");
    delay(2000);
    system("color 4");
    printf("Doctor: It's you... you are diab...\n");
    system("color F");
    printf("System saved from a fatal error\n");
    printf("\nEnter any number to continue: ");
    scanf("%d",&i);
    goto next;
//---------------------------------Creep out.mp3------------------------------------------
next:
    delay(500);
    system("cls");
    printf("So tell me have you ever really? really ever loved a woman????\nThat's what you sang to her to get that love...\nI recorded it that night\nEnter any number: ");
    scanf("%d",&i);
    system("dent.mp3");
//-------------------------------Oh truth------------------------------------------------
finale:
    system("cls");
    delay(500);
    time_u();
    printf("1. The Truth.txt");
    delay(500);
    printf("\n\nEnter Code: ");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        goto please;
        break;
    default:
        irr();
    }
//-----------------------Say please---------------------------------------
please:
    system("cls");
    printf("File locked....\n");
    delay(500);
    printf("You wanna win easy, as always.");
    delay(500);
    printf("\nSuffer LIKE YOU MADE YOUR FAMILY SUFFER");
    delay(500);
    printf("\nNo closure for you.");
    delay(500);
    printf("\nNo closure for you.");
    delay(500);
    printf("\nNo closure for you.");
    delay(6000);
    system("cls");
    printf("Say 'please' %s/M4iN: ",name);
    scanf("%s",in);
    i = strcmp(in,"please");
    if(i == 0)
    {
        goto hangman;
    }
    else
    {
        irr();
        goto please;
    }
//--------------------------Hangman----------------------------------
hangman:
    system("pause");
    system("cls");
    for(i = 0; i<=8; i++)
    {
        printf("%c",hang[i]);
        delay(100);
    }
    for(i = 0; i <=8; i++)
    {
        delay(500);
        printf("\nGuess the number I am thinking of: ");
        scanf("%d",&pass);
        delay(200);
        system("color 4");
        printf("\nWrong guess");
        delay(500);
        system("cls");
        system("color F");
        hm(dec);
        dec--;
    }
    delay(3000);
end:
    for(i = 0; i <= 8; i++)
    {
        system("color 4");
        printf("%c",hang[i]);
        system("cls");
    }
//---------------------------End-----------------------------------------------
ending:
    system("color F");
    delay(1000);
    printf("You grow further away from the truth.");
    printf("\nEnter any number to continue: ");
    scanf("%d");
    system("cls");
    printf("----------------------------------------End of part 1------------------------------------------");
    printf("\nEnter any number to continue: ");
    scanf("%d",&i);
    printf("Ending: ");
    load();
    system("cls");
    system("color 9E");
    delay(5000);
    printf("Operating system ran into a fatal error\nDo not remove the power supply.\nWe are trying to find a solution");
    delay(2000);
    printf("\nWe are trying to fin");
    delay(2000);
    printf("\nWe are t\n");
    delay(2000);
    for(i=0; i<=6; i++)
    {
        printf("Rebooting system.");
        delay(200);
        system("cls");
        delay(200);
    }
dd:
    printf("See you next time %s",name);
    delay(5000);
    for(i = 0; i <= 9; i++)
    {
        printf("%c",hang[i]);
        system("cls");
    }
    epilepsy();
//-----------------------------------------------------------------------------------------------
    return 0;
}
//-----------------------------------Functions---------------------------------------------------
void delay(unsigned int milliseconds)
{

    clock_t start = clock();

    while((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds);
}
//----------------------------------------------------------------------------------------
int hm(int input)
{
    for(int ini = 0; ini <= input; ini++)
    {
        printf("%c", hang[ini]);
    }
}
void load()
{
    printf("|");
    for(i =0; i < 20; i++)
    {
        delay(100);
        printf("-");
    }
    printf("|");
}
void irr()
{
    printf("\nInvalid response");
    delay(500);
}
void time_u()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int nice = tm.tm_hour+3;
    if(nice == 24)
    {
        nice = 00;
    }
    else if(nice == 25)
    {
        nice = 01;
    }
    else if(nice == 26)
    {
        nice = 02;
    }
    printf("\t\t%d-%02d-%02d %02d:%02d:%02d\n",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900, nice, tm.tm_min, tm.tm_sec);
    printf("------------------------------------------------------\n");
}
epilepsy()
{
    system("color AC");
    delay(50);
    system("color F0");
    delay(50);
    system("color CA");
    delay(50);
    system("color DA");
    delay(50);
    system("color F0");
    delay(50);
    system("color CA");
    delay(50);
    system("color DA");
    delay(50);
    system("color F0");
}
int ini_ani()
{
    system("color 0F");
    int m;
    for(j = 0; j < 7; j++)
    {
        for(i = 0; i < 120; i++)
        {
            printf("\xB2");
            delay(1);
        }
        printf("\n");
    }
//-------------------------------
    for(j = 0; j < 15; j++)
    {
        for(m = 0; m < 2; m++)
        {
            printf(" ");
        }
        for(m = 0; m < 5; m++)
        {
            printf("!Welcome to DIABOLICAL!");
            delay(50);
        }
        printf("\n");
    }
//-------------------------------
    for(j = 0; j <= 7; j++)
    {
        for(i = 0; i < 120; i++)
        {
            printf("\xB2");
            delay(1);
        }
        printf("\n");
    }
    return 0;
}
