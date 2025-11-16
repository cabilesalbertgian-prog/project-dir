//Cabiles, Albert Gian B.          DIT 1-2
#include <stdio.h>

int main() {
	 char *name = "Albert";
	 char gender = 'M';
	 int age = 18;
    float height = 5.7;
    float weight = 62;

    printf("name %s\n",name);
    printf("Gender: %c\n", gender);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("weight: %.1f\n", weight);
    
    return 0;

}