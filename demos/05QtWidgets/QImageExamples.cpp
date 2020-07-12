#include "QImageExamples.h"

QImage QImageExamples::createImage( const char* color )
{
    QImage image( 100, 200, QImage::Format_RGB32 );
    image.fill( color );
    return image;
}
