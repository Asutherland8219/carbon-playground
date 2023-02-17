// Here is the correct example for executing the code in the correct namespace. Thus avoiding any collision errors. 

namespace foo // namespace defined 
{
    int doSomething (int x, int y)
    {
        return x + y 
    }
}

// Now there is no global defnintion of doSomething, the above is unique to the namespace 
// of foo.
// We will repeat this for the goo namespace but change the function slightly

namespace goo // namespace defined 
{
    int doSomething(int x, int y)
    {
        return x - y
    }
}

// Again, we have to figure out which we are callingin the main function 

int main(
    {
        std::cout << foo::doSomething(4,3 << '\n')
        return 0;
    }
)

// we specify the specific instance of doSometing via the prefix followed by ::

