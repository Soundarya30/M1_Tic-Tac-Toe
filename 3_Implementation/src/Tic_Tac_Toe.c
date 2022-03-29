#include<Tic_Tac_Toe.h>
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
    printf("Welcome Tic-Tac-Toe\n\n");
    printf("Rules of the Tic-Tac-Toc game:-\n");
    printf("\n1:Each player will enter a digit from 1-9 to place X or O");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be the winner of the game");
    printf("\n\nEnjoy the game\n\n");
    printf("You can press any key to continue:- ");
    scanf("%c",&lk);
}
