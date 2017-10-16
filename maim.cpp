#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
string str1 = argv[1];
char symbhol = argv [2][0];
char symbhol2 = argv [3][0];
for (int i=0; i< str1.length(); i++)
{
        if (str1[i]==symbhol)
        str1[i] = symbhol2;

} 
cout << str1 << endl;
}
