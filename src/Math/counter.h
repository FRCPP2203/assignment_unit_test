#ifndef __COUNTER_H__
#define __COUNTER_H__
#include <stdio.h>
// A simple monotonic counter.
class Counter
{
private:
    int counter_;

public:
    // Creates a counter that starts at 0.
    Counter() : counter_(0) {}

    // Returns the current counter value, and increments it.
    int Increment() { return counter_++; }

    // Returns the current counter value, and decrements it.
    int Decrement()
    {
        if (counter_ == 0)
        {
            return counter_;
        }
        else
        {
            return counter_--;
        }
    }

    // Prints the current counter value to STDOUT.
    void Print() const { printf("%d", counter_); }
};

#endif // __COUNTER_H__