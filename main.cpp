#include "csvParser.h"

using namespace std;

int main(int ac, char* av[])
{
	string filename = "example.csv";
	csvParser csv(filename);

	vector<string> line = csv.getrecord();

	for (string s : line)
	{
		cout << s << "\t";
	}
	cout << endl;

	return 0;
}