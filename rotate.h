#ifndef _ROTATE_H
#define _ROTATE_H
#include "decorator.h"

class Rotate: public Decorator{
public:
	Rotate(Image *img);
	void render(PPM &ppm) override;

};

#endif