//
// Implementation for TestVisitor
//

#include <iostream>
#include "TestVisitor.h"

class program_class {

};

void TestVisitor::visit(program_class& program)
{

    std::cout << "TEST VISITOR IS INSIDE PROGRAM NODE";
    //for (int index = program->classes->first(); program->classes->more(index); index = program->classes->next(index))
    {
//        // call accept for each child node with `this`, which is a pointer to TestVisitor
//        program->classes->nth(index)->accept(this);
    }
}

void TestVisitor::visit(class__class& class_)
{
//    Symbol name = class_->get_name();
//    std::cout << "---------------------" <<name;
}
