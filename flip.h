#ifndef _FLIP_H
#define _FLIP_H
#include "decorator.h"

class Flip: public Decorator{
public:
	Flip(Image *img);
	void render(PPM &ppm) override;

};

#endif