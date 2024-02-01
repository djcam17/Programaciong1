#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Parcela {
  string codigo;
  string nombre;
  string ubicacion;
  float area;
  float valor_unitario;
  float valor_total;
};

struct Socio {
  string nombre;
  string apellido_paterno;
  string apellido_materno;
  string fecha_nacimiento;
  char sexo;
  string estado_civil;
  string ocupacion;
  string direccion;
  string telefono;
  string correo_electronico;
};

int main() {
  

  vector<Parcela> parcelas;

 

  int n;
  cout << "Cantidad de socios";
  cin >> n;
  for (int i = 0; i < n; i++) {
    parcelas.push_back(Parcela());
    cout << "Parcela " << i + 1 << endl;
    cout << "Código: ";
    cin >> parcelas[i].codigo;
    cout << "Nombre del prodcuto: ";
    cin >> parcelas[i].nombre;
    cout << "Ubicación: ";
    cin >> parcelas[i].ubicacion;
    cout << "Hectareas: ";
    cin >> parcelas[i].area;
    cout << "Valor unitario: ";
    cin >> parcelas[i].valor_unitario;
    parcelas[i].valor_total = parcelas[i].area * parcelas[i].valor_unitario;
  }

 

  Socio socio;
  cout << endl << "Datos del socio" << endl;
  cout << "Nombre";
  getline(cin, socio.nombre);
  cout << "Apellido paterno: ";
  getline(cin, socio.apellido_paterno);
  cout << "Apellido materno: ";
  getline(cin, socio.apellido_materno);
  cout << "Fecha de nacimiento (dd/mm/aaaa): ";
  getline(cin, socio.fecha_nacimiento);
  cout << "Sexo (M/F): ";
  cin >> socio.sexo;
  cin.ignore();
  cout << "Estado civil (Soltero/Casado/Divorciado/Viudo): ";
  getline(cin, socio.estado_civil);
  cout << "Ocupación: ";
  getline(cin, socio.ocupacion);
  cout << "Dirección: ";
  getline(cin, socio.direccion);
  cout << "Teléfono: ";
  getline(cin, socio.telefono);
  cout << "Correo electrónico: ";
  getline(cin, socio.correo_electronico);

  
  cout << endl << "Balance de parcelas" << endl;
  cout << "Codigo | Nombre | Ubicación | Área | Valor unitario | Valor total" << endl;
  for (Parcela parcela : parcelas) {
    cout << parcela.codigo << " | " << parcela.nombre << " | " << parcela.ubicacion << " | " << parcela.area << " | " << parcela.valor_unitario << " | " << parcela.valor_total << endl;
  }

  

  cout << endl << "Datos del socio" << endl;
  cout << "Nombre " << socio.nombre << endl;
  cout << "Apellido paterno: " << socio.apellido_paterno << endl;
  cout << "Apellido materno: " << socio.apellido_materno << endl;
  cout << "Fecha de nacimiento: " << socio.fecha_nacimiento << endl;
  cout << "Sexo: " << socio.sexo << endl;
  cout << "Estado civil: " << socio.estado_civil << endl;
  cout << "Ocupación: " << socio.ocupacion << endl;
  return 0;
    
}