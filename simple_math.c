/** \file simple_math.c
	\brief definition of the functions 
	\author Paolo Gastaldo
  
*/

#include "simple_math.h"

float mean(int a, int b) {
	return (float)(a+b)/2.;
}

int max(int a, int b) {
	if (a > b) 
		return a; 
	else
		return b;
}