#include "sepia.h"

Sepia::Sepia(Image *img): Decorator{img}{}

int min(int a){
	return a > 255 ? 255 : a;
}

void Sepia::render(PPM &ppm){

	for(int i = 0; i < ppm.getHeight(); ++i){
		for(int j = 0; j < ppm.width(); ++j){
		Pixel newpixel;
		newpixel.r = min(ppm.getPixels()[i * ppm.getHeight() + j].r *.393 + ppm.getPixels()[i * ppm.getHeight() + j].g * .769 + ppm.getPixels()[i * ppm.getHeight() + j].b * .189);
    	newpixel.g = min(ppm.getPixels()[i * ppm.getHeight() + j].r *.349 + ppm.getPixels()[i * ppm.getHeight() + j].g * .686 + ppm.getPixels()[i * ppm.getHeight() + j].b * .168);
    	newpixel.b = min(ppm.getPixels()[i * ppm.getHeight() + j].r *.272 + ppm.getPixels()[i * ppm.getHeight() + j].g * .534 + ppm.getPixels()[i * ppm.getHeight() + j].b * .131);
    	ppm.getPixels()[i * ppm.getHeight() + j] = newpixel;
       }
	}

}