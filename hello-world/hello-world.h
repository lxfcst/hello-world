#pragma once

#include <stdio.h>
#include <string>

class Foo
{
public:
    int Bar(const std::string& l, const std::string& r)
    {
        printf("Foo::Bar called.\n");
        return strcmp(l.c_str(), r.c_str());
    }
};