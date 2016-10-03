/*
 * @author Eugene Andruszczenko
 * @version 0.0.5
 * @date created 08/19/16
 * @date updated 09/14/16
 * @description
 */
#include "ColorUtils.h"


/*
 * @class ColorUtils
 * @description 
 */
ColorUtils::ColorUtils(){}

/*
 * @method getBin
 * @param number (int)
 * @return result {String} 
 * @desc converts the decimal param to binary string
 */
String ColorUtils::getBin(int number)
{	
	String result = "";
	for(int i = 0; i < (sizeof(number)*4); i++){result += ((number & (1 << i)) ? "1" : "0");}
	return result;
}

/*
 * @method getLong
 * @desc convert rgb values to long int
 * @param r {int} red value
 * @param g {int} red value
 * @param b {int} red value
 * @return {long}
 */
long int ColorUtils::getLong(int r, int g, int b)
{
	return (unsigned long)r << 16 | (unsigned long)g << 8 | (unsigned long)b;
}

/*
 * @method getRGB
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {int*}
 */
int* ColorUtils::getRGB(long color)
{
	int r = (color>>16);
	int g = ((color>>8) & 0xff);
	int b = (color & 0xff);
	int rgb[3] = {r,g,b};
	return rgb;
}

/*
 * @method getRGB
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {int*}
 */
void ColorUtils::getRGB(RGB& rgb, long color)
{
	rgb.r = (color>>16);
	rgb.g = ((color>>8) & 0xff);
	rgb.b = (color & 0xff);
}

/*
 * @method getHEX
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {String}
 */
String ColorUtils::getHEX(long color)
{
	return String(color, HEX);
}

/*
 * @method getHEX
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {String}
 */
String ColorUtils::getHEX(int* rgb)
{
	int r = rgb[0];
	int g = rgb[1];
	int b = rgb[2];
	return getHEX(getLong(r,g,b));
}

/*
 * @class ColorUtils
 * @deconstructor
 */ 
ColorUtils::~ColorUtils(){}