#include <stdio.h>
#include <stdlib.h>

#define size 5
/* IMPLEMENT ME: Declare your functions here */
float add (int a, int b);
float subtract (int a, int b);
float multiply (int a, int b);
float divide (int a, int b);
float exit_prog ();


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  float (*ptrfunc[size])(int, int) = {add, subtract, multiply, divide, exit_prog};
  int operation, a, b;

  printf("Enter two numbers:\n");
  scanf("%d%d", &a, &b);

  printf("Enter a number for an operation:\n'0' : add\n'1' : subtract\n'2' : multiply\n'3' : divide\n'4' : exit\n");
  
  scanf("%d", &operation);
  printf("x = %0.2f\n", ptrfunc[operation](a, b));
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
float add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}

float subtract (int a, int b) { 
  printf ("Subtracting 'a' and 'b'\n"); 
  return a - b; 
}

float multiply (int a, int b) { 
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b; 
}

float divide (int a, int b) { 
  if (b == 0) {
    printf("Cannot divide by zero!\n");
    exit(0);
    return;
  }
  printf ("Dividing 'a' and 'b'\n"); 
  return (float)a / (float)b; 
}

float exit_prog () {
  exit(0);
  return 0;
}

