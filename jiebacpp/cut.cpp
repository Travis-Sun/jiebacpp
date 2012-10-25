#include "cut.h"

WordCut::WordCut()
{
    
}

char* WordCut::cut(char* s_sentence, bool b_cut_all)
{
    if (b_cut_all)
        return cut_all(s_sentence);
    else
        return cut_DAG(s_sentence);
}

char* WordCut::cut_all(char* s_sentence)
{
    return 0;
}

char* WordCut::cut_DAG(char* s_sentence)
{
    return 0;
}
void WordCut::load_dict(char* s_dict_file)
{
    FILE *fh;
    fh = fopen(s_dict_file,"r");
    char line[256];
    while( fgets(line, sizeof(line), fh)!= 0) {
        
    }
}

