#include <string>
#include<string>
#include<sstream>
#include <ctime>
#include <iostream> 
class response{
public:
  
  std::string content;
  bool header;
  bool nocache;
  bool nostore; 
  std::string ETag;
  int max_age;
  int Last_modified;
  bool mustValidate;
  std::string ifnomatch;
  std::string ifmodifiedsince;
  time_t time1;
  std::string expires;
  bool isPrivate;
  std::string firstLine;
  bool valid;
  time_t curr_time;
  
  response(){
    content = "";
    nocache = false;
    nostore = false;
    ETag = "";
    max_age = -1;
    Last_modified = 0;
    ifnomatch="";
    ifmodifiedsince="";
    time1 = time(0);
    expires ="";
    valid = false;
  }
  
  bool hasHeader(){
    return header;
  }
   
  void setHeader(std::string first){
    header = true;
    firstLine = first;
    valid = true;
  }

  void appendResp(char * resp, int finished){
    /*std::istringstream iss(resp);
    std::string line;
    while(std::getline(iss, line)){
      if(line.length() >= 7){
	std::string end = line.substr(0, 7);
	if(end == "</html>" || end == "</HTML>"){
	  content += end;
	  content += "\n";
	  return true;
	}
      }
      content += line;
      content += "\n";
    }
    return false;
    }*/
    std::vector<char> buffer;
   
    for(int i = 0; i < finished; i++){
      buffer.push_back(resp[i]);
    }
    
    std::string s(buffer.begin(), buffer.end());
    content += s;
    //std::cout << "---------------------\n" << content << "------------\n";
  }
};
