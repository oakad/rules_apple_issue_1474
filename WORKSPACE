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
	sha256 = "12865e5944f09d16364aa78050366aca9dc35a32a018fa35f5950238b08bf744",
	url = "https://github.com/bazelbuild/rules_apple/releases/download/0.34.2/rules_apple.0.34.2.tar.gz",
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
