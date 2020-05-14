
#include "graphics.h"

void turn_left(int arr[3][4])
{
    int i;
    int j;
    {
        int arr_copy[3][4];
        for (i = 0;i < 3;i += 1)
        {
            for (j = 0;j < 3;j += 1)
            {
                arr_copy[i][j] = arr[i][j];
            }
        }


        for (i = 0;i <= 2;i += 1)
        {
            for (j = 0;j <= 2;j += 1)
            {

                arr[i][j] = arr_copy[2 - j][i];
            }
        }
    }
}

void turn_right(int arr[3][4])
{
    int i;
    int j;
    {
        int arr_copy[3][4];
        for (i = 0;i < 3;i += 1)
        {
            for (j = 0;j < 3;j += 1)
            {
                arr_copy[i][j] = arr[i][j];
            }
        }


        for (i = 0;i < 3;i += 1)
        {
            for (j = 0;j < 3;j += 1)
            {

                arr[i][j] = arr_copy[j][2 - i];
            }
        }
    }
}
void trn(
    int side
    , int dir
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
)
{
    if (side == 1)
    {
        if (dir == 1)
        {
            turn_right(arr_1);
        }
        else if (dir == 2)
        {
            turn_left(arr_1);
        }
    }
    else if (side == 2)
    {
        if (dir == 1)
        {
            turn_right(arr_2);
        }
        else if (dir == 2)
        {
            turn_left(arr_2);
        }
    }
    else if (side == 3)
    {
        if (dir == 1)
        {
            turn_right(arr_3);
        }
        else if (dir == 2)
        {
            turn_left(arr_3);
        }
    }
    else if (side == 4)
    {
        {
            if (dir == 1)
            {
                turn_right(arr_4);
            }
            else if (dir == 2)
            {
                turn_left(arr_4);
            }
        }
    }
}
void set_b(
    int i
    , int j
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
)
{

    if (i < 3 && j < 3)
    {
        arr_1[i][j] = 1;
    }
    else if (i < 3 && j > 2)
    {
        arr_2[i][j - 3] = 1;
    }
    else if (i > 2 && j < 3)
    {
        arr_3[i - 3][j] = 1;
    }
    else if (i > 2 && j > 2)
    {
        arr_4[i - 3][j - 3] = 1;
    }

}

void set_w(
    int i
    , int j
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
)
{

    if (i < 3 && j < 3)
    {
        arr_1[i][j] = 2;
    }
    else if (i < 3 && j > 2)
    {
        arr_2[i][j - 3] = 2;
    }
    else if (i > 2 && j < 3)
    {
        arr_3[i - 3][j] = 2;
    }
    else if (i > 2 && j > 2)
    {
        arr_4[i - 3][j - 3] = 2;
    }

}

void show(int c[6][7])
{
    line(50, 50, 50, 650);
    line(50, 50, 650, 50);
    line(650, 50, 650, 650);
    line(50, 650, 650, 650);
    line(50, 350, 650, 350);
    line(350, 50, 350, 650);

    int i, j;
    for (i = 0;i < 6;i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (c[i][j] == 0)
            {
                setfillstyle(1, 4);
                fillellipse(100 + 100 * i, 100 + 100 * j, 25, 25);
                setcolor(0);
                circle(100 + 100 * i, 100 + 100 * j, 25);


            }
            if (c[i][j] == 1)
            {
                setfillstyle(1, 0);
                fillellipse(100 + 100 * i, 100 + 100 * j, 25, 25);
                setcolor(15);
                circle(100 + 100 * i, 100 + 100 * j, 25);


            }
            if (c[i][j] == 2)
            {
                setfillstyle(1, 15);
                fillellipse(100 + 100 * i, 100 + 100 * j, 25, 25);

            }
        }
    }
}

