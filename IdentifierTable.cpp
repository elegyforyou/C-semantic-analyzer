#include "IdentifierTable.h"
void IdentifierTable::insert(string s){
	if(m.find(s)!=m.end())return;
	m.insert(pair<string,int >(s,++size));
}
int IdentifierTable::get(string s){
	if(m.find(s)!=m.end())return m[s];
	return -1;
}
string IdentifierTable::get(int  x){
	for(map<string,int>::iterator i=m.begin();i!=m.end();i++){
		if(i->second==x)return i->first;
	}
}
void IdentifierTable::printhelp(){
	vector< pair<int ,string> > vec;
	for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
		vec.push_back( pair<int,string>(it->second,it->first) );
	}
	sort(vec.begin(),vec.end());

	cout<<"��ʶ����:"<<endl;
	vector<pair<int ,string> >::iterator it;
	for(it=vec.begin();it!=vec.end();it++){
		cout<<it->first<<":"<<it->second<<endl;
	}
}

