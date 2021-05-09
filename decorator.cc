#include "decorator.h"

Decorator::Decorator(Image *img): img{img}{}

void Decorator::render(PPM &ppm){
	img->render(ppm);
}