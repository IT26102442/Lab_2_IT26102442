#include <stdio.h>
int main (void)
{
	float perimeter, length, width;

	printf("Enter The Perimeter oF The Fence =");
	scanf("%f",&perimeter);

	length = (2 * perimeter / 7);
	printf("Length = %.2fM\n", length);

	width = (3 * perimeter / 14);
	printf("Width = %.2fM\n",width);

	return 0;

}


