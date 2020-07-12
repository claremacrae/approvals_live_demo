#include "QTableWidgetExamples.h"

namespace QTableWidgetExamples
{
    QStringList getColumnTitles( const int columns );
    void populateTable( QTableWidget& tableWidget )
    {
        const int rows = 300;
        const int columns = 16;
        tableWidget.setRowCount( rows );
        tableWidget.setColumnCount( columns );
        tableWidget.setHorizontalHeaderLabels(
            getColumnTitles( columns ) );

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

    QStringList getColumnTitles( const int columns )
    {
        QStringList columnTitles;
        for ( int i = 0; i != columns; ++i )
        {
            columnTitles << "Column " + QString::number( i + 1 );
        }
        return columnTitles;
    }
}