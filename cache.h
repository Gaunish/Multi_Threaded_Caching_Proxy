#ifndef PARSER_H
#define PARSER_H
#include <map>
#include "parser.h"

class cache{
public:
  //  store request-response
  std::map<std::string, response> cache_map;
  
  response * get_resp(request req);
  void insertReq(request req, response resp);
  std::string parseResp(std::string resp);

   
};
#endif
