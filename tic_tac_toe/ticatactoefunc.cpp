#include "tictactoeheader.h"

bool TicTacToe::Victory(char player)
{
        if (field[0]==player&&field[1]==player&&field[2]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(510,230));
            win_line[1] = sf::Vertex(sf::Vector2f(510,250));
            win_line[2] = sf::Vertex(sf::Vector2f(1410,250));
            win_line[3] = sf::Vertex(sf::Vector2f(1410,230));
            return true;
        }
        else if (field[3]==player&&field[4]==player&&field[5]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(510,530));
            win_line[1] = sf::Vertex(sf::Vector2f(510,550));
            win_line[2] = sf::Vertex(sf::Vector2f(1410,550));
            win_line[3] = sf::Vertex(sf::Vector2f(1410,530));
            return true;
        }
        else if (field[6]==player&&field[7]==player&&field[8]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(510,830));
            win_line[1] = sf::Vertex(sf::Vector2f(510,850));
            win_line[2] = sf::Vertex(sf::Vector2f(1410,850));
            win_line[3] = sf::Vertex(sf::Vector2f(1410,830));
            return true;
        }
        else if (field[0]==player&&field[3]==player&&field[6]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(650,90));
            win_line[1] = sf::Vertex(sf::Vector2f(670,90));
            win_line[2] = sf::Vertex(sf::Vector2f(670,990));
            win_line[3] = sf::Vertex(sf::Vector2f(650,990));
            return true;
        }
        else if (field[1]==player&&field[4]==player&&field[7]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(950,90));
            win_line[1] = sf::Vertex(sf::Vector2f(970,90));
            win_line[2] = sf::Vertex(sf::Vector2f(970,990));
            win_line[3] = sf::Vertex(sf::Vector2f(950,990));
            return true;
        }
        else if (field[2]==player&&field[5]==player&&field[8]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(1250,90));
            win_line[1] = sf::Vertex(sf::Vector2f(1270,90));
            win_line[2] = sf::Vertex(sf::Vector2f(1270,990));
            win_line[3] = sf::Vertex(sf::Vector2f(1250,990));
            return true;
        }
        else if (field[0]==player&&field[4]==player&&field[8]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(1405,995));
            win_line[1] = sf::Vertex(sf::Vector2f(1415,985));
            win_line[2] = sf::Vertex(sf::Vector2f(515,85));
            win_line[3] = sf::Vertex(sf::Vector2f(505,95));
            return true;
        }
        else if (field[2]==player&&field[4]==player&&field[6]==player)
        {
            win_line[0] = sf::Vertex(sf::Vector2f(505,985));
            win_line[1] = sf::Vertex(sf::Vector2f(515,995));
            win_line[2] = sf::Vertex(sf::Vector2f(1415,95));
            win_line[3] = sf::Vertex(sf::Vector2f(1405,85));
            return true;
        }
        else return false;

}

int TicTacToe::ComputerMove()
{
        for (auto const &player:players)
        {
            if      (field[0]==player&&field[1]==player&&field[2]=='-') {field[2]=computer; return 2;}
            else if (field[0]==player&&field[2]==player&&field[1]=='-') {field[1]=computer; return 1;}
            else if (field[1]==player&&field[2]==player&&field[0]=='-') {field[0]=computer; return 0;}
            else if (field[3]==player&&field[4]==player&&field[5]=='-') {field[5]=computer; return 5;}
            else if (field[3]==player&&field[5]==player&&field[4]=='-') {field[4]=computer; return 4;}
            else if (field[4]==player&&field[5]==player&&field[3]=='-') {field[3]=computer; return 3;}
            else if (field[6]==player&&field[7]==player&&field[8]=='-') {field[8]=computer; return 8;}
            else if (field[6]==player&&field[8]==player&&field[7]=='-') {field[7]=computer; return 7;}
            else if (field[7]==player&&field[8]==player&&field[6]=='-') {field[6]=computer; return 6;}
            else if (field[0]==player&&field[3]==player&&field[6]=='-') {field[6]=computer; return 6;}
            else if (field[0]==player&&field[6]==player&&field[3]=='-') {field[3]=computer; return 3;}
            else if (field[3]==player&&field[6]==player&&field[0]=='-') {field[0]=computer; return 0;}
            else if (field[1]==player&&field[4]==player&&field[7]=='-') {field[7]=computer; return 7;}
            else if (field[1]==player&&field[7]==player&&field[4]=='-') {field[4]=computer; return 4;}
            else if (field[7]==player&&field[4]==player&&field[1]=='-') {field[1]=computer; return 1;}
            else if (field[2]==player&&field[5]==player&&field[8]=='-') {field[8]=computer; return 8;}
            else if (field[2]==player&&field[8]==player&&field[5]=='-') {field[5]=computer; return 5;}
            else if (field[5]==player&&field[8]==player&&field[2]=='-') {field[2]=computer; return 2;}
            else if (field[0]==player&&field[4]==player&&field[8]=='-') {field[8]=computer; return 8;}
            else if (field[0]==player&&field[8]==player&&field[4]=='-') {field[4]=computer; return 4;}
            else if (field[4]==player&&field[8]==player&&field[0]=='-') {field[0]=computer; return 0;}
            else if (field[2]==player&&field[4]==player&&field[6]=='-') {field[6]=computer; return 6;}
            else if (field[2]==player&&field[6]==player&&field[4]=='-') {field[4]=computer; return 4;}
            else if (field[4]==player&&field[6]==player&&field[2]=='-') {field[2]=computer; return 2;}
        }

        if (field[4]==free)
        {
            field[4]=computer;
            return 4;
        }

        if (field[0]==free||field[2]==free||field[6]==free||field[8]==free)
        {
            std::vector<int> emptyCornerCells;
            int cornerCells[4]={0,2,6,8};
            for (int i{0};i<4;++i)
            {
                if (field[cornerCells[i]]==free)
                    emptyCornerCells.push_back(cornerCells[i]);
            }
            std::mt19937 mersenne(static_cast<unsigned int>(time(0)));
            int fieldIndex=emptyCornerCells[mersenne()%emptyCornerCells.size()];
            field[fieldIndex]=computer;
            emptyCornerCells.clear();
            return fieldIndex;

        }

        std::vector<int> emptyCells;

        for (int i=0;i<9;++i)
        {
            if (field[i]=='-')
            {
                emptyCells.push_back(i);
            }
        }

        std::mt19937 mersenne(static_cast<unsigned int>(time(0)));
        int fieldIndex=emptyCells[mersenne()%emptyCells.size()];
        field[fieldIndex]=computer;
        emptyCells.clear();
        return fieldIndex;
}

