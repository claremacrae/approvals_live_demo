#include "QTableWidgetExamples.h"

namespace QTableWidgetExamples
{
    void populateTable( QTableWidget& tableWidget )
    {
        const int rows = 2;
        const int columns = 3;
        tableWidget.setRowCount( rows );
        tableWidget.setColumnCount( columns );
        tableWidget.setHorizontalHeaderLabels( QStringList()
                                               << "Column 1"
                                               << "Column 2"
                                               << "Column 3" );
        for ( int i = 0; i != rows; ++i )
        {
            for ( int j = 0; j != columns; ++j )
            {
                tableWidget.setItem(
                    i,
                    j,
                    new QTableWidgetItem(
                        QString::number( ( i + 1 ) * ( j + 1 ) ) ) );
            }
        }
    }
}