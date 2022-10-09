/*
-example: char *ptr = "Hello world!". p>'H'.
-Recall: Writing a string literal == writing to the pointer to the 1st character of the string literal.
-As writing "Hello" == writing pointer to the first char.
Therefore, we can subscript it to get some char of the string literal.
>> "Hello"[1] == to pointer to 'H'[1].
>> pointer to 'H'[1] == *(pointer to 'H' + 1)
>> ///////////////// == *(H address + 1) = *(address of 'e') = 'e'
-String literal cannot be modified. It causes undefined behaviour.They have been allocated a read only memory.a
Example: char *ptr = "hello"; ptr: read-write memroy, while "hello": read-only memmory.
*/
