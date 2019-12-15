#include "./TestHeader1.h"
#include <cstdio>

DoIt::DoIt() {
	this->x = 1;
}

void DoIt::PrAndIncr() {
	printf("Count:%i\n", this->x);
	this->x++;
}