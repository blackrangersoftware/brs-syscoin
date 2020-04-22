﻿// Copyright (c) 2017-2018 The Syscoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SYSCOIN_SERVICES_RPC_ASSETRPC_H
#define SYSCOIN_SERVICES_RPC_ASSETRPC_H
#include <string>
#include <amount.h>
#include <script/standard.h>
class CAssetDB;
bool ScanAssets(CAssetDB& passetdb, const uint32_t count, const uint32_t from, const UniValue& oOptions, UniValue& oRes);
bool SysTxToJSON(const CTransactionRef &tx, const uint256& hashBlock, UniValue &entry);
bool BuildAssetJson(const CAsset& asset, const int32_t& nAsset, UniValue& oName);
bool DecodeSyscoinRawtransaction(const CTransactionRef& rawTx, const uint256 &hashBlock, UniValue& output);
bool AssetTxToJSON(const CTransactionRef& tx, const uint256 &hashBlock, UniValue &entry);
#endif // SYSCOIN_SERVICES_RPC_ASSETRPC_H
