#include <stdio.h>

int main(void)
{
	float speed;
	float f_size;
	float time;

	printf("Enter your internet speed and file size, I will tell you download time.\n");
	printf("Please enter internet speed(Mb/s): \n");
	scanf("%f", &speed);
	printf("Please enter file size: \n");
	scanf("%f", &f_size);

	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", speed, f_size, f_size * 8 / speed);
        return 0;
}	
