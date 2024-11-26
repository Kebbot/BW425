#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <cmath>
#include <io.h>
#include "Header.h"
using namespace std;

struct Human
{
    int* countHead;
};

void setHead(int*& name, int size)
{
    name = new int[size];
    for (int i = 0; i < size; i++)
    {
        name[i] = 1;
    }
}

void setHead(Human& name, int size)
{
    name.countHead = new int[size];
    for (int i = 0; i < size; i++)
    {
        name.countHead[i] = 1;
    }
}


int main()
{
    system("chcp 1251 > nul");
    //setlocale(LC_ALL, "Rus");
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);
    srand(time(NULL));

  
    
    return 0;
}
