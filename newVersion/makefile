CXX = g++
spanningSeeds: CLI.o spanningSeeds2.o threading.o errorMessages.o
	$(CXX) -pthread  CLI.o  spanningSeeds2.o threading.o errorMessages.o -o spanningSeeds
CLI.o: CLI.cpp threading.h spanningSeeds2.h errorMessages.h
	$(CXX) -c CLI.cpp 
threading.o: threading.cpp spanningSeeds2.h
	$(CXX) -c threading.cpp
errorMessages.o: errorMessages.cpp
	$(CXX) -c errorMessages.cpp
spanningSeeds2.o: spanningSeeds2.h
	$(CXX) -c spanningSeeds2.cpp

