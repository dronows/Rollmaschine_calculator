
#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>

#include "ui_rollmaschine_calculator.h"

class CallerCalculator : public QWidget, public Ui::Rollmaschine_calculator {
    Q_OBJECT
public:
    CallerCalculator(QWidget* parent = nullptr) : QWidget(parent) {
        setupUi(this);
    }
public slots:
    void calculate();
private:
    bool ok = true;
    QString Calculate_durchmesser();
    QString Calculate_schablone();
    qreal masstab = 0;
};


#endif // WIDGET_H
