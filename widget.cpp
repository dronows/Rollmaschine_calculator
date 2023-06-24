
#include "widget.h"

#include <algorithm>

QString CallerCalculator::Calculate_durchmesser() {
    qreal durchmesser = in_durchmess->text().toDouble(&ok);
    if (!ok) return "durchmesser falsch";
    qreal steigung = in_steigung->text().toDouble(&ok);
    if (!ok) return "stegung falsch";
    qreal qualitet = in_qualitet->text().toDouble(&ok);
    if (!ok) return "Qualitet falsch";
    qreal durchmesser_inen = durchmesser - qualitet;
    masstab = std::sqrt(std::pow(durchmesser_inen, 2) + std::pow((steigung / 2), 2));
    return QString::number(masstab);
}
//------------------------------------------------------------------------
QString CallerCalculator::Calculate_schablone() {
    if (!ok) return " ";
    qreal shablone = in_schablone_L->text().toDouble(&ok);
    if (!ok) return "Schablone falsch";
    qreal temp = std::sqrt(pow((masstab / 2), 2) - pow(shablone, 2));
    qreal result = (masstab / 2) - temp;
    return QString::number(result);
}
//--------------------------------------------------------
void CallerCalculator::calculate() {
    out_masstab->setText("Masstab: " + Calculate_durchmesser());
    out_schablone->setText("Schablone: " + Calculate_schablone());
}
