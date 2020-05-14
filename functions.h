#pragma once
void turn_left(int arr[3][4]);
void turn_right(int arr[3][4]);
void trn(
    int side
    , int dir
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
);
void set_b(
    int i
    , int j
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
);
void set_w(
    int i
    , int j
    , int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
);
void show(int c[6][7]);
void full(
    int arr_1[3][4]
    , int arr_2[3][4]
    , int arr_3[3][4]
    , int arr_4[3][4]
    , int c[6][7]
);
void black_turn(int i, int j, int arr_1[3][4], int arr_2[3][4], int arr_3[3][4], int arr_4[3][4], int c[6][7], int turn);


void white_turn(int i, int j, int arr_1[3][4], int arr_2[3][4], int arr_3[3][4], int arr_4[3][4], int c[6][7], int turn);

int get_side();
int get_dir();

int check_end(int c[6][7]);
