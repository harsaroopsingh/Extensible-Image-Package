#include "rotate.h"

Rotate::Rotate(Image *img): Decorator{img}{}

void Rotate::render(PPM &ppm){
	PPM new_ppm = ppm;
	std::vector <Pixel> newPixels = new_ppm.getPixels();
	int Height = ppm.getHeight();
	int Width = ppm.getWidth();
	for(int i = 0; i < ppm.getHeight(); ++i){
		for(int j = 0; j < ppm.getWidth(); ++j){

			newPixels[i * ppm.getHeight() + j] = ppm.getPixels()[ppm.getWidth() * (ppm.getHeight() - j - 1) + i];
		}
		
	}
	new_ppm.getHeight() = Width;
	new_ppm.getWidth() = Height;
	ppm = new_ppm;
}