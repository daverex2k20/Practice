#include <iostream>
using namespace std;

bool gameOver;
const int width=20;
const int height=20;
int x,y, fruitX, fruitY, score;
enum eDirection {STOP=0, Left, Right, Up, Down};
eDirection dir;

void Setup()
{
    gameOver=false;
    dir = STOP;
    x=width/2;
    y=height/2;

    fruitX=rand() % width;
    fruitY=rand() % height;
}

void Draw()
{
    system("clear");//system("clr")
    for (int i =0;i<width;i++)
        cout<<"#";
    cout<<endl;
 
    for (int i=0;i<height+2;i++)
    {
        for(int j=0; j<width;j++)
        {
            if(j==0)
                cout<<"#";
            else
                cout<<" ";

            if (j== width-1)
                cout<<"#";

        }
        cout<<endl;
    }


    system("cls"); //system("clear")
    for (int i =0;i<width+2;i++)
        cout<<"#";
    cout<<endl;

    

}

void Input()
{

}

void Logic()
{

}

int main()
{
    Setup();
    while(!gameOver)
    {
        Draw();
        Input();
        Logic();
        //Sleep(10)// slows game
    }

    return 0;
}