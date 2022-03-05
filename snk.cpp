﻿#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    int Set[] = { 7,7,7 };
    int counter = 2;
    char key;

    gotoxy(10, 1);
    std::cout << "Snake Game";

    for (int i = 0;;)
    {
        gotoxy(10, 3);
        color(Set[0]);
        std::cout << "|Start|";

        gotoxy(10, 4);
        color(Set[1]);
        std::cout << "|Help|";

        gotoxy(10, 5);
        color(Set[2]);
        std::cout << "|Exit|";

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 3))
        {
            counter--;
        }

        if (key == 80 && (counter >= 1 && counter <= 2))
        {
            counter++;
        }
        if (key == '\r')
        {
            if (counter == 1)
            {
                //here will be game
            }
            if (counter == 2)
            {
                std::cout << "\nIn the game of Snake, the player uses the arrow keys to move a \"snake\" around the board.  As the snake finds food, it eats the food, and thereby grows larger.  The game ends when the snake either moves off the screen or moves into itself.  The goal is to make the snake as large as possible before that happens.";
            }
            if (counter == 3)
            {
                return 0;
            }
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        if (counter == 1)
        {
            Set[0] = 12;
        }
        if (counter == 2)
        {
            Set[1] = 12;
        }
        if (counter == 3)
        {
            Set[2] = 12;
        }
    }
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
