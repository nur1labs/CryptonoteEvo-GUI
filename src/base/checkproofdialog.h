#ifndef CHECKPROOFDIALOG_H
#define CHECKPROOFDIALOG_H

#include <QDialog>

namespace Ui {
class CheckProofDialog;
}

namespace WalletGUI
{

class CheckProofDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckProofDialog(QWidget *parent = 0);
    ~CheckProofDialog();

public slots:
    void showCheckResult(const QString& result);

signals:
    void checkProofSignal(const QString& proof);

private:
    Ui::CheckProofDialog *ui;

    void clear();

private slots:
    void pasteFromClipboard();
    void proofChanged();
    void checkProof();

};

}

#endif // CHECKPROOFDIALOG_H
