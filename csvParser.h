#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class csvParser
{
private:
	char delimiter;
	char seperator;
	std::ifstream inputfp;
	std::string inputFileName;

public:
	csvParser(std::string inputFile);

	void setdelimiter(const char delim) { delimiter = delim; }
	void setseperator(const char sep) { seperator = sep; }
	std::vector<std::string> getrecord();
};