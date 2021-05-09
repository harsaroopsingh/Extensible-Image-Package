#ifndef _DEC_H
#define _DEC_H
#include "image.h"

class Decorator: public Image{
protected:
	Image *img;
public:
	Decorator(Image *img);
	void render(PPM &ppm) override;
};
#endif