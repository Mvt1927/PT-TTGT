#include "iostream"
using namespace std;

int main(int argc, char const *argv[])

{
    string argv_string = "";
    for (int i = 1; i < argc; i++)
    {
        string temp = argv[i];
        argv_string += " " + temp;
    }
    system(("php C:\\xampp\\src\\phpandroid.phar" + argv_string).c_str());
    return 0;
}