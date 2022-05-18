workspace(name = "rules_apple_issue_1474")


load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
	name = "com_google_absl",
	sha256 = "dcf71b9cba8dc0ca9940c4b316a0c796be8fab42b070bb6b7cab62b48f0e66c4",
	strip_prefix = "abseil-cpp-20211102.0",
	urls = [
		"https://storage.googleapis.com/grpc-bazel-mirror/github.com/abseil/abseil-cpp/archive/20211102.0.tar.gz",
		"https://github.com/abseil/abseil-cpp/archive/20211102.0.tar.gz",
	],
)

http_archive(
	name = "build_bazel_rules_apple",
	sha256 = "77e8bf6fda706f420a55874ae6ee4df0c9d95da6c7838228b26910fc82eea5a2",
	url = "https://github.com/bazelbuild/rules_apple/releases/download/0.32.0/rules_apple.0.32.0.tar.gz",
)

load(
	"@build_bazel_rules_apple//apple:repositories.bzl",
	"apple_rules_dependencies",
)
apple_rules_dependencies()

load(
	"@build_bazel_apple_support//lib:repositories.bzl",
	"apple_support_dependencies",
)
apple_support_dependencies()
