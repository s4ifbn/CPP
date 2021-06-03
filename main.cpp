#include <iostream>
using namespace std;

// write to text files program
// for lesson https://www.youtube.com/watch?v=YbI5b3HpRRc
// for more lessons visit https://s4ifbn.com
// By Saif Bashar 2018

int main()
{
    FILE *myfile;

    char path[] = "1.txt";
    char ch;

    myfile = fopen(path, "w");

    do
    {
        cin.get(ch);
        putc(ch, myfile);
    }
    while(ch != 'x');


    fclose(myfile);

    return 0;
}
