#include "terminal.h"
#include <stdio.h>
#include "../misc/memopr.h"
#include "../misc/converter.h"

using namespace converter;
string terminal::readLine()
{
	char buffer[4096];
	string ret;
	gets(buffer);
	ret = buffer;
	return ret;
}

void directPrint(const char* str)
{
	printf(str, 0);
}
void terminal::write(const char* str)
{
	directPrint(str);
}
void terminal::write(string str)
{
	char* chars = str.toChars();
	directPrint(chars);
	mem_free(chars);
}

void terminal::writeLine(const char* str)
{
	directPrint(str);
	directPrint("\n");
}
void terminal::writeLine(string str)
{
	char* chars = str.toChars();
	directPrint(chars);
	directPrint("\n");
	mem_free(chars);
}
