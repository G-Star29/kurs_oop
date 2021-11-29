#ifndef GENERAL_H
#define GENERAL_H
#include <SFML/Graphics.hpp>
#include <cstdlib>
using namespace sf;
using namespace std;

class Main
{
public:
	static const int gameWidth = 1024;
	static const int gameHeight = 768;
	static const int window_y_min = 50;
	static float get_gamespeed();
    virtual void draw() = 0;
};
#endif GENERAL_H