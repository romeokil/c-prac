#include<iostream>
#include<cstring>
using namespace std;
class RWH{
     protected:
     	string title;
     	float rating;
     	public:
     	RWH(string s,float r){
     		title=s;
     		rating=r;
		 }
		 virtual void display()=0{//pure virtual class
		 	
		 }
};
class RWHVideo:public RWH{
	float videolength;
    public:
    	RWHVideo(string s,float r,float vl):RWH(s,r){
		videolength=vl;
		}
		void display(){
			cout<<"The title of the Video Tutorial is "<<title<<endl;
			cout<<"The rating of the Video Tutorial is "<<rating<<endl;
			cout<<"The video length of the Video Tutorial is "<<videolength<<endl;
		}
};
class RWHText:public RWH{
	float wordcount;
	public:
		RWHText(string s,float r,float wc):RWH(s,r){
			wordcount=wc;
		}
		void display(){
			cout<<"The title of the Text Tutorial is "<<title<<endl;
			cout<<"The rating of the Text Tutorial is "<<rating<<endl;
			cout<<"The word count in the Text Tutorial is "<<wordcount<<endl;
		}
};
int main(){
	string title="RAHUL";
	float vlen,wordcon,rat;
	vlen=2.5;
	rat=4.9;
	RWHVideo djvideo(title,rat,vlen);
    //djvideo.display();
    title="Rahul Text";
    rat=3.9;
    wordcon=600;
	RWHText djtext(title,rat,wordcon);
	//djtext.display();
	RWH* tut[2];
	tut[0]=&djvideo;
	tut[1]=&djtext;
	tut[0]->display();
	tut[1]->display();
	return 0;
}
