#ifndef   LEXICAL_ANALYSZER_H_   
#define   LEXICAL_ANALYSZER_H_   
#include <iostream>
#include"KeywordsTable.h"
#include "IdentifierTable.h"
#include "ConstTable.h"
#include "Store.h"
#include<vector>
#include <string> 
#include <fstream> 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class lexical_analyzer{
	private:
		int index;
		int linesum;//������ 
		int sum;//�������� 
		int state;//��ǰ״̬ 
		string nowstring;//��ǰ�洢��token 
		FILE* instream;//�ļ����� 
		ofstream out;
		bool isletter(char c);
		bool isdigit(char c);
		void error(char* ch,int line);
		void printkey(int key,int line);
		void printidentifier(int no,int line);
		void printconst(int no,int line);
		void printother(int no,int line);
	public:
		KeywordsTable k; 
		IdentifierTable i;
		ConstTable ct;
		Store s;
		static string words[54];
		static map<int,string> wordtable;
		void lexical_analyzer_do(string path);
		lexical_analyzer(){
			sum=0,linesum=0,nowstring="",state=0;
			out.open("lexical.txt");
			for(int i=1;i<=53;i++){
				wordtable[i]=words[i];
			}
		};
};
#endif 
