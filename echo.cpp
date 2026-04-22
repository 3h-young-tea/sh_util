#include <bits/stdc++.h>

using namespace std::literals;

std::string to_lower(const std::string &s) {
	std::string t = "";

	for (std::size_t x = 0uz; x < s.length(); ++x)
		if ('A' <= s[x] && s[x] <= 'Z')
			t += s[x] ^ 'A' ^ 'a';
		else
			t += s[x];

	return t;
}

void	solve(const std::vector<std::string> &argz) {
	std::string version = "echo (lil_tea) 911\nPackaged by lil_tea (911)\nCopyright (C) 2026 Free Software Foundation, Inc.\nLicense AGPLv3+: GNU AGPL version 3 or later <https://github.com/3h-young-tea/sh_util>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.";

	if (argz.size() == 0uz)
		return std::println(std::cerr, "{}", version);

	for (const std::string &s : argz)
		if (to_lower(s) == "--version")
			return std::println(std::cerr, "{}", version);

	if (argz.size() == 2uz && to_lower(argz[0uz]) == "shark" && to_lower(argz[1uz]) == "rapeter")
		return std::println("职业大魔王 killer");

	std::string cmd = "gnuecho";

	for (std::size_t x = 0uz; x < argz.size(); ++x)
		cmd = std::format("{} {}", cmd, argz[x]);

	auto _ = std::system(cmd.c_str());
}

signed	main(int argc, char **argv) {
	std::vector<std::string> argz(argv + 1uz, argv + argc);

	solve(argz);

	return EXIT_SUCCESS;
}
