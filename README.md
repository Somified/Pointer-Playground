# Pointer-Playground
Just me figuring out what pointers actually do.

## What Are Pointers?
In C++, a pointer is a variable that stores the **memory address** of another variable. 
Instead of holding a value directly, it "points" to where the value lives in memory.

For example:
**CodeJargon:** int x= 4;
**English:** an integer named x is set to 4.

**CodeJargon:** int * px= x;
**English:** an integer pointer named px points to the address of x (which is of 4 bytes AKA an integer data type).

**CodeJargon:** int y= *px;
when * is placed without any spaces, it is said to **dereference** the upcoming variable. so now it grabs the actual value of the integer that * px pointer points to. (y=x)
**English:** an integer named y is set to the value of x, ie, 4.
