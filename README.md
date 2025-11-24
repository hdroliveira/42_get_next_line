Get Next Line

Get Next Line (GNL) provides a function capable of reading a single line from a file descriptor with each call.
It must work with any file, including stdin, and handle variable buffer sizes.

Function Prototype
char *get_next_line(int fd);

Main Requirements

- Return the next line including the trailing \n
- Efficient memory handling between calls
- Works with large files and multiple file descriptors
- Uses a static buffer to save leftover data

What I Learned

- File descriptor management
- Buffering techniques
- Handling dynamic strings
- Managing static variables responsibly
