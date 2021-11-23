#ifndef POPUPINPUT_H
#define POPUPINPUT_H

#include <QDialog>
#include <QVector>

namespace Ui {
  class PopUpInput;
}

class PopUpInput : public QDialog
{
  Q_OBJECT

public:
  explicit PopUpInput(QWidget *parent = nullptr);
  ~PopUpInput();
  QVector<int> getVector(){
    return v_datos;
  }

private slots:
  void on_pushButton_aceptar_clicked();

private:
  Ui::PopUpInput *ui;
  QVector<int>v_datos;
};

#endif // POPUPINPUT_H
