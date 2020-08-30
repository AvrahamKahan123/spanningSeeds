# spanningSeeds
Number of output sequences from a fibonacci linear feedback shift register whose feedback polynomial coefficients (excluding the constant term) correspond to the binary representation of n.
Can be thought of as a Pseudorandom number generator algorithm - Determine the number of seeds needed to reach every possible generated number for the given tap or set of taps.
ENTRY POINT FOR PROGRAM FOR NEWEST VERSION IS CLI.cpp 
# usage 
type registerSequences --help to see all command line options
# explanation 
For explanation of mathematical research, read RESULTS.txt
For explanation of programming decisions, read explanation.txt

# Background on random numbers 
Linear shift feedback registers work in the following way for base 2 (works the same for all other bases)
The taps are chosen (any positive integer).
Another positive integer (a seed) is chosen as the first random number with the same number of bits in its binary representation as the tap.
The next number is generated by eliminating the highest bit of the seed, moving all the other bits over to the right by one, and making the first bit.
the dot product of the binary representations of the taps and the seed (mod 2). Every further number is generated by the same process, but instead of the seed,
using the last generated random number.
Ex. set taps to 5, and seed to 3. So taps = [1 0 1] in binary and seed = [1 1 0]. So next number is 7 ([1 1 1]), and then 6 ([0 1 1]).

# installation 
Follow installation.sh or run it.
