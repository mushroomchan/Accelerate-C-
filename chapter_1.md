# Chapter 1 exercise

ddchen @ Beijing, 26/09/2021

### 1-0 test run chapter programs

See ./frame_for_name/v0_for_chapter1.cpp and ./frame_for_name/v0_for_chapter1

### 1-1 understanding string concatenation

a) It is valid, it initializes the const variable hello;

b) It is valid, + connect two strings.

### 1-2

a) It is valid, it initializes the const variable exclam;

b) It is invalid, the + is a invalid operand for two const char "hello" and ", world".

Tips: we can use + to concatenate a string and a string literal(const char, e.g."hello"), or a string and a string, but not two string literal.

### 1-3 understanding scope

It is valid, and it output "a string" and "another string".

### 1-4

It is valid, and it output the same like 1-3.

### 1-5

It is invalid, the x is defined in inner scope, and remove the inner curly braces to make the code valid.

### 1-6 explore the hidden std::can buffer operations

See ./hidden_cout_buffer.cpp.

It will output "Hello, Samuel" , "And what is yours", "Hello, Beckett; nice to meet you too!"

