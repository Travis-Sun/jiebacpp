#ifndef __DICT_H__
#define __DICT_H__

#include "stdafx.h"

// change two demention to array,
// like hashing the chinese chars
#define CC_ID(c1,c2) (((unsigned char)(c1)-176)*94+((unsigned char)(c2)-161))
#define CC_CHAR1(id) ((id)/94+176)
#define CC_CHAR2(id) ((id)%94+161)

struct Item {
    int wordID;
    char* word;
    double frequency;
    std::map<int, struct Item*> next;
};
typedef struct Item WORD_ITEM, PWORD_ITEM;

enum {
    BIN 0,
    LINE 1
} DictFType;


class CDict
{
public:
    void Load(char* sDictfile, DictFType ft);
    CDict();
    ~CDict();
    bool InsertWord(char* sWord, double dFrequency);
    bool DeleteWord(char* sWord);
private:
    PWORD_ITEM m_pWordHeader;
    void LoadByLine(char* sDictfile);
    void LoadByBin(char* sDictfile);
    double m_totalFreq = 0.0
};

#endif
