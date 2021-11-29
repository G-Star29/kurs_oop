#include "Board.h"

Board::Board(RenderWindow &window) :
				window(&window),
				coord((gameWidth - board_standart_x) / 2, gameHeight - board_standart_y),
				size((float)board_standart_x, (float)board_standart_y),
				color(get_default_color())
{}

Board::Board(RenderWindow &window, Color color) :
				window(&window),
				coord((gameWidth - board_standart_x) / 2, gameHeight - board_standart_y),
				color(color),
				size((float)board_standart_x, (float)board_standart_y)
{}

Color Board::get_default_color()
{
	return Color::Yellow;
}

Vector2f Board::get_coord()
{
	return coord;
}

Vector2f Board::get_size()
{
	return size;
}

void Board::board_move()
{
	Vector2i mouse_position = Mouse::getPosition(*window);
	if (mouse_position.x >= 0 && mouse_position.x <= gameWidth - size.x)
		coord.x = (float)mouse_position.x;
	else {
		if (mouse_position.x < 0)
			coord.x = 0;
		else
			coord.x = gameWidth - size.x;
	}
}

void Board::draw()
{
	platform.setPosition(coord);
	platform.setSize(size);
	platform.setFillColor(color);
    board_move();
	window->draw(platform);
}