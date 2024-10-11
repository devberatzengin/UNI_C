#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TABLESIZE 20
#define MAXBOMBCOUNT 20 

char Idnicator[TABLESIZE][TABLESIZE];
int BackTable[TABLESIZE][TABLESIZE];

int count = 0;
int Xcor;
int Ycor;
char Action;

int ViewBackTable();
int ViewIdnicator();
int CreateGame();
int Cheat();
int Play();
int Check();

int main()
{
    srand(time(NULL));
    
    CreateGame();
    
    Cheat();
    
    printf("\n\n");
    
    ViewIdnicator();

    Play();
}

int ViewIdnicator()
{
    printf("                                  1  1  1  1  1  1  1  1  1 \0");
    printf("\n");
    printf("   \0");
    for (int i = 0; i < TABLESIZE/2; i++)
    {
        printf(" %d \0",i);
    }
    for (int i = 0; i <=8 ; i++)
    {
        printf(" %d \0",i);
    }
    
    printf("\n");
    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            if (j==0)
            {
                printf("%-2d ",i);
            }else{
                printf(" %c ",Idnicator[i][j]);
            }
            
        }
        printf("\n");
    }
    


}

int CreateGame()
{

    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            Idnicator[i][j] = 23;
            BackTable[i][j] = 0;
        }
    }
    for (int k = 0; k < MAXBOMBCOUNT; k++)
    {
        while (Idnicator[1 + rand() % 18][1 + rand() % 18] != '9')
        {
            Idnicator[1 + rand() % 18][1 + rand() % 18] = '9';
            break;
        }
    }

    for (int c = 0; c < TABLESIZE; c++)
    {
        for (int v = 0; v < TABLESIZE; v++)
        {
            if (Idnicator[c][v] == '9')
            {
                BackTable[c][v + 1] += 1;
                BackTable[c][v - 1] += 1;
                BackTable[c + 1][v] += 1;
                BackTable[c - 1][v] += 1;
                BackTable[c - 1][v - 1] += 1;
                BackTable[c - 1][v + 1] += 1;
                BackTable[c + 1][v + 1] += 1;
                BackTable[c + 1][v - 1] += 1;
                BackTable[c][v] = -9;
            }
        }
    }

    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            Idnicator[i][j] = 23;
        }
    }
}

int Cheat()
{
    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            if (BackTable[i][j]<0)
            {
                Idnicator[i][j]='X';
            }
                   
        }
    }
    ViewIdnicator();
    for (int x = 0; x < TABLESIZE; x++)
    {
        for (int y = 0; y < TABLESIZE; y++)
        {
            if (BackTable[x][y]<=0)
            {
                Idnicator[x][y]=23;
            }
                   
        }
    }
}

int ViewBackTable()
{

    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            printf(" %d ", BackTable[i][j]);
        }
        printf("\n");
    }

}

int Play()
{

    do
    {
        printf("\nEnter X:");
        scanf("%d", &Xcor);
        printf("\nEnter Y:");
        scanf("%d", &Ycor);
        printf("\nEnter Action [O for open] [F for flag]:");
        scanf(" %c", &Action);
        Ycor++;


        if ((BackTable[Xcor][Ycor] < 0) && (Action == 'O' || Action == 'o'))
        {
            printf("You LOSE\n");
            Cheat();
            return 0;
        }
        else if ((BackTable[Xcor][Ycor]<=0) && (Action == 'F' || Action == 'f'))
        {
            Idnicator[Xcor][Ycor] = 'F';
            ViewIdnicator();
        }

        else if ((BackTable[Xcor][Ycor] >= 0) && (Action == 'O' || Action == 'o'))
        {
            int a = BackTable[Xcor][Ycor];
            Idnicator[Xcor][Ycor] = '0' + a;

            int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
            int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

            int newX, newY;
            for (int i = 0; i < 8; i++)
            {
                newX = Xcor + dx[i];
                newY = Ycor + dy[i];
                
                if (newX >= 0 && newX < TABLESIZE && newY >= 0 && newY < TABLESIZE)
                {
                    if (BackTable[newX][newY] >= 0 && Idnicator[newX][newY] == 23)
                    {
                        int newValue = BackTable[newX][newY];
                        Idnicator[newX][newY] = '0' + newValue;

                        if (newValue == 0)
                        {
                            Xcor = newX;
                            Ycor = newY;
                            i = -1; 
                        }
                    }
                }
            }
            ViewIdnicator();
            }

    for (int i = 0; i < TABLESIZE; i++)
    {
        for (int j = 0; j < TABLESIZE; j++)
        {
            if (Idnicator[i][j]=='F')
            {
                count++;
            }
        }
    }

    if (count==MAXBOMBCOUNT)
    {
        printf("U won!!");
        return 0;
    }
    count=0;

    } while (! (BackTable[Xcor][Ycor] < 0 && (Action == 'O' || Action == 'o')));
}


int Check(){

    
    
}