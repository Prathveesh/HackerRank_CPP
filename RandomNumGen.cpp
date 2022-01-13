#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    static int a = 1;
    srand(time(0));
    cout << (rand() % 10)+1 << endl;
    return 0;
}