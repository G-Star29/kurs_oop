#ifndef PLATFORM_H
#define PLATFORM_H
#include "general.h"

class Board : public Main
{
private:
	Color color;
	RectangleShape platform;
	RenderWindow *window;
	Vector2f coord;
	Vector2f size;

public:
	Board(RenderWindow &window);
	Board(RenderWindow & window, Color color);
	Vector2f get_coord();
	Vector2f get_size();
	static Color get_default_color();
	virtual void draw();
	void board_move();
	static const int board_standart_x = 200;
	static const int board_standart_y = 20;
};
#endif PLATFORM_H