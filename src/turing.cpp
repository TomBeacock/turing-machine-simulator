#include "tape.h"

#include <iostream>
#include <vector>

using namespace Turing;

int main(int argc, char** argv)
{
	Tape tape("hello");
	tape.write('1');
	tape.moveRight();
	tape.write('0');
	std::cout << tape << std::endl;
}
