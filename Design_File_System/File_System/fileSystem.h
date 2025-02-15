#include<string>
#include "fileTypeEnum.h"
using namespace std;
class FileSystem{
public:
    string name;
    FileType type;
    int level;
    FileSystem *parent;;
    FileSystem(string na, FileType ty, int l, FileSystem *p){
        name = na;
        type = ty;
        level = l;
        parent = p;
    }
    virtual bool isFolder() = 0;
};