void full(
    int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
    , int c[6][7]
)
{
    int i;
    int j;
    for (i = 0;i < 6;i += 1)
    {
        for (j = 0;j < 6;j += 1)
        {
            if (i < 3 && j < 3)
            {
                c[i][j] = arr_1[i][j];
            }
            else if (i < 3 && j>2)
            {
                c[i][j] = arr_2[i][j - 3];
            }
            else if (i > 2 && j < 3)
            {
                c[i][j] = arr_3[i - 3][j];
            }
            else if (i > 2 && j > 2)
            {
                c[i][j] = arr_4[i - 3][j - 3];
            }
        }
    }
}
void black_turn(int i, int j, int arr_1[3][4], int arr_2[3][4], int arr_3[3][4], int arr_4[3][4], int c[6][7], int turn)
{
    char key;
    while (turn == 1)
    {
        setcolor(2);

        circle(100 + 100 * i, 100 + 100 * j, 26);
        circle(100 + 100 * i, 100 + 100 * j, 27);
        circle(100 + 100 * i, 100 + 100 * j, 28);
        circle(100 + 100 * i, 100 + 100 * j, 29);
        setcolor(15);
        line(50, 50, 50, 650);
        line(50, 50, 650, 50);
        line(650, 50, 650, 650);
        line(50, 650, 650, 650);
        line(50, 350, 650, 350);
        line(350, 50, 350, 650);

        key = getch();

        if (key == 'w' && j > 0)
        {
            setcolor(0);

            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            j -= 1;
        }
        if (key == 's' && j < 5)
        {
            setcolor(0);

            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            j += 1;
        }
        if (key == 'd' && i < 5)
        {
            setcolor(0);
            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            i += 1;
        }
        if (key == 'a' && i > 0)
        {
            setcolor(0);
            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            i -= 1;
        }
        if (key == 'f')
        {
            if (c[i][j] == 0)
            {
                c[i][j] = 1;
                set_b(i, j, arr_1, arr_2, arr_3, arr_4);
                setcolor(0);
                circle(100 + 100 * i, 100 + 100 * j, 25);
                circle(100 + 100 * i, 100 + 100 * j, 26);
                circle(100 + 100 * i, 100 + 100 * j, 27);
                circle(100 + 100 * i, 100 + 100 * j, 28);
                circle(100 + 100 * i, 100 + 100 * j, 29);
                setcolor(15);
                line(50, 50, 50, 650);
                line(50, 50, 650, 50);
                line(650, 50, 650, 650);
                line(50, 650, 650, 650);
                line(50, 350, 650, 350);
                line(350, 50, 350, 650);
                show(c);
                turn = 0;
                i = 0;
                j = 0;
            }
        }


    }
}

void white_turn(int i, int j, int arr_1[3][4], int arr_2[3][4], int arr_3[3][4], int arr_4[3][4], int c[6][7], int turn)
{
    char key;
    while (turn == 0)
    {
        setcolor(2);

        circle(100 + 100 * i, 100 + 100 * j, 26);
        circle(100 + 100 * i, 100 + 100 * j, 27);
        circle(100 + 100 * i, 100 + 100 * j, 28);
        circle(100 + 100 * i, 100 + 100 * j, 29);
        setcolor(15);
        line(50, 50, 50, 650);
        line(50, 50, 650, 50);
        line(650, 50, 650, 650);
        line(50, 650, 650, 650);
        line(50, 350, 650, 350);
        line(350, 50, 350, 650);

        key = getch();

        if (key == 'w' && j > 0)
        {
            setcolor(0);

            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            j -= 1;
        }
        if (key == 's' && j < 5)
        {
            setcolor(0);

            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            j += 1;
        }
        if (key == 'd' && i < 5)
        {
            setcolor(0);
            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            i += 1;
        }
        if (key == 'a' && i > 0)
        {
            setcolor(0);
            circle(100 + 100 * i, 100 + 100 * j, 26);
            circle(100 + 100 * i, 100 + 100 * j, 27);
            circle(100 + 100 * i, 100 + 100 * j, 28);
            circle(100 + 100 * i, 100 + 100 * j, 29);
            i -= 1;
        }
        if (key == 'f')
        {
            if (c[i][j] == 0)
            {
                c[i][j] = 2;
                set_w(i, j, arr_1, arr_2, arr_3, arr_4);
                setcolor(15);
                circle(100 + 100 * i, 100 + 100 * j, 25);
                setcolor(0);
                circle(100 + 100 * i, 100 + 100 * j, 26);
                circle(100 + 100 * i, 100 + 100 * j, 27);
                circle(100 + 100 * i, 100 + 100 * j, 28);
                circle(100 + 100 * i, 100 + 100 * j, 29);
                show(c);
                setcolor(15);
                line(50, 50, 50, 650);
                line(50, 50, 650, 50);
                line(650, 50, 650, 650);
                line(50, 650, 650, 650);
                line(50, 350, 650, 350);
                line(350, 50, 350, 650);
                turn = 1;
                i = 0;
                j = 0;
            }

        }


    }
}

