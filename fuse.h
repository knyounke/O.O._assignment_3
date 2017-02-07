#ifndef	FUSE_H
#define FUSE_H 2017


class Fuse 
{
	
	public:
		Fuse(int);
		bool burn();
		std::string to_string();

	private:
		int time;


};



#endif