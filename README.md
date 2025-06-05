# MyGrep - A Simple Grep Clone in C

A lightweight implementation of the classic Unix `grep` command-line utility, written in C. This project demonstrates fundamental concepts in systems programming including file I/O, string manipulation, and command-line argument parsing.

## Features

- **Pattern Searching**: Search for text patterns in files or standard input
- **File Input**: Read from specified files or standard input
- **Fast Performance**: Efficient line-by-line processing
- **Cross-Platform**: Compiles on Unix-like systems and Windows

## Getting Started

### Prerequisites

- GCC compiler or any C compiler
- Basic knowledge of command-line usage

### Installation

1. Clone the repository:
```bash
git clone https://github.com/theawakener0/mygrep.git
cd mygrep
```

2. Compile the program:
```bash
gcc src/grep.c -o grep
```

### Usage

```bash
./grep <pattern> [file]
```

**Examples:**

```bash
# Search for "hello" in a file
./grep "hello" src/sample.txt

# Search for pattern in standard input
echo "hello world" | ./grep "world"

# Search in multiple lines
cat src/sample.txt | ./grep "pattern"
```

## Implementation Details

### Core Components

- **Pattern Matching**: Uses `strstr()` for efficient substring searching
- **File Handling**: Robust file I/O with proper error handling
- **Memory Management**: Stack-based buffer allocation for optimal performance
- **Standard Input Support**: Seamless reading from stdin when no file is specified

### Code Structure

```c
// Key functions and logic
- Command-line argument parsing
- File opening with error checking
- Line-by-line file processing
- Pattern matching using strstr()
- Proper resource cleanup
```

## Examples

Given a sample file `sample.txt`:
```
Hello World
This is a test
Hello there
Goodbye
```

**Search for "Hello":**
```bash
$ ./grep "Hello" src/sample.txt
Hello World
Hello there
```

**Search from standard input:**
```bash
$ echo -e "Line 1\nHello Line 2\nLine 3" | ./grep "Hello"
Hello Line 2
```

## Technical Specifications

- **Buffer Size**: 1024 characters per line (configurable via `MAXLINE`)
- **Memory Usage**: Minimal stack-based allocation
- **Performance**: O(n*m) time complexity where n = file size, m = pattern length
- **Error Handling**: Comprehensive error checking for file operations

## Roadmap

Future enhancements planned:

- [ ] **Flags Support**: Add `-n` (line numbers), `-i` (case insensitive), `-v` (invert match)
- [ ] **Regular Expressions**: Support for regex patterns
- [ ] **Multiple Files**: Process multiple input files
- [ ] **Context Lines**: Show lines before/after matches
- [ ] **Recursive Search**: Directory traversal with `-r` flag
- [ ] **Performance Optimization**: Memory mapping for large files

## Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request


## Testing

```bash
# Basic functionality test
echo "test line" | ./grep "test"

# File input test
./grep "pattern" src/sample.txt

# Error handling test
./grep "pattern" nonexistent.txt
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by the original Unix `grep` utility
- Built as a learning exercise in C programming
- Thanks to the open-source community for inspiration

## Contact

Feel free to reach out if you have questions or suggestions!

---

**Note**: This is an educational implementation. For production use, consider using the system's native `grep` command which includes many advanced features and optimizations.
