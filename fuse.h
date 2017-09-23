#ifndef	FUSE_H
#define FUSE_H 2017


class Fuse 
{
	
	public:
		Fuse(int _time) : time(_time) {}
		bool burn();
		std::string to_string();

	private:
		int time;


};



#endif
