
#include "absl/strings/str_format.h"

void CcFunction();

int main(int argc, char **argv) {
	::absl::StrFormat("I'm a main function\n");
	CcFunction();

	return 0;
}
