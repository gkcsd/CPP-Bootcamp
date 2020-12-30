#include <iostream>
#include <string>
using namespace std;

int main() {

    static const char * filename = "fileName.txt";
    static const char * editedfile = "editedFile.txt";

    rename(filename, editedfile);
    remove(editedfile);


    // FILE * fh = fopen(filename, "w");
    // fclose(fh);

    return 0;
}