/*
consider the following declaration of 2D array in C: char a[100][100].
Assuming that the main memory is byete addressable and that the array is stored starting from the memeory address 0, the address of a[40][50]:?

*/

//Answer: Formula: &a[i][j] = BA + [(i -lb1) * NC + (j - lb2)] * c.
/*
BA = Base address of whole 2D array
NC = Number of columns
c = size of data type of elements stored in array (in bytes)

>> &a[40][50] = 0 + [(40 - 0) * 100 +(50-0)] * 1 = 4000+50 = 4050



oohhh, don't try to understand why the formula works, hhhhhhh, it does work and that's only what yo need to know. jk, hhh!
*/
