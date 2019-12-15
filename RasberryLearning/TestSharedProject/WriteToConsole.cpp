#include "./WriteToConsole.h"

// When you include them as a reference in your project it will fill in the path
#include <iostream>
#include <cstdio>



WriteToConsoleTest::WriteToConsoleTest() {
}

void WriteToConsoleTest::Reset() {
    this->count = 0;
}

void WriteToConsoleTest::Increment() {
    this->count++;
}

void WriteToConsoleTest::PrintCount() {
    printf(      "printf - The count is: %i\n", this->count);
    std::cout << "cout   - The count is:" << this->count << std::endl;
	this->count++;
}

