#include <windows.h>
#include <iostream>
#include "color.h"
#define n 3
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void clrscr() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y) {
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}

void IT() {
    char p = 205;
    char pa = 186;
    char co = 202;
    for (int i = 0; i < 29; i++) {
        gotoxy(40 + i, 11);
        cout << RED << p;
    }

    for (int i = 0; i <= 4; i++) {
        gotoxy(44, 10 - i);
        cout << pa;
        gotoxy(54, 10 - i);
        cout << pa;
        gotoxy(64, 10 - i);
        cout << pa;
    }

    gotoxy(44, 11);
    cout <<RED<<co;
    gotoxy(54, 11);
    cout << co;
    gotoxy(64, 11);
    cout << co;

    gotoxy(44, 12);
    cout << GREEN<< 1;
    gotoxy(54, 12);
    cout << 2;
    gotoxy(64, 12);
    cout << 3;
}

void ID(int matriz[][n]) {
    char di = 220;
    string Y = "\x1B[38;2;53;149;240m";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != 0) {
                gotoxy(44 - (matriz[i][j] - 1) / 2 + 10 * j, 10 - 1 * i);
                for (int k = 0; k < matriz[i][j]; k++) {
                    cout << Y << di;
                }
                if (Y == "\x1B[38;2;53;149;240m") {
                    Y = "\x1b[31m";
                } else {
                    Y = "\x1b[33m";
                }
            }
        }
    }
}

void LM(int matriz[][n]) {
    int p = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                matriz[i][j] = p;
                p = p - 2;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void jugar(int d[n][n], int m1, int m2) {
    gotoxy(40, 20);
    int c, e, o, t = 0;
    ;
    for (int i = n - 1; i >= 0; i--) {
        if (d[i][m1] != 0) {
            c = d[i][m1];
            d[i][m1] = 0;
            e = i;
            t++;
            break;
        }
    }

    for (int i = 0; i <= n - 1; i++) {
        if (d[i][m2] == 0) {
            o = i - 1;
            d[i][m2] = c;
            if (c > d[o][m2] && o == 0) {
                gotoxy(40, 20);
                cout << RED << "Error" << endl;
                d[i][m2] = 0;
                d[e][m1] = c;
                break;
            }

            break;
        }
    }
}

boolean Che_Vic(int d[n][n]) {
    boolean gano = true;
    for (int i = 0; i < n; i++) {
        if (d[i][2] == 0) {
            gano = false;
        }
    }
    return gano;
}

int main() {
    boolean gano = false;
    int b = 0;
    int discos[n][n];
    int j = 0;
    int m1, m2;
    clrscr();
    gotoxy(40, 10);
    cout << LBLUE << "Torres"
         << " " << LBLUE << " "
         << "d" << LGREEN << "e" << LGREEN << " "
         << "hanoi" << endl;
    // SetConsoleTextAttribute(h, 9);
    gotoxy(30, 12);
    cout << "Si deseas iniciar el juego ingresa cualquier numero (excepro el 0): ";
    cin >> b;

    while (b != 0) {
        gano = false;
        LM(discos);
        gotoxy(40, 15);
        cout << LBLUE << "Ingresa tu jugada" << endl;
        while (j <= 10 && gano == false) {
            clrscr();
            IT();
            ID(discos);
            gano=Che_Vic(discos);
            if (gano)
            {
                break;
            }
            gotoxy(40, 15);
            cout << LBLUE << "Ingresa tu jugada" << endl;
            gotoxy(65, 4);
            cout << LGREEN << "Jugada numero:"
                 << " " << j << endl;
            gotoxy(40, 17);
            cout << LGREEN << "De Torre" << endl;
            gotoxy(50, 17);
            cin >> m1;
            m1--;
            gotoxy(40, 18);
            cout << LGREEN << "A Torre" << endl;
            gotoxy(50, 18);
            cin >> m2;
            m2--;
            jugar(discos, m1, m2);
            j++;
            system("pause");
        }
        if (gano)
        {
            gotoxy(40, 21);
            cout << LBLUE <<"Felicidades :3"<< endl;
        }
        gotoxy(40, 22);
        cout << LBLUE << "Deseas volver a jugar?" << endl;
        gotoxy(65, 24);
        cin >> b;
    }
    cout << LGREEN << "hasta pronto" << endl;

    return 0;
}