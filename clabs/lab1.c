#include <stdio.h>
#define PI 3.14159;

int  main (void){
          int age = 21;
	  double gpa = 3.04;
	  printf("Zolangi is %d years old with a %1.2f GPA\n", age, gpa);

	  double circumference = 2 * 10 * PI;
	  
	  printf("\nThe circumference of a circle with radius 10 is: %4.5f\n", circumference);

	  typedef enum {RAIN, WIND, SUNSHINE, TORNADO, SNOW, HURRICANE} Weather;
	  Weather w = SNOW;

	  switch(w){
	  case RAIN:
	    printf("Take an umbrella. It's pouring outside!\n");
	    break;
	  case WIND:
	    printf("Might want to take allergy pills and take a coat. The wind is starting to get crazy\n");
	    break;
	  case SUNSHINE:
	    printf("You might want to take your shades today. The sun is bright today\n");
	    break;
	  case TORNADO:
	    printf("Evacuate your home! A tornado is near!\n");
	    break;
	  case SNOW:
	    printf("Take a coat today. It's starting to snow so it might be chilly out there.\n");
	    break;
	  case HURRICANE:
	    printf("Get out! Evacuate the premises. Hurricane is about to hit!!\n");
	    break;
	  default:
	    printf("Weather cannot be determined; I don't have advice for you");
	  
	    }
	  return 0;
}
