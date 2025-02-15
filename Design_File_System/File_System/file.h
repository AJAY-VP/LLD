#include "./fileSystem.h"
using namespace std;
class File : public FileSystem{
public:
    File(string na, FileType ty, int l, FileSystem *p): FileSystem(na, ty, l, p) {}
    bool isFolder() override{
        return false;
    }
};