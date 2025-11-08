//Write a function that changes the endianness of the color and returns it. The color should be ordered like this: ARGB The function must be prototyped as follows: int swap_endian_color (int color ) ;

int swap_endian_color(int color)
{
	union{
		int value;
		unsigned char b[4];
	} u, swapped;

	u.value = (0xFF << 24) | color;

	swapped.b[0] = u.b[3];
	swapped.b[1] = u.b[2];
	swapped.b[2] = u.b[1];
	swapped.b[3] = u.b[0];

	return swapped.value;
}
