#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {

	//
	// competitive programming template file. should be modified
	// to fit the user's needs
	//
	std::vector<std::string> data = {
		"#include <iostream>",
		"#include <sstream>",
		"#include <cstdio>",
		"#include <cmath>",
		"#include <cstring>",
		"#include <string>",
		"#include <cctype>",
		"#include <vector>",
		"#include <list>",
		"#include <set>",
		"#include <map>",
		"#include <queue>",
		"#include <stack>",
		"#include <algorithm>",
		"#include <functional>",
		"using namespace std;",
		"typedef long long ll;",
		"typedef vector<int> vi;",
		"typedef vector<vector<int>> vvii;",
		"typedef pair<int, int> ii;",
		"typedef vector<ii> vii;",
		"",
		"////////////////////////////////",
		"",
		"void solve() {",
		"	",
		"}",
		"",
		"int main() {",
		"	ios::sync_with_stdio(0);",
		"	cin.tie(0);",
		"	",
		"	int t;",
		"	cin >> t;",
		"	while (t--) {",
		"		solve();",
		"	}",
		"	return 0;",
		"}"
	};

	//
	// must provide at least one file location
	//
	if (argc == 1) {
		std::cout << "Please, specify at least one output file name." << std::endl;
		return 0;
	}

	// 
	// copy the specified template to each of the files provided
	//
	for (int i = 1; i < argc; ++i) {
		std::ofstream file;
		file.open(argv[i], std::ios_base::app);
		for (const auto& line : data) {
			file << line << "\n";
		}
	}

	return 0;
}
