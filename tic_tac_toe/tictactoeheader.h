#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED

#include <vector>
#include <ctime>
#include <random>
#include <SFML/Graphics.hpp>

class TicTacToe
{

private:

    sf::Texture emptyt;
    sf::Sprite emptys;
    int i{0};
    char field[9]={'-','-','-','-','-','-','-','-','-'};
    char human    {'X'};
    char computer {'O'};
    char free     {'-'};
    bool busyOrMissed {false};
    bool windowClose {false};
    bool windowAgain {false};
    char players[2]={computer,human};
    sf::Texture images[9];
    sf::Sprite sprites[9];
    sf::Texture closeTexture;
    sf::Sprite closeSprite;
    sf::Texture againTexture;
    sf::Sprite againSprite;

    sf::Vertex line_1[2] =
    {
        sf::Vertex(sf::Vector2f(510, 390)),
        sf::Vertex(sf::Vector2f(1410, 390))
    };
    sf::Vertex line_2[2] =
    {
        sf::Vertex(sf::Vector2f(510, 690)),
        sf::Vertex(sf::Vector2f(1410, 690))
    };
    sf::Vertex line_3[2] =
    {
        sf::Vertex(sf::Vector2f(1110, 90)),
        sf::Vertex(sf::Vector2f(1110, 990))
    };
    sf::Vertex line_4[2] =
    {
        sf::Vertex(sf::Vector2f(810, 90)),
        sf::Vertex(sf::Vector2f(810, 990))
    };

    sf::Vertex win_line[4];

    bool Victory(char player);

    int ComputerMove();

    void FillCell(int fieldIndex);

    void ButtonPressed(int x, int y);

    void Again();

public:

    void Play();

};

#endif // TICTACTOE_H_INCLUDED
