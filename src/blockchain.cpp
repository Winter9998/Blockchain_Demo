#include <iostream>
#include <array>
#include <cstdint>
#include <vector>



namespace Block {

    using bytes32 = std::array<uint8_t, 32>;

    struct basic_block {
    int blockNumber;
    int timestamp;
    int nonce;
    bytes32 hash;
    bytes32 previous_hash;
    };

    std::vector<basic_block> Blockchain;
}




void push_genesis() {

}

int main() {

    return 0;
}