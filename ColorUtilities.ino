/*
 * @author Eugene Andruszczenko
 * @version 0.0.5
 * @date created 08/19/16
 * @date updated 09/14/16
 * @description
 */

/*
 * @description include colors
 */
#include "colors.h" 


/*
 * @description Utils
 */ 
#include "ColorUtils.h"
ColorUtils *COLOR_UTILS;
RGB color = {0,0,0};

/*
 * @method setup
 * @description main application setup
 */
void setup()
{
	/*
	 * @description open serial port @ 115200 baud
	 */
  Serial.begin(115200);

	/*
	 * @description do nothing until the serial port is open (32u4)
	 */  
  while(!Serial);

	/*
	 * @description create COLOR_UTILS
	 */
	COLOR_UTILS = new ColorUtils();
}

/*
 * @method setup
 * @description main application loop
 */
 void loop()
{
	for(int n = 0; n < 25; n++)
	{

	  char buffer[100];
	  /*
	   * @description HEX to RGB
	   */
		COLOR_UTILS->getRGB(color, (long) strtol(colors[n], NULL, 16));	   
	  sprintf(buffer, "HEX to RGB:HEX value of %s is %d, %d, %d\n", colors[n], color.r, color.g, color.b);
		Serial.print(buffer);
		/*
	   * @description RGB to LONG
	   */	  
	  sprintf(buffer, "RGB to LONG:Long value of %s is %lu\n", colors[n], COLOR_UTILS->getLong(color.r, color.g, color.b));
		Serial.print(buffer);			  
		/*
	   * @description HEX to RGB
	   */	  	  
	  sprintf(buffer, "LONG to RGB:HEX value of %lu is %d, %d, %d\n", COLOR_UTILS->getLong(color.r, color.g, color.b), COLOR_UTILS->getRGB(COLOR_UTILS->getLong(color.r, color.g, color.b)));
		delay(100);
	}
}
