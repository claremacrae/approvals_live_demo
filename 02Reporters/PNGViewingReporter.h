#ifndef DEMO_PNGVIEWINGREPORTER_H
#define DEMO_PNGVIEWINGREPORTER_H

#include <ApprovalTests.hpp>

class PNGViewingReporter : public ApprovalTests::Reporter
{
public:
    bool report(std::string received,
                std::string approved) const override;

    std::string convertToPNG(std::string graphicsFile) const;
};

#endif //DEMO_PNGVIEWINGREPORTER_H
