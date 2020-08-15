#ifndef DEMO_COMPLEXOPERATION_H
#define DEMO_COMPLEXOPERATION_H

#include <iosfwd>
#include "Logger.h"

class ComplexOperation
{
public:
    void doOperation( std::ostream& stream );

    void doOperation( const std::string& filename );
};

#endif //DEMO_COMPLEXOPERATION_H
