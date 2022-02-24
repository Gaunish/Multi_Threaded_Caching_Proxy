#include "cache.h"
#include <iostream>

response * cache::get_resp(request req){
  std::map<std::string, response>::iterator it;
  it = cache_map.find(req.resource);
  if(it == cache_map.end()){
    return NULL;
  }
  return &cache_map[req.resource];
}

void cache::insertReq(request req, response resp){
  cache_map.insert(std::pair<std::string, response>(req.resource, resp));

  //parseResp(req.resource);
  
  /* for (std::map<std::string, response>::iterator it= cache_map.begin(); it!=cache_map.end(); ++it)
    {
      std::cout << "---------------------------------------\n";
      std::cout << it->first << " => " << it->second.content << '\n';
      std::cout << "---------------------------------------\n"; 
      }*/
}

std::string cache::parseResp(std::string resp){
  std::string out = resp.substr(7, resp.length() - 8);
  if(out.at(resp.length()) == '/'){
    out = out.substr(0, out.length() - 1);
  }
  std::cout << out;
  return out;
}
  
