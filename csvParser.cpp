#include "csvParser.h"
#include <sstream>

using namespace std;

csvParser::csvParser(std::string inputFile):
	inputFileName(inputFile), delimiter(','), seperator('\n')
{
	inputfp.open(inputFileName);
	if (!inputfp.is_open())
	{
		cout << "Couldn't open file: " << inputFileName;
	}
}


std::vector<std::string> csvParser::getrecord()
{
	vector<std::string> records;
	string line;

	getline(inputfp, line, seperator);
	stringstream inputstream(line);

	string record;
	while (getline(inputstream, record, delimiter))
	{
		records.emplace_back(record);
	}

	return records;
}

