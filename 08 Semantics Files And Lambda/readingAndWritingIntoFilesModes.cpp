#include <iostream>
#include <string>
constexpr int maxbuffer = 1024;
using namespace std;

int main() {

    const char * myfilename = "thisISMyfileName.txt";
    const char * information = "Lorem ipsum that's it";

    // FILE * fh = fopen(myfilename, "a");

    // for (int i = 0; i < 50; ++i) {
    //     fputs(information, fh);
    // }
    // fclose(fh);

    char buf[maxbuffer];

    FILE * fh = fopen(myfilename, "r");

    while (fgets(buf,maxbuffer,fh)) {
        fputs(buf, stdout);
    }

    fclose(fh);

    
    return 0;
}







