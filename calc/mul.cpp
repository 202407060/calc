#include "sum.h"
int mul(int x, int y){
	int result = 0;
	for(int i = 0; i < y; i++){
		result = sum(result, x);
	}
}
