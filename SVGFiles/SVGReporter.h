#ifndef DEMO_SVGREPORTER_H
#define DEMO_SVGREPORTER_H

#include <ApprovalTests.hpp>

class SVGReporter : public ApprovalTests::Reporter
{
public:
    bool report(std::string received,
                std::string approved) const override;

    std::string convertToPNG(std::string graphicsFile) const;
};

#endif //DEMO_SVGREPORTER_H
