#ifndef FFMPEG_STREAMER_RTPSERVER_HPP
#define FFMPEG_STREAMER_RTPSERVER_HPP

#include <pistache/endpoint.h>

using namespace Pistache;

class RTPServer : public Http::Handler {
public:
    HTTP_PROTOTYPE(RTPServer)
    void onRequest(const Http::Request &request, Http::ResponseWriter writer) override;

    static void start(const std::string& addr);

private:

};


#endif //FFMPEG_STREAMER_RTPSERVER_HPP
