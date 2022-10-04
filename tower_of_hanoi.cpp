#include <iostream>
#include<math.h>
using namespace std;
 
void towerOfHanoi(int n, char s, char d,char a)
{
    if (n == 0) 
    {
        return;
    }
    towerOfHanoi(n - 1, s, a, d);
    cout << "Move disk " << n << " from rod " << s<< " to rod " << d << endl;
    towerOfHanoi(n - 1, a, d, s);
}
 

int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'C', 'B');
    cout<<"Number of steps performed: "<<pow(2,N)-1;
    return 0;
}