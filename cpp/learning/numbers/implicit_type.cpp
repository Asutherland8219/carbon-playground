#include <iostream>

void print(int x) //print is looking for an int parameter
{
    std::cout << x;
}

int main()
{
    print(5.5); // warning this is a double value 

    // These conversions are only recommended in one direction:
    double d { 5 }; // Okay
    int x { 5.5 }; // Not Okay; losing potentially valuable information 

    // Explicit type conversion would instead take the definition and cast it to the value 
    print(static_cast<int>(5.5)); // This function converts the double 5.5 to an int value 

    return 0;
}


// The resulting of the above function will actually print 5 and drop the remainder which makes this a double. Thus converting it to
// an int. This is implicit type conversion. 


