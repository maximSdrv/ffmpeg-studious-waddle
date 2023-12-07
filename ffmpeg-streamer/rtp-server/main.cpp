#include "RTPServer.hpp"



int main (int argc, char* argv[]) {

    auto server = std::make_unique<RTPServer>();
    server->start("*:5005");

    return 0;
}