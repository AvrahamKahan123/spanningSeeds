CXX = g++
spanningSeeds: bin/CLI.o bin/spanningSeeds2.o bin/threading.o bin/errorMessages.o
	$(CXX) -pthread  bin/CLI.o  bin/spanningSeeds2.o bin/threading.o bin/errorMessages.o -o bin/spanningSeeds
bin/CLI.o: CLI.cpp threading.h spanningSeeds2.h errorMessages.h
	$(CXX) -c CLI.cpp -o bin/CLI.o
bin/threading.o: threading.cpp spanningSeeds2.h
	$(CXX) -c threading.cpp -o bin/threading.o
bin/errorMessages.o: errorMessages.cpp
	$(CXX) -c errorMessages.cpp -o bin/errorMessages.o
bin/spanningSeeds2.o: spanningSeeds2.h 
	mkdir -p bin
	$(CXX) -c spanningSeeds2.cpp -o bin/spanningSeeds2.o
clean:
	rm bin/*
clean-obj:
	rm bin/*.o
