#ifndef   STORE_H_   
#define   STORE_H_ 
#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#include<cmath>

using namespace std;
//�洢���൥�ʳ��ֵ���Ŀ 
class Store{
	private:
		int a[60];
	public:
		Store(){
			init();
		} 
		void init();
		int insert(int x);
		void printhelp();
};
#endif 
