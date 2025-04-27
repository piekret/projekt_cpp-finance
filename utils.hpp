#pragma once

#include <vector>
#include <string>

namespace fnc {

	typedef std::vector<std::string> v_str;

	v_str split(const std::string& line, std::string separator);

}