#ifndef UNIT_H_
#define UNIT_H_

#include <string>
#include <vector>

class Unit {
public:
	Unit();
	virtual ~Unit();

	void assertEquals(std::string msg, int expected, int actual);
	void assertvectorEquals(std::string msg, std::vector<int>& expected, std::vector<int>& actual);
	void assertFalse(std::string msg, bool expected);
	void assertTrue(std::string msg, bool expected);
	void assertNonNull(std::string msg, void* actual);
	void assertNull(std::string msg, void* actual);
	void assertpointerEquals(std::string msg, int* expected, int* actual, int n);
	void printResults();

private:
	std::vector<std::string> failures;

	std::string toStr(std::vector<int>& v);
};

#endif /* UNIT_H_ */
