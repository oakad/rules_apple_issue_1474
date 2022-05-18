#include "absl/strings/str_format.h"
#include "absl/strings/match.h"

#include <os/log.h>

void ObjcFunction() {
	::absl::StrFormat("I'm an objc function %d\n", ::absl::EqualsIgnoreCase("aaa", "AAA"));
	auto l = os_log_create("aaa", "bbb");
	os_log_with_type(l, OS_LOG_TYPE_ERROR, "%s", "Alas!");
}
