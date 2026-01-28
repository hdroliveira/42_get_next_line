# Get Next Line - 👤 Author: hdroliveira

![42 Porto](https://img.shields.io/badge/42-Porto-blue)
![Language](https://img.shields.io/badge/Language-C-orange)
![Score](https://img.shields.io/badge/Score-125%2F100-success)

**Get Next Line** is a project at 42 that challenges you to create a function that reads a file line by line. It introduces the concept of **static variables** in C and proper file descriptor management.

## 💡 About the Project

The main goal is to write a function that returns a line read from a file descriptor.
- Repeated calls (e.g., using a loop) to your `get_next_line()` function will read the text file pointed to by the file descriptor, one line at a time.
- The function should return the line that was read. If there is nothing else to read or if an error occurred, it should return `NULL`.

### Key Concepts
* **File Descriptors (fd)**
* **Buffer Management**
* **Static Variables**
* **Memory Leaks Handling**

## 📂 Project Contents

| Part | Files | Features |
| :--- | :--- | :--- |
| **Mandatory** | `get_next_line.c`<br>`get_next_line_utils.c`<br>`get_next_line.h` | Basic line reading from a single FD. |
| **Bonus** | `get_next_line_bonus.c`<br>`get_next_line_utils_bonus.c`<br>`get_next_line_bonus.h` | Handles **multiple file descriptors** simultaneously using a single static variable list/array. |

## 🛠️ Usage & Compilation

This project is designed to be compiled alongside your main program. You **must** define the `BUFFER_SIZE` macro at compilation time to determine the size of the read buffer.

### Prototype
```c
char *get_next_line(int fd);

Compilation Example
To compile the mandatory part with a buffer size of 42:

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl

To compile the bonus part (for multiple FDs):

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line_bonus.c get_next_line_utils_bonus.c -o gnl_bonus

📋 Testing Snippet (main.c)
Here is a simple test file to verify the function:

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *line;

    // Open a file (ensure test.txt exists)
    fd = open("test.txt", O_RDONLY);
    
    // Read lines until NULL
    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line); // Don't forget to free!
    }
    
    close(fd);
    return (0);
}

⚠️ Notes
Buffer Size: The program handles varying buffer sizes. A large buffer reads faster but uses more stack memory; a small buffer (e.g., 1) makes many read() calls but uses less memory.

Undefined Behavior: lseek() is forbidden. Reading from a binary file implies undefined behavior unless logically handled.