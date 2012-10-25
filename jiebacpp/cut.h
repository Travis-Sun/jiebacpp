#ifndef __CUT_H__
#define __CUT_H__
#include "stdafx.h"




class WordCut
{
public:
    WordCut();
    char* cut(char* s_sentence, bool b_cut_all=false);
private:
    char* m_dict_file = char[50];
    char* cut_all(char* s_sentence);
    char* cut_DAG(char* s_sentence);
    void load_dict(char* s_dict_path="dict.txt");
    std::map<char*, std::map> dict;
};



#endif