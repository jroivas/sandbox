CXXFLAGS += -std=c++0x

test: binarysearch.o test_binarysearch.o
	$(CXX) -o test $^

binarysearch.o: binarysearch.cpp

test_binarysearch.o: test_binarysearch.cpp

clean:
	rm -rf *.o test
