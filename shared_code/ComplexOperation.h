#ifndef DEMO_COMPLEXOPERATION_H
#define DEMO_COMPLEXOPERATION_H

#include <iosfwd>
#include "Logger.h"

class ComplexOperation
{
public:
    void doStuff( std::ostream& stream );

    void doStuff( const std::string& filename );
};

#endif //DEMO_COMPLEXOPERATION_H
