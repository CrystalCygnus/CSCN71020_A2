#pragma once
void setLength(int input, int *length);
void setWidth(int input, int *width);
int getPerimeter(int length, int width);
int getArea(int length, int width);
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);
void TestSetLength(int* len, int testVal, int expected);
void TestSetWidth(int* width, int testVal, int expected);