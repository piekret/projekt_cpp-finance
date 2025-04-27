#pragma once

#include "include/transaction.hpp"
#include <vector>
#include <string>

namespace fnc {

	typedef std::vector<Transaction> Ledger;

	void load_ledger(Ledger& ledger, const std::string& path);
	void save_ledger(Ledger& ledger, const std::string& path);

	void add_transaction(Ledger& ledger, const Transaction& tran);
	void remove_transaction(Ledger& ledger, u_short id);

	void sort_by_date(Ledger& ledger);
	void sort_by_amount(Ledger& ledger);

	double calculate_balance(Ledger& ledger);
	void report(Ledger& ledger);

}