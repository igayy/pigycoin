// Copyright (c) 2020 Wayan Saka
// Copyright (c) 2020 The Nestcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Money parsing/formatting utilities.
 */
#ifndef NESTCOIN_UTILMONEYSTR_H
#define NESTCOIN_UTILMONEYSTR_H

#include <stdint.h>
#include <string>

#include <amount.h>

/* Do not use these functions to represent or parse monetary amounts to or from
 * JSON but use AmountFromValue and ValueFromAmount for that.
 */
std::string FormatMoney(const CAmount& n);
bool ParseMoney(const std::string& str, CAmount& nRet);
bool ParseMoney(const char* pszIn, CAmount& nRet);

#endif // NESTCOIN_UTILMONEYSTR_H
