#include<Tic_Tac_Toe.h>
char x,o;
char arr[9]={'1','2','3','4','5','6','7','8','9'};
char a1[60],a2[60];
void play_board();
void play_rules();
int checktowin();
int decision()
{
    char decisi;
        dec:
        printf("\n\nPlayer1 %s choose the X or 0:",a1);
        decisi=getchar();
        scanf("%c",&decisi);
        {
            if(decisi=='x' || decisi=='X')
            {
                o='0';
                x='X';
            }
            else if(decisi=='0')
            {
                o='X';
                x='0';
            }
            else
            {
                printf("Enter either X or 0 only \n\n");
                goto dec;
            }
        }
}
int main()
{
    FILE *r;
    r=fopen("score.txt","a+");
    fclose(r);
    int player_of_the_game=1;
    int ch,game_score=-1;
    char sym,re;
    char start,decisi;
    int b;
    play_rules();
    printf("\n\nPress 1 to start game:-\nPress 2 to view leader board of the game:-\n");
    scanf("%d",&b);
    if(b==1)
    {
    read_the_game:
        r=fopen("score.txt","a+");
    printf("\nEnter player1 name: ");
    scanf("%59s",a1);
    fprintf(r,"\n%s",a1);
    printf("Enter player2 name: ");
    scanf("%59s",a2);
    fprintf(r,"\t%s",a2);
    fclose(r);
    if(!strcmp(a1,a2))
    {
        printf("Enter different players name!\n\n");
        goto read_the_game;
    }
    else
        decision();
    play_board();

    do
    {

        player_of_the_game=((player_of_the_game%2)?1:2);
        if(player_of_the_game==1)
        printf("%s Type your digit from 1-9:- ",a1);
        else
            printf("%s Type your digit from 1-9:- ",a2);
        scanf("%d",&ch);
        sym=((player_of_the_game==1)?x:o);
        if(ch==1 && arr[0]=='1')
            arr[0]=sym;
        else if(ch==2 && arr[1]=='2')
            arr[1]=sym;
        else if(ch==3 && arr[2]=='3')
            arr[2]=sym;
        else if(ch==4 && arr[3]=='4')
            arr[3]=sym;
        else if(ch==5 && arr[4]=='5')
            arr[4]=sym;
        else if(ch==6 && arr[5]=='6')
            arr[5]=sym;
        else if(ch==7 && arr[6]=='7')
            arr[6]=sym;
        else if(ch==8 && arr[7]=='8')
            arr[7]=sym;
        else if(ch==9 && arr[8]=='9')
            arr[8]=sym;
        else
            {printf("Wrong Selection of digit\n");player_of_the_game--;
            }

        game_score=checktowin();
        player_of_the_game++;
        play_board();
    }while(game_score == -1);
    r=fopen("score.txt","a+");
    if(game_score==1)
    {

        if(player_of_the_game==2)
        {printf("\n\nPlayer1 %s Wins the game!\n\n",a1);fprintf(r,"\t%s",a1);
        }
        else
            {printf("\n\nPlayer2 %s Wins the game!\n\n",a2);fprintf(r,"\t%s",a2);
            }
        fclose(r);
    }
    else
        printf("\n\nGame Draw!\n\n");fprintf(r,"\t%s","DRAW");
    }
    if(b==2)
    {
        int choic;
        printf("\n\n");
        printf("\tLEADERBOARD\n\n");
        char d;
        r=fopen("score.txt","r");
        while((d=getc(r))!=EOF)
        {
            printf("%c",d);
        }
        fclose(r);
        printf("\n\nPress 1 to start the game:- ");
        scanf("%d",&choic);
        if(choic==1)
            goto read_the_game;
    }
    else
    {
        printf("\n\nTo continue press any key!\nEager to see you back!!\n\n");
    }
}
int checktowin()
{
    if(arr[0]==arr[1] && arr[1]==arr[2])
        return 1;
    else if(arr[3]==arr[4] && arr[4]==arr[5])
        return 1;
    else if(arr[6]==arr[7] && arr[7]==arr[8])
        return 1;
    else if(arr[0]==arr[3] && arr[3]==arr[6])
        return 1;
    else if(arr[1]==arr[4] && arr[4]==arr[7])
        return 1;
    else if(arr[2]==arr[5] && arr[5]==arr[8])
        return 1;
    else if(arr[0]==arr[4] && arr[4]==arr[8])
        return 1;
    else if(arr[2]==arr[4] && arr[4]==arr[6])
        return 1;
    else if(arr[0]!='1' && arr[1]!='2' && arr[2]!='3' && arr[3]!='4' && arr[4]!='5' && arr[5]!='6' && arr[6]!='7' && arr[7]!='8' && arr[8]!='9')
        return 0;
    else
        return -1;
}
void play_board()
{
    int i;
    printf("\tTic-Tac-Toe\n\n");
    printf("\n\n");
    printf("%s:- (%c)\n%s:-  (%c)\n\n\n",a1,x,a2,o);
        printf("  %c |  %c | %c\n",arr[0],arr[1],arr[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",arr[3],arr[4],arr[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",arr[6],arr[7],arr[8]);
        printf("    |    |    \n");
}
void play_rules()
{
    char lk;
    printf("\tTic-Tac-Toe\n\n");
    printf("Welcome to Tic-Tac-Toe game\n\n");
    printf("Rules of the Tic-Tac-Toc game:-\n");
    printf("\n1:Each player will enter a digit from 1-9 to place X or O");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be the winner of the game");
    printf("\n\nEnjoy the game\n\n");
    printf("You can press any key to continue:- ");
    scanf("%c",&lk);
}
