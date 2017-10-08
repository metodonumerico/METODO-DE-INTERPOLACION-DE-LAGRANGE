#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Librería para el uso de cadenas de texto
#include <cmath>    //Librería para el uso de funciones matemáticas


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//double MainWindow::funcion(double L){
 //   return y1*L1(x)+y2*L2(x)+y3*L3(x)+y4*L4(x);

//}

//return   (l*(z-X[j]))/(X[i]-X[j]);//devuelve la función de arrastre
//   return (667.38/c)*(1-exp(-0.146843*c))-40; //devuelve la función de arrastre
//}

void MainWindow::metodo() {
    QString temp, temp2, temp3, temp4;          //Cadenas de texto de uso temporal
    double X[50],Y[50],z,l;

    double 0x=ui->X0->value();   //Recupera el valor de X1 del spinbox
    double 1x=ui->X1->value();   //Recupera el valor de X2 del spinbox
    double 2x=ui->X2->value();   //Recupera el valor de X3 del spinbox
    double 3x=ui->X3->value();   //Recupera el valor de X4 del spinbox
    double 0y=ui->Y0->value();   //Recupera el valor de Y1 del spinbox
    double 1y=ui->yY1->value();   //Recupera el valor de Y2 del spinbox
    double 2y=ui->Y2->value();   //Recupera el valor de Y3 del spinbox
    double 3y=ui->Y3->value();   //Recupera el valor de Y4 del spinbox
    double valor=ui->Valor->value();   //Recupera el valor de Valor del spinbox

    //double x1=ui->X1->value();   //Recupera el valor de X1 del spinbox
    //double x2=ui->X2->value();   //Recupera el valor de X2 del spinbox
   // double err=ui->Err->value(); //Recupera el valor del error del spinbox
   // double xr=0.0;
    //double ea=100.0;
   // float x[50],y[50],z,l,valor=0;
   // int n;
    //while(ea>err){
      //  xr=(x1+x2)/2; //Se calcula la bisección
     //   ea=100*std::abs(xr-x2)/xr; //Se calcula el error


    for(int n=0;n<50;n++){
{
        X=X[n]+1;
    }
    for(int i=0;i<n;i++){
        Y=Y[i]+1;
    }
    for(int k=0;k<n;k++){
        l=l[k]+1;
        for(int j=0;j<n;j++){
          if (i!=j){
              l=(l*(z-X[j]))/(X[i]-X[j]);
        }
    }
        valor=valor+1;
       // if(funcion(x1)*funcion(xr)<0)  //Se evaluan la función en X1 y Xr
        //    x2=xr;
      //  if(funcion(x1)*funcion(xr)>0)  //Se evaluan la función en X1 y Xr
          //  x1=xr;



}

    temp.append("Resultado1").append(temp2.append(X).append("\nResultado2")).append(temp3.append(y).append("\nResultado3")).append(temp4.append(z).append("\nResultado de X"));  //Se prepara el texto para ser presentado
            ui->Texto->setText(temp);  //Se presenta el texto
 // .append(temp6.append("Y3"))).append(temp7.append("\X4").append(temp8.append("Y4"))).append(temp9.append("El valor en z=", valor));
}

void MainWindow::borrar(){
    ui->X1->setValue(0.0);   //Se borran los spinbox
    ui->X2->setValue(0.0);   //Se borran los spinbox
    ui->X3->setValue(0.0);   //Se borran los spinbox
    ui->X4->setValue(0.0);   //Se borran los spinbox
    ui->Y1->setValue(0.0);   //Se borran los spinbox
    ui->Y2->setValue(0.0);   //Se borran los spinbox
    ui->Y3->setValue(0.0);   //Se borran los spinbox
    ui->Y4->setValue(0.0);   //Se borran los spinbox
    ui->Valor->setValue(0.0);   //Se borran los spinbox
    //ui->X1->setValue(0.0);  //Se borran los spinbox
    //ui->X2->setValue(0.0);
   // ui->Err->setValue(0.0);
    ui->Texto->clear();     //Se borra el texto
}

}
