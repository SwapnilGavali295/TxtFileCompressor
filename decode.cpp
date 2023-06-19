#include <iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "File not detected!";
		exit(1);
	}

    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << "Decompressed successfully!" << endl;

    return 0;
}
