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
    char[100] word;
    int freq = 0;
    FILE fh;
    fh = fopen(sFileName, "r");
    while(!feof(fh)) {
        fscanf(fp, "%s", word);
        fscanf(fp, "%d", freq);
        
    }
    fclose(fh);
}

void CDict::LoadByBin(char* sFileName)
{
}
