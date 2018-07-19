#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    QVector<int> decToB(int n1)
    {
        int nN1=n1, nN2=n1, si1=0,j1=0;
        while(nN1 !=0)
        {   si1++;
            nN1/=2; }
        QVector<int>ve1(si1);
        while(nN2!=0)
        {   ve1[si1-1-j1] = nN2%2;
            nN2/=2;
            j1++;   }
        return ve1;
    }

    void setOddB(int n1)
    {
        SomeMy s1;
        QVector<int>ve1;
        ve1 = s1.decToB(n1);
        QVector<int>ve2;
        ve2= ve1;
        for(int i1=1;i1<ve1.size();i1+=2)
        {
            ve1[i1] = 1;
        }
        int re1=0, re2=0, si1 =ve1.size();
        for(int i2=0;i2<ve1.size();i2++)
        {
            re1 = ve1[si1-1-i2]* qPow(2,i2);
//            qDebug() << re1;
            re2 += re1;
        }
        qDebug() <<n1<< ve2 <<" -- "<< ve1 << re2 ;
    }


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.setOddB(45);


    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
