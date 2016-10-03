/*
 * @author Eugene Andruszczenko
 * @version 0.0.5
 * @date created 08/19/16
 * @date updated 09/14/16
 * @description
 */
#include <Arduino.h>

/*
 * @struct RGB
 */
typedef struct{int r;int g;int b;} RGB;

#ifndef ColorUtils_h
#define ColorUtils_h  

/*
 * @class ColorUtils
 * @description 
 */
class ColorUtils
{
	public:
		/*
		 *
		 */
		ColorUtils();

		/*
		 * @method getBin
		 * @param number (int)
		 * @return result {String} 
		 * @desc converts the decimal param to binary string
		 */
		String getBin(int number);

		/*
		 * @method getLong
		 * @desc convert rgb values to long int
		 * @param r {int} red value
		 * @param g {int} red value
		 * @param b {int} red value
		 * @return {long}
		 */
		long int getLong(int r, int g, int b);

		/*
		 * @method getRGB
		 * @desc convert long values to rgb array
		 * @param color {long} long value represantation of color
		 * @return {int*}
		 */
		int* getRGB(long color);

		/*
		 * @method getRGB
		 * @desc convert long values to rgb array
		 * @param color {long} long value represantation of color
		 */
    void getRGB(RGB& rgb, long color);
		
		/*
		 * @method getHEX
		 * @desc convert long values to rgb array
		 * @param color {long} long value represantation of color
		 * @return {String}
		 */
		String getHEX(long color);

		/*
		 * @method getHEX
		 * @desc convert long values to rgb array
		 * @param color {long} long value represantation of color
		 * @return {String}
		 */
		String getHEX(int* rgb);

		/*
		 * @class ColorUtils
		 * @deconstructor
		 */ 
		~ColorUtils();

	private:
};

#endif