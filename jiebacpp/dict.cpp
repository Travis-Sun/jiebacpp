#include "dict.h"


CDict::CDict()
{
    WORD_ITEM header;
    header.word = 0;
    header.wordID = 0;
    header.frequency = 0;    
}

CDict::~CDict()
{
}

void CDict::Load(char* sFileName, DictFType ft)
{
    if (ft==LINE)
        LoadByLine(sFileName);
    if (ft==BIN)
        LoadByBin(sFileName);
}

bool CDict::InsertWord(char* sWord, double dFrequency)
{
    return false;
}

bool CDict::DeleteWord(char* sWord)
{
    return false;
}

void CDict::LoadByLine(char* sFileName)
{
    char[100] words;
    char[3] word;
    int freq = 0, id;
    PWORD_ITEM pItem;
    WORD_ITEM::iterator iMap;
    FILE fh;
    fh = fopen(sFileName, "r");
    while(!feof(fh)) {
        fscanf(fp, "%s", words);
        fscanf(fp, "%d", freq);
        pItem = m_pWordHeader;
        for (int i=0; i<strlen(words), i++) {
            word[0] = words[i++];
            word[1] = words[i];
            word[2] = 0;
            id = CC_ID(word[0],word[1]);
            iMap = pItem.next.find(id);
            if (iMap==pItem.next.end()) {
                pItem.next[id] 
            } //add new it
            else {
                pItem = pItem.next[id];
            } // exit the words
        }
    }
    fclose(fh);
}

void CDict::LoadByBin(char* sFileName)
{
}
