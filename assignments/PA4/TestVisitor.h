//
// Header (interface) for TestVisitor
//
#pragma once

#include "TreeVisitor.h"

class TestVisitor : public TreeVisitor
{
public:
    virtual void visit(program_class&);
    virtual void visit(class__class&);
};
