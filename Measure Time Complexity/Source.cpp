#include <iostream>
#include <chrono>

int main()
{
    auto start = std::chrono::high_resolution_clock::now(); // Start measuring time
    // insert the algorithm or a fuction
    auto stop = std::chrono::high_resolution_clock::now(); // Stop measuring time

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Calculate the duration in microseconds

    std::cout << "\nTime taken by algorithm: " << duration.count() << " microseconds" << std::endl; // Print duration
}

