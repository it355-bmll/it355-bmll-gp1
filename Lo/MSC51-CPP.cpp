/**
 * @file MSC51-CPP.cppf
 * @brief A C++ program that generates a pseudorandom number with a cryptographically secure true random seed in compliance with MSC51-CPP
 */

#include <iostream>
#include <random>


/**
 * @brief Main function to generate and print a random number.
*/
int main() {
    // Create a random_device object for a cryptographically secure source of randomness
    std::random_device rd;
    
    // Uses the rd instance of the random_device object to generate the seed from source of randomness
    std::default_random_engine generator(rd());
    
    // Defines range of randomly generated numbers from the PRNG
    std::uniform_int_distribution<int> distribution(1, 100);

    // Finally generates a pseudorandom number, ensuring proper seeding of PNRG
    int random_number = distribution(generator);

    // Outputs to the terminal "Random number: [random_number]"
    std::cout << "Random number: " << random_number << "\n";

    return 0;

}