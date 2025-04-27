#pragma once

#include <string>

namespace fnc {

	#define MAX 10000
	typedef std::string str;
	typedef unsigned short u_short;

	struct Transaction {
		u_short id;
		str date;
		double amount;
		str category;
		str desc;
	};

}