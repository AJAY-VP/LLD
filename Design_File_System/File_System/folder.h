#include "./fileSystem.h"
using namespace std;
class Folder : public FileSystem{
public:
    vector<FileSystem*> children;
    Folder(string na, FileType ty, int l, FileSystem *p): FileSystem(na, ty, l, p) {}
    bool isFolder() override{
        return true;
    }
};