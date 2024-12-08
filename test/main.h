#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <cstdlib>
#include <ctime>

/**
 * @class RandomGenerator
 * @brief A utility class for generating random numbers.
 *
 * This class provides methods to initialize the random number generator
 * and generate random integers and floating-point numbers within specified ranges.
 */
class RandomGenerator {
public:
 /**
  * @brief Constructs a RandomGenerator object and initializes the RNG.
  *
  * This constructor sets the seed for generating random numbers based on the current time.
  */
 RandomGenerator();

 /**
  * @brief Generates a random integer between two bounds.
  *
  * @param lower The lower bound (inclusive).
  * @param upper The upper bound (inclusive).
  * @return A random integer between lower and upper, inclusive.
  *
  * @note If the lower bound is greater than the upper bound, the behavior is undefined.
  */
 int getRandomInt(int lower, int upper);

 /**
  * @brief Generates a random floating-point number between two bounds.
  *
  * @param lower The lower bound (inclusive).
  * @param upper The upper bound (inclusive).
  * @return A random floating-point number between lower and upper.
  *
  * @note If the lower bound is greater than the upper bound, the behavior is undefined.
  */
 float getRandomFloat(float lower, float upper);
};

#endif // RANDOM_GENERATOR_H
