// This program is to determine missing hieghts
#include <stdio.h>
int main(void)
{
	float h1,h2,h3, avg;
	float sum_known, total_sum, sum_missing, missing_height;
	//Input the height of three known people
	printf("Enter the height 1:");
	scanf("%f",&h1);
	printf("Enter the height 2:");
        scanf("%f",&h2);
	printf("Enter the height 3:");
        scanf("%f",&h3);
	//Input average height
	printf("Enter the average of height:");
        scanf("%f",&avg);
	//Total of heights
	total_sum = avg*5;
	//Total of known heights
	sum_known = h1+h2+h3;
	//Total of missing heights
	sum_missing = total_sum-sum_known;
	//Missing heights are same
	missing_height = sum_missing/2;
	//Output
	printf("\n******Results******\n");
	printf("Sum of missing heights: %.2fCM\n", sum_missing);
	printf("Height of missing person 1: %.2fCM\n", missing_height);
	printf("Height of missing person 2: %.2fCM\n", missing_height);

        return 0;
}




	



