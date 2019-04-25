#include"memory_leak.h"
//
void memory_leak()
{
	int* ptr = new int(10);
	//us it
	//forget to delete it
}