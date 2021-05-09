#include "flip.h"

Flip::Flip(Image *img): Decorator{img}{}

void Flip::render(PPM &ppm){
	int height = ppm.getHeight();
	int width = ppm.getWidth();
	for(int i = 0; i < width; ++i){
		for(int j = 0; j < height; ++j){
			Pixel swap = ppm.getPixels()[i * height + j];
			ppm.getPixels()[i * height + j] = ppm.getPixels()[i * height + ((width) - 1 - j)];
			ppm.getPixels()[i * height + ((width) - 1 - j)] = swap;

		}
	}
}
	