# color conversion utilities
-----------------------
**colorconversion.h** is a simple header file for including in your c++ / avr or arduino projects

this header file add many commonly used color conversion methods

* **getLong**(int r, int g, int b) - *convert rgb values to long int*
* **getRGB**(long color) - *convert long values to rgb array*
* **getHEX**(long color) - *convert long values to string*
* **getHEX**(int&#42; rgb) - *convert int array to string*

you can pretty much do everything else you need by combining the above methods