int get_side()
{
    int side;
    char key = 1;
    int s[2][2] = {
                    {1,2}
                   ,{3,4}
    };
    int end = 1;
    int i = 0;
    int j = 0;
    while (end == 1)
    {
        setcolor(15);
        line(50, 50, 50, 650);
        line(50, 50, 650, 50);
        line(650, 50, 650, 650);
        line(50, 650, 650, 650);
        line(50, 350, 650, 350);
        line(350, 50, 350, 650);
        setcolor(2);
        line(50 + 300 * i, 50 + 300 * j, 50 + 300 * i, 350 + 300 * j);
        line(50 + 300 * i, 50 + 300 * j, 350 + 300 * i, 50 + 300 * j);
        line(350 + 300 * i, 350 + 300 * j, 50 + 300 * i, 350 + 300 * j);
        line(350 + 300 * i, 50 + 300 * j, 350 + 300 * i, 350 + 300 * j);

        key = getch();
        if (key == 'w' && j > 0)
        {
            setcolor(0);

            rectangle(50 + 300 * i, 50 + 300 * j, 350 + 300 * i, 350 + 300 * j);
            setcolor(15);
            line(50, 50, 50, 650);
            line(50, 50, 650, 50);
            line(650, 50, 650, 650);
            line(50, 650, 650, 650);
            line(50, 350, 650, 350);
            line(350, 50, 350, 650);

            j -= 1;
        }
        if (key == 's' && j < 1)
        {
            setcolor(0);
            rectangle(50 + 300 * i, 50 + 300 * j, 350 + 300 * i, 350 + 300 * j);
            setcolor(15);
            line(50, 50, 50, 650);
            line(50, 50, 650, 50);
            line(650, 50, 650, 650);
            line(50, 650, 650, 650);
            line(50, 350, 650, 350);
            line(350, 50, 350, 650);
            j += 1;
        }
        if (key == 'a' && i > 0)
        {
            setcolor(0);
            rectangle(50 + 300 * i, 50 + 300 * j, 350 + 300 * i, 350 + 300 * j);
            setcolor(15);
            line(50, 50, 50, 650);
            line(50, 50, 650, 50);
            line(650, 50, 650, 650);
            line(50, 650, 650, 650);
            line(50, 350, 650, 350);
            line(350, 50, 350, 650);
            i -= 1;
        }
        if (key == 'd' && i < 1)
        {
            setcolor(0);
            rectangle(50 + 300 * i, 50 + 300 * j, 350 + 300 * i, 350 + 300 * j);
            setcolor(15);
            line(50, 50, 50, 650);
            line(50, 50, 650, 50);
            line(650, 50, 650, 650);
            line(50, 650, 650, 650);
            line(50, 350, 650, 350);
            line(350, 50, 350, 650);
            i += 1;
        }
        if (key == 'f')
        {

            side = s[i][j];

            return side;
            end = 0;
        }

    }
}
int get_dir()
{
    int direction;
    int input;
    int end = 1;
    char key;
    direction = 2;
    while (end == 1)
    {
        setcolor(0);
        setbkcolor(15);
        outtextxy(140, 15, "turn left");
        outtextxy(530, 15, "turn right");

        key = getch();
        if (key == 'a')
        {
            setcolor(0);
            rectangle(530, 15, 590, 30);
            rectangle(529, 14, 591, 31);
            rectangle(528, 13, 592, 32);
            rectangle(527, 12, 593, 33);
            rectangle(526, 11, 594, 34);
            setcolor(2);
            rectangle(140, 15, 190, 30);
            rectangle(139, 14, 191, 31);
            rectangle(138, 13, 192, 32);
            rectangle(137, 12, 193, 33);
            rectangle(136, 11, 194, 34);
            direction = 2;
        }
        else if (key == 'd')
        {
            setcolor(0);
            rectangle(140, 15, 190, 30);
            rectangle(139, 14, 191, 31);
            rectangle(138, 13, 192, 32);
            rectangle(137, 12, 193, 33);
            rectangle(136, 11, 194, 34);
            setcolor(2);
            rectangle(530, 15, 590, 30);
            rectangle(529, 14, 591, 31);
            rectangle(528, 13, 592, 32);
            rectangle(527, 12, 593, 33);
            rectangle(526, 11, 594, 34);
            direction = 1;
        }
        else if (key == 'f')
        {
            end = 0;
            setbkcolor(0);
            setcolor(0);
            outtextxy(140, 15, "turn left");
            outtextxy(530, 15, "turn right");

            rectangle(140, 15, 190, 30);
            rectangle(139, 14, 191, 31);
            rectangle(138, 13, 192, 32);
            rectangle(137, 12, 193, 33);
            rectangle(136, 11, 194, 34);

            rectangle(530, 15, 590, 30);
            rectangle(529, 14, 591, 31);
            rectangle(528, 13, 592, 32);
            rectangle(527, 12, 593, 33);
            rectangle(526, 11, 594, 34);

            rectangle(50, 50, 350, 350);

            rectangle(350, 50, 650, 350);

            rectangle(50, 350, 350, 650);

            rectangle(350, 350, 650, 650);
            return direction;
        }


    }
}

