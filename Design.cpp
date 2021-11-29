#include "Design.h"

Design::Design(RenderWindow &window) :
				current_level(0),
				window(&window),
				level_size(100),
				brick_size((float)Rectangle::rectangle_standart_x, (float)Rectangle::rectnagle_standart_y)
{
	set_level();
}

int Design::get_level_size()
{
	return level_size;
}

int Design::get_current_level()
{
	return current_level;
}

Rectangle* Design::get_brick_array()
{
	return brick_array;
}

void Design::level_reserve_memory()
{
	brick_array = (Rectangle*) operator new(sizeof(Rectangle) * level_size);
	for (int i = 0; i < level_size; ++i)
		new(&brick_array[i]) Rectangle(*window);
}

void Design::level_delete_memory()
{
	for (int i = 0; i < level_size; ++i)
		brick_array[i].~Rectangle();
	operator delete(brick_array);
}

void Design::next_level()
{
	if (current_level)
		level_delete_memory();
	++current_level;
	level_reserve_memory();
}

void Design::set_level()
{
	next_level();
	switch (current_level)
	{
	case 1: {
		level1_constructor();
		break;
	}
	case 2: {
		level2_constructor();
		break;
	}
	case 3: {
		level3_constructor();
		break;
	}
	case 4: {
		level4_constructor();
		break;
	}
	case 5: {
		level5_constructor();
		break;
	}
	case 6: {
		level6_constructor();
		break;
	}
	case 7: {
		level7_constructor();
		break;
	}
	case 8: {
		level8_constructor();
		break;
	}
	case 9: {
		level9_constructor();
		break;
	}
	case 10: {
		level10_constructor();
		break;
	}
	default:
		break;
	}
}

bool Design::level_is_void()
{
	for (int i = 0; i < level_size; ++i)
		if (brick_array[i].get_hit())
			return false;
	return true;
}

void Design::draw()
{
	for (int i = 0; i < level_size; ++i)
		brick_array[i].draw();
}