#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
	double res = 1;
 
  	if(pow == 0 && n == -1)
    	return 1;
  	for(unsigned int i = 0; i < pow; i++)
    	res = res * n;
  	return res;
}
