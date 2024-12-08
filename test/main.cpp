#include "RandomGenerator.h"

/**
 * @brief Constructs a RandomGenerator object and initializes the RNG.
 */
RandomGenerator::RandomGenerator() {
    std::srand(static_cast<unsigned int>(std::time(0)));
}

/**
 * @brief Generates a random integer between two bounds.
 *
 * @param lower The lower bound (inclusive).
 * @param upper The upper bound (inclusive).
 * @return A random integer between lower and upper, inclusive.
 */
int RandomGenerator::getRandomInt(int lower, int upper) {
    return lower + std::rand() % (upper - lower + 1);
}

/**
 * @brief Generates a random floating-point number between two bounds.
 *
 * @param lower The lower bound (inclusive).
 * @param upper The upper bound (inclusive).
 * @return A random floating-point number between lower and upper.
 */
float RandomGenerator::getRandomFloat(float lower, float upper) {
    float scale = static_cast<float>(std::rand()) / RAND_MAX;
    return lower + scale * (upper - lower);
}
