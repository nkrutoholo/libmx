#include "libmx.h"

int mx_sqrt(int x) {
    if (x > 46340 * 46340)
    	return 0;
  	for (int i = 0; i * i <= x; i++) {
 		if (i * i == x)
    		return i;
  	}
  	return 0;
}
