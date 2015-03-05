/*
** @method getLong
** @desc convert rgb values to long int
** @param r {int} red value
** @param g {int} red value
** @param b {int} red value
** @return {long}
*/
long int getLong(int r, int g, int b)
{
  return (unsigned long)r << 16 | (unsigned long)g << 8 | (unsigned long)b;
}

/*
** @method getRGB
** @desc convert long int to int array
** @param color {long} long value represantation of color
** @return {int*}
*/
int* getRGB(long color)
{
  int r = (color>>16);
  int g = ((color>>8) & 0xff);
  int b = (color & 0xff);
  int rgb[3] = {r,g,b};
  return rgb;
}

/*
** @method getHEX
** @desc convert long values to string
** @param color {long} long value represantation of color
** @return {String}
*/
String getHEX(long color)
{
  return String(color, HEX);
}

/*
** @method getHEX
** @desc convert int array to string
** @param color {long} long value represantation of color
** @return {String}
*/
String getHEX(int* rgb)
{
  int r = rgb[0];
  int g = rgb[1];
  int b = rgb[2];
  return getHEX(getLong(r,g,b));
}