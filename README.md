
# TXT File compressor(Huffman coding)

The Huffman Coding project is an implementation of the Huffman coding algorithm in C++. Huffman coding is a widely used data compression technique that reduces the size of files by assigning variable-length codes to different characters based on their frequency of occurrence. This algorithm efficiently represents commonly used characters with shorter codes and less frequently used characters with longer codes, resulting in significant file size reduction.

The main objective of this project is to provide a file compression and decompression utility using Huffman coding. The program takes an input file and generates a compressed output file using the Huffman coding algorithm. The compressed file has the .huf extension. Additionally, the program allows the decompression of Huffman-encoded files, recovering the original file.

By using Huffman coding, the project offers an effective way to reduce file sizes while preserving the integrity of the data. The compression and decompression processes are implemented in a user-friendly manner, making it convenient to compress and decompress files using the command-line interface or function calls.

This readme file provides an overview of the project, explains its features, describes the code structure, and provides instructions on how to use and compile the program. You can read more about Huffman coding [here](https://en.wikipedia.org/wiki/Huffman_coding).


## Features
 -   File Compression: The project allows users to compress files using the Huffman coding algorithm. It analyzes the frequency of characters in the input file and generates optimal variable-length codes for each character. The compressed file size is significantly reduced, saving storage space.

 -   File Decompression: The program supports the decompression of Huffman-encoded files. It reconstructs the original file by decoding the compressed data using the Huffman tree structure.

 -   Command-Line Interface: The project provides a command-line interface, allowing users to interact with the compression and decompression functionalities. Users can specify the input file and the desired output file names as command-line arguments.

 -   Customizable File Names: Users have the flexibility to choose custom file names for the input and output files, making it convenient to organize and identify the compressed and decompressed files.

 -   Efficient Compression: The Huffman coding algorithm efficiently assigns shorter codes to frequently occurring characters and longer codes to less frequent characters. This results in optimal compression, effectively reducing the file size while preserving the data.

 -   Handling of ASCII Characters: The project handles a wide range of ASCII characters, supporting text files that contain standard English characters, digits, special symbols, and control characters.

-    Readability and Maintainability: The code is written in a modular and well-structured manner, making it easy to understand, modify, and maintain. It follows best practices for code organization and documentation.

 -   Error Handling: The project includes error handling mechanisms to handle file input/output errors, invalid file formats, and other potential runtime errors gracefully. It provides informative error messages to assist users in troubleshooting issues.

 -   Portability: The code is implemented in C++ and can be compiled and executed on various platforms, including Windows, macOS, and Linux.

 -   Code Reusability: The project utilizes object-oriented programming principles, encapsulating related functionalities into classes and methods. This promotes code reusability and extensibility, allowing for future enhancements and modifications.

 -   Data Integrity: The compression and decompression processes ensure the integrity of the data. The original file can be accurately recovered without any loss or corruption.

 -   Performance Optimization: The project incorporates efficient data structures such as priority queues and binary trees to optimize the performance of the Huffman coding algorithm. It handles large files with reasonable speed and minimal memory usage.

## Usage
To use the Huffman coding project to compress a file, follow these steps:
1. To run this project you need to create an executable file.
2. Compile the program and run it from the command line, providing the input file name and the desired name for the compressed output file as command-line arguments.
3. For Compressing
![Screenshot 2023-06-20 024719](https://github.com/SwapnilGavali295/TxtFileCompressor/assets/137003175/475041de-26be-4238-8f69-7911ec8c32e6)

4. For Decompressing

5. Note: Make sure to replace the path to the "huffman.hpp" header file with the correct path in your system. Additionally, ensure that you provide the correct file names as command-line arguments when running the program.
## Code Structure 
The Huffman coding project follows a structured and organized code architecture to ensure modularity, readability, and maintainability. Here is an overview of the code structure:

    huffman.hpp: This header file contains the class declaration for the huffman class, which encapsulates the Huffman coding functionalities.

    huffman.cpp: This source file contains the implementation of the huffman class member functions.

    Class Members:
        arr: A vector of Node* representing character nodes with their frequencies.
        inFile, outFile: fstream objects for file input and output operations.
        inFileName, outFileName: Strings to store the input and output file names.
        root: Pointer to the root node of the Huffman tree.
        minHeap: A priority queue of Node* using a custom comparator class Compare to build the min heap.

    Private Member Functions:
        createArr(): Initializes the arr vector with character nodes and their frequencies.
        traverse(): Recursively traverses the Huffman tree to generate Huffman codes for each character.
        binToDec(): Converts a binary string to its equivalent decimal value.
        decToBin(): Converts a decimal number to its equivalent binary string.
        buildTree(): Reconstructs the Huffman tree while decoding the file.
        createMinHeap(): Creates a min heap of nodes based on the frequencies of characters in the input file.
        createTree(): Constructs the Huffman tree using the min heap.
        createCodes(): Generates Huffman codes for each character by traversing the Huffman tree.
        saveEncodedFile(): Saves the Huffman-encoded file by writing the compressed data to the output file.
        saveDecodedFile(): Saves the decoded file by traversing the Huffman tree and writing the original data to the output file.
        getTree(): Reads the input file to reconstruct the Huffman tree.

    Public Member Functions:
        Constructor: Initializes the inFileName and outFileName variables and calls the createArr() function.
        compress(): Compresses the input file using Huffman coding.
        decompress(): Decompresses the input file using Huffman coding.

The code structure promotes encapsulation, separation of concerns, and code reusability. Each function has a specific purpose, and the private members provide internal functionality to support the main operations of file compression and decompression using Huffman coding.


## Limitations
Limitations of the Huffman coding implementation:
-  Lossless Compression: Huffman coding is a lossless compression technique, which means it preserves all the information in the original file. However, it may not be as effective as lossy compression techniques for certain types of data, such as images or videos, where lossy compression can achieve higher compression ratios.

-  Encoding Overhead: Huffman coding requires additional storage to store the Huffman tree or table in the compressed file. This overhead increases the size of the compressed file compared to the original file. However, the overhead is generally small compared to the overall compression achieved.

 -   Variable-Length Codes: Huffman coding generates variable-length codes for different symbols based on their frequencies. While this results in efficient encoding for frequently occurring symbols, it can lead to longer codes for less frequent symbols. This can slightly increase the decoding time, as variable-length codes need to be parsed during the decompression process.

 -   Compression Ratios: The compression ratio achieved by Huffman coding depends on the statistical properties of the input data. It is more effective for files with significant redundancy or repetitive patterns. For files that do not exhibit such characteristics, the compression ratio may be relatively low.

 -   Sequential Processing: Huffman coding processes the input file sequentially, reading and encoding symbols one by one. This sequential nature limits the parallelization of the compression process, making it less suitable for multi-core or distributed processing environments.

 -   Sensitivity to File Order: The order of symbols in the input file can affect the resulting Huffman tree and the compression achieved. If the input file order changes, even with the same set of symbols, the resulting compressed file may differ, leading to different compression ratios.

-    Performance on Small Files: Huffman coding may not be efficient for very small files, as the overhead of storing the Huffman tree or table can be significant compared to the size of the file itself. In such cases, the compressed file may be larger than the original file.

 -   Random Data: Huffman coding is not effective for compressing truly random data, as random data lacks any significant patterns or redundancy that can be exploited for compression. In such cases, the compressed file may even be larger than the original file.
