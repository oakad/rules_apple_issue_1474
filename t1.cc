#include "absl/strings/str_format.h"
#include "absl/strings/match.h"

void ObjcFunction();

void CcFunction() {
	::absl::StrFormat("I'm a cc function %d\n", ::absl::EqualsIgnoreCase("aaa", "AAA"));
	ObjcFunction();
}
