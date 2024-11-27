#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <io.h>
#include <vector>
using namespace std;




int main()
{
    system("chcp 1251 > nul");
    //setlocale(LC_ALL, "Rus");
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);
    srand(time(NULL));

    
    vector<vector<int>> ver2;
    int size = 2 + rand() % (15 - 2);
    for (int i = 0; i < size; i++)
    {
        ver2.push_back({});
    }
    for (int i = 0; i < size; i++)
    {
        ver2.push_back({});
        int tmpSize = 2 + rand() % (15 - 2);
        for (int j = 0; j < tmpSize; j++)
        {
            int tmp = 1 + rand() % (100 - 1);
            ver2[i].push_back(tmp);
        }
    }
    for (int i = 0; i < ver2.size(); i++)
    {
        for (int j = 0; j < ver2[i].size(); j++)
        {
            cout << ver2[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
