#include <stdio.h>
#include <math.h>

void main()
{
	float r, g, b, c, m, y, k, w, h, i, j;

	printf("Enter the value of Red colour :");
	scanf("%f", &r);

	printf("Enter the value of Green colour :");
	scanf("%f", &g);

	printf("Enter the value of Blue colour :");
	scanf("%f", &b);

	h = r / 255.0;
	i = g / 255.0;
	j = b / 255.0;

	if (h > i && h > j)
	{
		w = h;
	}
	else if (i > h && i > j)
	{
		w = i;
	}
	else
	{
		w = j;
	}

	c = (w - h) / w;
	m = (w - i) / w;
	y = (w - j) / w;
	k = 1.00 - w;

	printf("C : M : Y : K  ::  ");
	printf("%f : ", c);
	printf("%f : ", m);
	printf("%f : ", y);
	printf("%f", k);
}
