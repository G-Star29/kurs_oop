#ifndef BRICK_H
#define BRICK_H
#include "general.h"

class Rectangle : public Main
{
private:
	RenderWindow *window;
	RectangleShape brick;
	Vector2f coord;
	Vector2f size;
	int hit;
	bool draw_status;

public:
	Rectangle(RenderWindow &window);
	Vector2f get_size();
	Vector2f get_coord();
	int get_hit();
	bool get_draw_status();
	void set_size(Vector2f size);
	void set_coord(Vector2f coord);
	void set_hit(int hit);
	void set_draw_status(bool draw);
	Color rectangle_draw_color();
	virtual void draw();
	static const int rectangle_standart_x = 87;
	static const int rectnagle_standart_y = 30;
};
#endif BRICK_H