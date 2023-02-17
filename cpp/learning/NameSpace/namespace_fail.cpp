// When creating functions in C++, the global namespace is automatically assumed. That becomes cumbersome if you would like to run similary named functions. 
// calling the same named function in the global namespace will result in linker errors. The code below is an example of what would not work.

namespace foo // defined namespace, this is good
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

// then we call this function in the main in order to be executed

int main()
{
    std::cout << doSomething(4, 3) << '\n';
    return 0
}

// In the above example the code will throw an error as we did not specify the namespace.
// The error thrown is that the function is not created in the global namespace.

// Below, is an example of what not to do when defining functions.

// file 1 
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

// file 2 
{
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

// main 
int main()
{
    std::cout << doSomething(4, 3) << '\n';
    return 0
}

// This function  will also return an error but will be a different error than the one above. 
// This error pertains to the fact that BOTH doSomething class instances are assigned to the global namespace...
// So when we call the function in main we actually have no idea whcih we are calling. Total crapshoot.

