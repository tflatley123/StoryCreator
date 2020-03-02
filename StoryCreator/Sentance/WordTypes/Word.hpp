
#ifndef Word_hpp
#define Word_hpp

#include <stdio.h>

// this is the basic structure for words
enum WordType
{
    noun,
    proNoun,
    properNoun,
    verb,
    adjective,
    adverb,
    prepositions,
    articles,
    conjunction
    
};

struct Word
{
    const char* name;
    WordType type;
};

#endif /* Word_hpp */
