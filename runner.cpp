#include <bits/stdc++.h>

using namespace std::literals;

#if	LONG_MAX != 0x7fff'ffff'ffff'ffffz
#define	long	std::int64_t
#undef	LONG_MAX
#define	LONG_MAX	0x7fff'ffff'ffff'ffffz
#undef	ULONG_MAX
#define	ULONG_MAX	0xffff'ffff'ffff'ffffuz
#endif

#if	__cplusplus < 202603l
#define	pre(x)
#define	post(x)
#endif

void	solve(const std::vector<std::string> &argz)
	pre(1uz < argz.size()) {
	std::println("");

	std::println("{} input start", std::string(16uz, '-'));

	std::string full_token, token;

	while (std::cin >> token)
		full_token += token + " ";

	std::println("{} input term", std::string(16uz, '-'));

	std::println("");

	if (argz[1uz].substr(argz[1uz].length() - 4uz) == ".elf")
		auto _ = std::system(std::format("echo \"elf: $(du -k '{}' | cut -f1)kib\"", argz[1]).c_str());

	std::println("{} runnin start", std::string(16uz, '-'));

	std::string cmd = std::format("echo {} | /usr/bin/time -f '\n{} runnin term\ntime: %esec\nram: %Mkib'", full_token, std::string(16uz, '-'));

	for (std::size_t x = 1uz; x < argz.size(); ++x)
		if (argz[x][argz[x].length() - 1uz] == '<' || argz[x][argz[x].length() - 1uz] == '>')
			cmd = std::format("{} {}", cmd, argz[x]);
		else
			cmd = std::format("{} \"{}\"", cmd, argz[x]);

	auto x = std::system(cmd.c_str());
	std::println("ret: {}\n", WEXITSTATUS(x));
}

signed	main(int argc, char **argv) {
	std::vector<std::string> argz(argv, argv + argc);

	solve(argz);

	return EXIT_SUCCESS;
}
