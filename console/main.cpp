#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ofstream file;
    file.open(argv[1]);
    if (!file.is_open())
    {
        return 1;
    }
    if (argc < 2)
    {
        file << "Incorrect input arguments!" << endl;
        return 1;
    }    
    file << "File name: " << argv[1] << endl;
    file.close();
    return 0;
}
