#include "ConstTable.h"
void ConstTable::insert(string s){
	if(m.find(s)!=m.end())return;
	m.insert(pair<string,int >(s,++size));
}
int ConstTable::get(string s){
	if(m.find(s)!=m.end())return m[s];
	return -1;
}
string ConstTable::get(int  x){
	for(map<string,int>::iterator i=m.begin();i!=m.end();i++){
		if(i->second==x)return i->first;
	}
}
void ConstTable::printhelp(){
	vector< pair<int ,string> > vec;
	for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
		vec.push_back( pair<int,string>(it->second,it->first) );
	}
	sort(vec.begin(),vec.end());
	cout<<"常量表:"<<endl;
	vector<pair<int ,string> >::iterator it;
	for(it=vec.begin();it!=vec.end();it++){
		cout<<it->first<<":"<<it->second<<endl;
	}
}
