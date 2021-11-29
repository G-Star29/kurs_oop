#ifndef LEVEL_H
#define LEVEL_H
#include "general.h"
#include "Rectangle.h"

class Design : public Main
{
private:
	int current_level;
	int level_size;
	Rectangle *brick_array;
	RenderWindow *window;
	Vector2f brick_coord;
	Vector2f brick_size;

public:
	Design(RenderWindow &window);
	void level_reserve_memory();
	void level_delete_memory();
	void next_level();
	void level1_constructor();
	void level2_constructor();
	void level3_constructor();
	void level4_constructor();
	void level5_constructor();
	void level6_constructor();
	void level7_constructor();
	void level8_constructor();
	void level9_constructor();
	void level10_constructor();
	void set_level();
	bool level_is_void();
	int get_level_size();
	int get_current_level();
	Rectangle* get_brick_array();
	virtual void draw();
};
#endif LEVEL_H