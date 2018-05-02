#pragma once

#include <QDialog>

namespace Ui {
class QuestionDialog;
}

namespace WalletGUI
{

class QuestionDialog : public QDialog
{
    Q_OBJECT
    Q_DISABLE_COPY(QuestionDialog)

public:
    QuestionDialog(const QString& title, const QString& text, QWidget* parent);
    ~QuestionDialog();

private:
    QScopedPointer<Ui::QuestionDialog> ui;
};

}
