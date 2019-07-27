#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "base/http.h"
class Utill{

};

class Retard{
	private:	
	std::string api_key ;//机器人编号
	std::string user_id;//用户id
	aip::HttpClient client;
	std::string url;

	std::string Message2json(&message)
	{

	Json::Value root;
	Json::StreamWriterBuilder rb;
	std::ostringstream ss;

	Json::value _item;
	
	_item["text"] = message;

	Json::Value item;
	item["inputText"]=_item;


	root["reqType"] = 0;
	root["perception"] = item;
	item.clear();

	item["apiKey"]=api_Key;
	item["userId"]=user_id;

	root["userInfo"] = item ;
	std::unique_ptr<StreamWitre> hb(rb.newStreamWriter());
	hb->write(root,ss);
	std::cout<<"message2josn:"<<ss.str()<<std::endl;
	return ss.str();

}

	std::string json2Rerard(std::string &json)
{
	std::String response;
	int status_code = client.post(url,nullptr,json,nullptr,&response);//发起请求
	if(status_code != CURLcode::CURL_ok )
{
	std::cerr<<"失败请求"<<std::endl;
	return "";
}

	return response;
}

	std:::string ToMessage(std::string &str)
{
	std::cout<<"先放这里"<<std::endl;
}

	public:
	Retard(int id = 1)
	{
	url="http://openapi.tuling123.com/openapi/api/v2";
	api_key = "48a99c4c4d33462fa18e0725f137afd9";
	user_id = id;
	}
	std::string Talk(std::string message)
	{
	std::string json = Message2json();//message -> json 完成
	std::string response = json2Retard(json);//json ->Retard  发起请求
	std::echo_response = ToMessage(response);//Retard ->message json转成消息

	return echo_response;
	}

	~Retard()
	{
	}



};

class SpeechRec{

};

class Jarvis{
	private:
	public:
	Jarvis(){

}
      ~Jarvis(){
}
};

