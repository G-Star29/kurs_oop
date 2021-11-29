#include "Data.h"

Data::Data(RenderWindow &window, Design &level) :
				window(&window),
				level(&level),
				score(0),
				lives(start_lives),
				line_size((float)line_standart_x, (float)line_standart_y),
				line_coord(0, (float)line_position_y),
				line_color(get_default_line_color())	
{
	load_fonts();
}

Data::Data(RenderWindow &window, Design &level, int lives) :
				window(&window),
				level(&level),
				score(0),
				lives(lives),
				line_size((float)line_standart_x, (float)line_standart_y),
				line_coord(0, (float)line_position_y),
				line_color(get_default_line_color())
{
	load_fonts();
}

void Data::load_fonts()
{
	if (!font.loadFromFile("../painter.ttf"))
		cout << "[ERROR] fonts/painter.ttf is not load" << endl;
}

Color Data::get_default_line_color()
{
	return Color::Red;
}

Color Data::get_default_font_color()
{
	return Color::Green;
}

void Data::add_lives(int lives)
{
	this->lives += lives;
}

void Data::add_score(int score)
{
	this->score += score;
}

void Data::line_draw()
{
	line.setPosition(line_coord);
	line.setSize(line_size);
	line.setFillColor(line_color);
	window->draw(line);
}

void Data::draw_text_level()
{
	text_level.setFont(font);
	text_level.setString("LEVEL: " + to_string(level->get_current_level()));
	text_level.setCharacterSize(font_size);
	text_level.setColor(get_default_font_color());
	window->draw(text_level);
}

void Data::draw_text_lives()
{
	text_lives.setFont(font);
	text_lives.setPosition(200, 0);
	text_lives.setString("BALLS: " + to_string(lives));
	text_lives.setCharacterSize(font_size);
	text_lives.setColor(get_default_font_color());
    end.setFont(font);
    end.setPosition(500, 600);
    end.setString("Lose");
    end.setCharacterSize(50);
    if (lives < 0){
        window->draw(end);
       // sleep(10);
    }
	window->draw(text_lives);
}

void Data::draw_text_score()
{
	text_score.setFont(font);
	text_score.setPosition(400, 0);
	text_score.setString("SCORE: " + to_string(score));
	text_score.setCharacterSize(font_size);
	text_score.setColor(get_default_font_color());
	window->draw(text_score);
}

void Data::information_draw()
{
	draw_text_level();
	draw_text_lives();
	draw_text_score();
}

void Data::draw()
{
	line_draw();
	information_draw();
}