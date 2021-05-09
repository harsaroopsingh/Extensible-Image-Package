#include "image.h"
#include "decorator.h"

class Sepia: public Decorator{
	Sepia(Image *img);
	
	void render(PPM &ppm) override;

};