int check_end(int c[6][7])
{
    int i;
    int j;
    for (i = 0;i < 6;i += 1)
    {
        for (j = 0;j < 6;j += 1)
        {
            if (c[i][j] == 1 || c[i][j] == 2)
            {
                if ((c[i][j] == c[i + 1][j] && c[i][j] == c[i + 2][j] && c[i][j] == c[i + 3][j]) && (c[i][j] == c[i][j - 1] || c[i][j] == c[i][j + 1] || c[i][j] == c[i + 3][j + 1] || c[i][j] == c[i + 3][j - 1]))
                {
                    return 0;
                }
                else if ((c[i][j] == c[i][j + 1] && c[i][j] == c[i][j + 2] && c[i][j] == c[i][j + 3]) && (c[i][j] == c[i - 1][j] || c[i][j] == c[i + 1][j] || c[i][j] == c[i + 1][j + 3] || c[i][j] == c[i - 1][j + 3]))
                {
                    return 0;
                }
                else if ((c[i][j] == c[i + 1][j + 1] && c[i][j] == c[i + 2][j + 2] && c[i][j] == c[i + 3][j + 3]) && (c[i][j] == c[i + 2][j + 4] || c[i][j] == c[i + 4][j + 2] || c[i][j] == c[i - 1][j + 1] || c[i][j] == c[i + 1][j - 1]))
                {
                    return 0;
                }
                else if ((c[i][j] == c[i + 1][j - 1] && c[i][j] == c[i + 2][j - 2] && c[i][j] == c[i + 3][j - 3]) && (c[i][j] == c[i + 4][j - 2] || c[i][j] == c[i + 2][j - 4] || c[i][j] == c[i - 1][j - 1] || c[i][j] == c[i + 1][j + 1]))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}