#include "Store.h"
void Store::init(){
	memset(a,0,sizeof(a));
}
int Store::insert(int x){
	a[x]++;
}
void Store::printhelp(){
	cout<<"���൥����Ŀ:"<<endl;
	for(int i=1;i<=50;i++){
		if(a[i]==0)continue;
		cout<<"��"<<i<<"�൥����Ŀ:"<<a[i]<<endl;
		 
	}
}
