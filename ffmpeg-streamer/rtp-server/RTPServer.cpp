
#include "RTPServer.hpp"

void RTPServer::onRequest(const Http::Request &request, Http::ResponseWriter writer) {
    writer.send(Http::Code::Ok, "Server started\n");
    std::cout << "Has request.\n";
}

void RTPServer::start(const std::string &addr) {
    Http::listenAndServe<RTPServer>(Address(addr.c_str()));
}
