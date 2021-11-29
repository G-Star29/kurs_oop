#include "Board.h"
#include "Ball.h"
#include "Data.h"
#include "Design.h"

int main()
{
    RenderWindow *window = new RenderWindow(VideoMode(Main::gameWidth, Main::gameHeight), "Arkanoid", Style::Close);
    Design *level = new Design(*window);
    Data *information = new Data(*window, *level);
    Board *platform = new Board(*window);
    Ball *ball = new Ball(*window, *platform, *information, *level);
    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                window->close();
        window->clear();
        information->draw();
        platform->draw();
        level->draw();
        ball->draw();
        window->display();
    }
    return 0;
}