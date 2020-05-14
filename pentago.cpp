
#include "graphics.h"
#include "functions.h"

using namespace std;
int main(void)
{
    int arr_1[3][4] = {
                      {0,0,0},
                      {0,0,0},
                      {0,0,0},
    };
    int arr_2[3][4] = {
                      {0,0,0},
                      {0,0,0},
                      {0,0,0},
    };
    int arr_3[3][4] = {
                      {0,0,0},
                      {0,0,0},
                      {0,0,0},
    };
    int arr_4[3][4] = {
                      {0,0,0},
                      {0,0,0},
                      {0,0,0},
    };
    int c[6][7];
    int i = 0, j = 0;
    char key;
    int turn = 1;
    int game = 1;
    int side = 0;
    int direction = 0;

    full(arr_1, arr_2, arr_3, arr_4, c);
    int wid = ALL_WINDOWS;

    initwindow(800, 800, "pentago!");
    setbkcolor(15);
    show(c);
    while (game == 1)
    {
        outtextxy(325, 10, "pentago!");
        if (turn == 1 && game == 1)
        {

            setbkcolor(0);
            outtextxy(300, 30, "white playrs turn");
            setbkcolor(15);
            outtextxy(300, 30, "black playrs turn");




            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "white player has won!!!!! GG");
                break;
            }
            black_turn(i, j, arr_1, arr_2, arr_3, arr_4, c, turn);

            show(c);




            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "black player has won!!!!! GG");
                break;
            }

            side = get_side();

            direction = get_dir();

            trn(side, direction, arr_1, arr_2, arr_3, arr_4);
            full(arr_1, arr_2, arr_3, arr_4, c);
            show(c);


            
            turn = 0;

            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "black player has won!!!!! GG");
                break;
            }


        }







        if (turn == 0 && game == 1)
        {
            setbkcolor(0);
            outtextxy(300, 30, "black playrs turn");
            setbkcolor(15);
            outtextxy(300, 30, "white playrs turn");

            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "black player has won!!!!! GG");
                break;
            }
            white_turn(i, j, arr_1, arr_2, arr_3, arr_4, c, turn);


            show(c);



            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "white player has won!!!!! GG");
                break;
            }

            side = get_side();

            direction = get_dir();
            trn(side, direction, arr_1, arr_2, arr_3, arr_4);
            full(arr_1, arr_2, arr_3, arr_4, c);
            show(c);

            turn = 1;


            game = check_end(c);
            if (game == 0)
            {
                setbkcolor(0);
                outtextxy(300, 30, "black playrs turn");
                setbkcolor(0);
                outtextxy(300, 30, "white playrs turn");
                setbkcolor(15);
                outtextxy(270, 700, "white player has won!!!!! GG");
                break;
            }


        }



    }

    getch();
    closegraph();
    return 0;

}