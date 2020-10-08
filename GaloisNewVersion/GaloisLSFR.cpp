#include <iostream>
#include <cmath>

using std::cout; using std::endl; using std::pow; using std::log2;

int * findRangeSeeds(int lowerBound, int upperBound);
int findNumSeeds(int taps);
int getNewState(int currentState, int taps);
int getIndex(int * arr, int arrLength, int target, int startFrom);

int getIndex(int * arr, int arrLength, int target, int startFrom){
	return 1;
}

int getNewState(int currentState, int taps, int tapsLength) {
	int outputBit = currentState%2; 
	if (outputBit) {
		currentState^=taps;
		cout << currentState << endl;
		currentState >>= 1;
		cout << currentState << endl;
		currentState+=(int) pow(2, tapsLength-1);	
	}
	else {
		 currentState >>= 1;
	}
	return currentState;
}

int findNumSeeds(int taps) {
	if (taps=0){ return 1;}
	int reqSeeds = 1;
	int lastUnreached = 1;
	int tapsLength = (int)(log2(taps))+1;
	int filledStates[(int) pow(2, tapsLength)]{0};
	int changedStates = 1;
	int currentState = 1;
	while(changedStates < (int) (pow(2, tapsLength))) {
		++reqSeeds;
		currentState = getIndex(filledStates, sizeof(filledStates)/sizeof(*filledStates), 0, lastUnreached+1);
		while(filledStates[currentState] = 0) {
			changedStates+=1;
			filledStates[currentState] = 1;
			currentState = getNewState(currentState, taps, tapsLength); 
		}
	}
	return reqSeeds;
}


int * findRangeSeeds(int lowerBound, int upperBound) {
	int *output = new int[upperBound - lowerBound + 1];
	// testing for lower bound of 0 here would improve efficiency but reduce readability
	for (int taps=lowerBound; taps<=upperBound; ++taps) {
		output[taps-lowerBound] = findNumSeeds(taps);
	}
	return output;
}

int main() {
	int ans = getNewState(1, 4, 3);
	cout << ans << endl;
	return 0;
}


