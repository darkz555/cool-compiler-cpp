//
// Header (interface) for TreeVisitor
//

#pragma once

// forward declare program_class;
// need to actually define program_class in the implementation file of any TreeVisitor subclass
class program_class;
class class__class;

// this is not a true abstract class
// i.e. subclasses do not need to implement every method
class TreeVisitor
{
public:
    // non-pure virtuals, meaning that they do not have to be implemented by a subclass
    virtual void visit(program_class& program) {}
    virtual void visit(class__class& class_) {}
};
