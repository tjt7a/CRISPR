#include "util.h"


/**
 * Checks errno to see if there was an error opening the file.
 */
void inputFileCheck() {
    if(errno == ENOENT) {
        std::cout<< "VAsim Error: no such input file." << std::endl;
        exit(-1);
    }
}

/**
 * Opens and parses a file name and returns its contents as a vector of unsigned chars.
 */
std::vector<unsigned char> file2CharVector(std::string fn) {

    // open the file:
    std::ifstream file(fn, std::ios::binary);
    if(file.fail()){
        inputFileCheck();
    }

    // get its size:
    std::streampos fileSize;

    file.seekg(0, std::ios::end);
    fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    // Stop eating new lines in binary mode!!!
    file.unsetf(std::ios::skipws);

    // reserve capacity
    std::vector<unsigned char> vec;
    vec.reserve(fileSize);

    // read the data:
    vec.insert(vec.begin(),
               std::istream_iterator<unsigned char>(file),
               std::istream_iterator<unsigned char>());

    return vec;

}
