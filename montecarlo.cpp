#include <random> // for random numbers
#include <chrono> // for generating the seed

/* Other include files here */

// Global! Probably shouldn't be used in real code
std::default_random_engine re;

/*! Generate a random double within a given range */
double random_double(double lower_bound, double upper_bound)
{
   std::uniform_real_distribution<double> dist(lower_bound, upper_bound);
   return dist(re);
}




int main(void)
{
    // Initialize based on time
    re.seed(std::chrono::system_clock::now().time_since_epoch().count());

    /*
    More code here
    */

    return 0;
}
