# LLD for File System
Let me make some assumptions for requirement.

# Assumptions
- Assume that the directory structure the goes upto any number of depth.
- Only we can add a file or folder into type folder.
- In folder level, we have only unique name of a particular file type. (2 Folder's name or 2 files name cannot be same in a particular level)
- Restricting the types to folder,txt,jpg
- Copy method to copy file or folder from source to destination.
- File Navigation to happen. (Which is sort of basic).
- Both Navigation and copying is separate feature and cannot be clubbed. (Copy is just like linux copy command where we mention source, file/folder and destination as input. Whereas for navigation its just going back and fourth)