void TicTacToe::FillCell(int fieldIndex)
{
    if (field[fieldIndex]!=free)
    {
        --i;
        busyOrMissed=true;
    }
    else
    {
        images[fieldIndex].loadFromFile("cross.png");
        sprites[fieldIndex].setTexture(images[fieldIndex]);
        field[fieldIndex]=human;
    }
}

void TicTacToe::ButtonPressed(int x,int y)
{
    if ((x<1410)&&(x>510)&&(y>90)&&(y<990))
    {
        if (x<810)
        {
            if (y<390)
                FillCell(0);
            else if (y<690)
                FillCell(3);
            else
                FillCell(6);
        }
        else if (x<1110)
        {
            if (y<390)
                FillCell(1);
            else if (y<690)
                FillCell(4);
            else
                FillCell(7);
        }
        else
        {
            if (y<390)
                FillCell(2);
            else if (y<690)
                FillCell(5);
            else
                FillCell(8);
        }
    }
    else if (x>1885&&x<1910&&y<35&&y>10)
        windowClose=true;
    else if (x>1850&&x<1875&&y<35&&y>10)
        windowAgain=true;
    else
    {
        --i;
        busyOrMissed=true;
    }

    if ((i>2)&&Victory(human))
    {
        i=10;
    }
}

void TicTacToe::Again()
{
    for (int s=0;s<9;s++)
    {
        field[s]=free;
        images[s]=emptyt;
        sprites[s]=emptys;
    }
    for (int s=0;s<4;s++)
        win_line[s]=sf::Vertex(sf::Vector2f(0,0));
}

void TicTacToe::Play()
{
        sf::RenderWindow window(sf::VideoMode(1920,1080), "Tic-Tac-Toe",sf::Style::Fullscreen);

        while (window.isOpen())
        {
            sf::Event event;

            while (window.pollEvent(event))
            {
                if (event.type==sf::Event::Closed)
                    window.close();

                if ((event.type==sf::Event::MouseButtonPressed)&&(i<5))
                {
                    ++i;
                    busyOrMissed=false;
                    windowAgain=false;
                    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);

                    ButtonPressed(pixelPos.x,pixelPos.y);

                    if (windowClose)
                        window.close();
                    if (windowAgain)
                    {
                        i=0;
                        Again();
                    }
                    if ((i<5)&&(!busyOrMissed))
                    {
                        int computerIndex=ComputerMove();
                        images[computerIndex].loadFromFile("zero.png");
                        sprites[computerIndex].setTexture(images[computerIndex]);
                        if ((i>2)&&Victory(computer))
                        {
                            i=10;
                        }
                    }
                }
                if (event.type==sf::Event::MouseButtonPressed)
                {
                    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
                    int x=pixelPos.x;
                    int y=pixelPos.y;
                    if (x>1885&&x<1910&&y<35&&y>10)
                        window.close();
                    else if (x>1850&&x<1875&&y<35&&y>10)
                    {
                        i=0;
                        Again();
                    }
                }
            }

            window.clear();

            window.draw(line_1, 2, sf::Lines);
            window.draw(line_2, 2, sf::Lines);
            window.draw(line_3, 2, sf::Lines);
            window.draw(line_4, 2, sf::Lines);

            closeTexture.loadFromFile("close.png");
            closeSprite.setTexture(closeTexture);
            againTexture.loadFromFile("again.png");
            againSprite.setTexture(againTexture);

            sprites[0].setPosition(511, 91);
            sprites[3].setPosition(511, 391);
            sprites[6].setPosition(511, 691);
            sprites[1].setPosition(811, 91);
            sprites[4].setPosition(811, 391);
            sprites[7].setPosition(811, 691);
            sprites[2].setPosition(1111, 91);
            sprites[5].setPosition(1111, 391);
            sprites[8].setPosition(1111, 691);
            closeSprite.setPosition(1885,10);
            againSprite.setPosition(1850,10);

            window.draw(sprites[0]);
            window.draw(sprites[1]);
            window.draw(sprites[2]);
            window.draw(sprites[3]);
            window.draw(sprites[4]);
            window.draw(sprites[5]);
            window.draw(sprites[6]);
            window.draw(sprites[7]);
            window.draw(sprites[8]);
            window.draw(closeSprite);
            window.draw(againSprite);
            window.draw(win_line, 5, sf::Quads);

            window.display();
        }
}
