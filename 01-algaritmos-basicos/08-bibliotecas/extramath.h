#ifndef _EXTRAMATH_H
#define _EXTRAMATH_H
	int fatorial(int n) {
		if(n <= 0) 
			return 1;
		else 
			return n * fatorial(n - 1);
	}

#endif