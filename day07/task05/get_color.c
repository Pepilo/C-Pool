//Write a function that returns the color as an int by handling its three RGB components. The function must be prototyped as follows: Write a function that returns the color as an int by handling its three RGB components. The function must be prototyped as follows: int get_color ( unsigned char red , unsigned char green , unsigned char blue ) int get_color ( unsigned char red , unsigned char green , unsigned char blue ) 

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
	int color = (red << 16) | (green << 8) | (blue);

	return color;
}
