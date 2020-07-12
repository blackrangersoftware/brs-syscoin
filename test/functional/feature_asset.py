#!/usr/bin/env python3
# Copyright (c) 2019-2020 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

from test_framework.test_framework import SyscoinTestFramework
from test_framework.util import wait_until, get_datadir_path, connect_nodes
import os


class AssetTest(SyscoinTestFramework):
    def set_test_params(self):
        self.setup_clean_chain = True
        self.num_nodes = 2
        self.rpc_timeout = 240

    def setup_network(self):
        self.setup_nodes()
        # We'll connect the nodes later

    def run_test(self):
        self.nodes[0].generate(3)
        asset = self.nodes[0].assetnew('1', 'TST', 'asset description', '0x', 8, '1000', '10000', 31, {})['asset_guid']
        self.nodes[1].generate(3)
        assetInfo = self.nodes[1].assetInfo(asset)
        assert_equal(assetInfo['asset_guid'], asset)


if __name__ == '__main__':
    AbortNodeTest().main()