#include "sudoku.h"
#include "ui_sudoku.h"
#include <QTextEdit>
#include <QGridLayout>
#include <QDebug>


Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    CrearTabla();
}

Sudoku::~Sudoku()
{
    delete ui;
    for(int j=0; j<9;j++){
        for(int i=0; i<9; i++)
        {
            delete textEdit[j][i];

        }
    }

}

void Sudoku::CrearTabla(){
    //int valor;
    for(int j=0; j<9;j++){
        for(int i=0; i<9; i++)
        {
            textEdit[j][i]= new QTextEdit();
            textEdit[j][i]->setFixedSize(40,40);
           // textEdit[j][i]->addAction( actionEvent(););
            ui->LayoutNumber->addWidget(textEdit[j][i],j,i);
            //valor = textEdit[n]->toPlainText().toInt();
            qDebug() << "dddddd";

        }
    }
}

/*
void Sudoku::validarNumero(QTextEdit text[k]){
  int valor;
  valor=text[k].toPlainText().toInt();
  valor
}
*/
