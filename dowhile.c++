#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{

    string descripcion;

    int Cantidad_unidades_producidas;
        double Factor_costo_materiales, Costo_fijo, CANTIDA_ARTICULOS,CostoProduccion,CantidadArticulos,totalArticulos,TotalCostoProduccion;

    list<string> descripcion1;

    list<double> Costo_fijo1;

    
    list<double> CostoProduccion1;
    
    list<double> Factor_costo_materiales1;

    list<double> Cantidad_unidades_producidas1;

    cout << "ingrese cantida de ARTICULOS ";
    cin >> CANTIDA_ARTICULOS;


    CantidadArticulos =0;

    do
    {
        cout << "ingrese la descripcion del articulo ";
        cin >> descripcion;
        cout << "Cantidad de unidades producidas ";
        cin >> Cantidad_unidades_producidas;

        cout << " Ingrese Factor de costo de materiales";
        cin >> Factor_costo_materiales;
        cout << "ingrese costo fijo  ";
        cin >> Costo_fijo;

        /////Cálculo del costo de producción =Número de unidades producidas X Factor de costo de materiales+ Costo fijo

        CostoProduccion = Cantidad_unidades_producidas*Factor_costo_materiales+ Costo_fijo;

        descripcion1.push_back(descripcion);
        Costo_fijo1.push_back(Costo_fijo);
        Factor_costo_materiales1.push_back(Factor_costo_materiales);
        Cantidad_unidades_producidas1.push_back(Cantidad_unidades_producidas);
        CostoProduccion1.push_back(CostoProduccion);




        CantidadArticulos++;












    } while (CantidadArticulos<=CANTIDA_ARTICULOS-1);



    
cout <<  "############################## COSTO DE PRODUCCION ########################################" << endl;
        cout <<  "    ARTICULO  " << "       UNIDADES PRODUCIDAS   " << "  FACTOR COSTO  "   << " COSTO FIJO " <<" COSTO DE PRODUCCION " << endl;

    while (!descripcion1.empty() && !Costo_fijo1.empty() && !Factor_costo_materiales1.empty()   && !CostoProduccion1.empty() && !Cantidad_unidades_producidas1.empty())
    {

        descripcion = descripcion1.front();
        Cantidad_unidades_producidas = Cantidad_unidades_producidas1.front();
        Factor_costo_materiales = Factor_costo_materiales1.front();
        Costo_fijo = Costo_fijo1.front();
        CostoProduccion = CostoProduccion1.front();

        cout << descripcion << "              " ;
        cout << Cantidad_unidades_producidas<< "              "  ;
        cout << Factor_costo_materiales << "              ";
        cout << Costo_fijo << "              ";
        cout << CostoProduccion << "              " <<endl;


        TotalCostoProduccion += CostoProduccion;

        descripcion1.pop_front();
        Cantidad_unidades_producidas1.pop_front();
        Factor_costo_materiales1.pop_front();
        Costo_fijo1.pop_front();
        CostoProduccion1.pop_front();


        




    }


    cout << "total de articulos" ; cout<< totalArticulos;
    cout << "total costo de produccion" ; cout<< TotalCostoProduccion; 




    
        





    return 0;
}
