#ifndef INFORMATION_H
#define INFORMATION_H
#include "general.h"
#include "Design.h"
#include <iostream>
#include <unistd.h>

class Data : public Main
{
private:
	int score;
	int lives;
	RenderWindow *window;
	RectangleShape line;
	Vector2f line_size;
	Vector2f line_coord;
	Color line_color;
	Font font;
	Text text_score;
	Text text_level;
	Text text_lives;
    Text end;
	Design *level;

public:
	Data(RenderWindow &window, Design &level);
	Data(RenderWindow &window, Design &level, int lives);
	void load_fonts();
	static Color get_default_line_color();
	static Color get_default_font_color();
	void add_lives(int lives);
	void add_score(int score);
	void line_draw();
	void draw_text_level();
	void draw_text_lives();
	void draw_text_score();
	void information_draw();
	virtual void draw();
	static const int start_level = 1;
	static const int start_lives = 3;
	static const int line_standart_x =	gameWidth;
	static const int line_standart_y = 3;
	static const int line_position_y = window_y_min;
	static const int font_size = 40;
};

#endif INFORMATION_H