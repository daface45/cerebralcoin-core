// Copyright (c) 2009-2019 The Bitcoin Core developers 
// Copyright (c) 2019-2021 The Cerebralcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CEREBRALCOIN_CRYPTO_CHACHA20_H
#define CEREBRALCOIN_CRYPTO_CHACHA20_H

#include <stdint.h>
#include <stdlib.h>

/** A PRNG class for ChaCha20. */
class ChaCha20
{
private:
    uint32_t input[16];

public:
    ChaCha20();
    ChaCha20(const unsigned char* key, size_t keylen);
    void SetKey(const unsigned char* key, size_t keylen);
    void SetIV(uint64_t iv);
    void Seek(uint64_t pos);
    void Output(unsigned char* output, size_t bytes);
};

#endif // CEREBRALCOIN_CRYPTO_CHACHA20_H
