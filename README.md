# Color Utilities for Arduino
**ColorUtils** is a simple class for including in your c++ / avr or arduino projects

### Example usage

In your *.ino* file

```
/*
 * @description include the header file and class definition
 */
#include "ColorUtils.h"
ColorUtils *COLOR_UTILS;
RGB color = {0,0,0};
```

In your ***setup()*** method of your *.ino* file

```
void setup()
{
	/* anything before... */
	COLOR_UTILS = new ColorUtils();
	/* anything after... */	
}
```

Example in your ***loop()*** method of your *.ino* file

```
void loop()
{
  UTILS->getRGB(color, (long) strtol("FFCC33", NULL, 16));
}
```





```
/*
 * @method getBin
 * @param number (int)
 * @return result {String} 
 * @desc converts the decimal param to binary string
 */
String getBin(int number);
```

```
/*
 * @method getLong
 * @desc convert rgb values to long int
 * @param r {int} red value
 * @param g {int} red value
 * @param b {int} red value
 * @return {long}
 */
long int getLong(int r, int g, int b);
```

```
/*
 * @method getRGB
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {int*}
 */
int* getRGB(long color);
```

```
/*
 * @method getRGB
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 */
void getRGB(RGB& rgb, long color);
```

```
/*
 * @method getHEX
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {String}
 */
String getHEX(long color);
```

```
/*
 * @method getHEX
 * @desc convert long values to rgb array
 * @param color {long} long value represantation of color
 * @return {String}
 */
String getHEX(int* rgb);
```

