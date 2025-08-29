#include <stdio.h>

int main() {
	// your code goes here
	float BMI,weights,heights;
	printf("Enter the value of weights");
	scanf("%d", &weights);
	printf("Enter the value of heights");
	scanf("%d", &heights);
	BMI=weights/(heights*heights);
	printf("your BMI is:%2f\n",BMI);
	if (BMI<15) {
	printf("starvation");
}   else if (BMI >=15.1 && BMI <=17,5) {
    printf("anorexic");
}   else {
    printf("category not in the page");
}
    return 0;
}

    

