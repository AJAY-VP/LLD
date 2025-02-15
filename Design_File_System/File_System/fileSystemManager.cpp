#include<bits/stdc++.h>
#include "fileSystem.h"
#include "folder.h"
#include "file.h"

using namespace std;

class FileSystemManager{
public:
    FileSystem* root;
    map<int,map<string,FileType>> uniq;
    FileSystemManager(){
        root = new Folder("root", FileType::FOLDER_TYPE,0,NULL);
    }
    
};
