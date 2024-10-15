// Takkyon Kesselring - CSCN71020 - week07 - fall24
// Assignment 2

// Implementation for tests

#include "Tests.h"
#include "main.h"
#include <stdio.h>

void TestPerimeter(int len, int width, int expected) {

	int recieved = getPerimeter(len, width); 

	if (recieved == expected) {
		printf("Test passed!\n");
	}
	else {
		printf("Test failed.\n");
		printf("Expected %d, recieved %d\n\n", expected, recieved);
	}
}

void TestArea(int len, int width, int expected) {

	int recieved = getArea(len, width); 

	if (recieved == expected) {
		printf("Test passed!\n");
	}
	else {
		printf("\nTest failed.\n");
		printf("Expected %d, recieved %d\n\n", expected, recieved);
	}
}
