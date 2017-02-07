#ifndef MODULE_H
#define MODULE_H


#include <vdl.h>


class VLive : public VDLModule {
protected:
	int PostProcess(wstring f, size_t flag) {

	}
private:
	string url;

public:
	VLive(unsigned int major = 2, unsigned int minor = 0, unsigned int rev = 0) : VDLModule(major, minor, rev) {
		
	}
	VLive(string url) { this->url = url; }
	virtual vector<string> Parse(const string &s, const string r);
	virtual Json::Value ParseJson(const string &s);
	bool Run();
};

class VLive_Live : public VLive {
protected:
	int PostProcess(wstring f, size_t flag = POST_FFMPEG);
private:
	string url;
public:
	VLive_Live(unsigned int major = 2, unsigned int minor = 0, unsigned int rev = 0) : VLive(major, minor, rev) {
		
	}
	VLive_Live(string url) { this->url = url; }
	vector<string> Parse(const string &s, const string r);
	bool Download(string url, wstring fname);
	bool Run();
};

class Naver : public VDLModule {
protected:
	////ostream& Encode(ostream& in);
private:
	string url;
public:
	Naver(unsigned int major = 1, unsigned int minor = 0, unsigned int rev = 1) :VDLModule(major, minor, rev) {
		
	}
	Naver(string url) { this->url = url; }
	bool Run();
};

class Daum : public VDLModule {
protected:
	//ostream& Encode(ostream& in);
private:
	string url;
public:
	Daum(unsigned int major = 1, unsigned int minor = 0, unsigned int rev = 2) :VDLModule(major, minor, rev) {
		
	}
	Daum(string url) { this->url = url; }
	bool Run();
};

class Facebook : public VDLModule {
protected:
	//ostream& Encode(ostream& in);
private:
	string url;
public:
	Facebook(unsigned int major = 1, unsigned int minor = 0, unsigned int rev = 0) :VDLModule(major, minor, rev) {
		
	}
	Facebook(string url) { this->url = url; }
	bool Run();
};

#endif // !MODULE_H