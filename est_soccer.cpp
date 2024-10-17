#include <iostream>
#include <string>

using namespace std;

int main() {

    /*
        Datos de entrada: 
            Name - Nombre del equipo
            (0) MP - Partidos jugados
            (1) W - partidos ganados
            (2) D - partidos empatados
            (3) L - partidos perdidos
            (4) GF - goles a favor
            (5) GA- Goles en contra
            (6) pts - Puntos obtenidos
        
        Estadisticas a calcular:
            r_w - Porcentaje de partidos ganados
            r_d - Porcentaje de partidos empatados
            r_l - Porcentaje de partidos perdidos
            r_gf_mp - Promedio de goles por partido
            r_ga_mp - Promedio de goles en contra por partido
            d_g_mp - Diferencia de goles por partido
            r_pts_mp - Promedio de puntos por partido
            r_gf_ga - Promedio de goles a favor por goles en contra
        */

    
    // Declarar variables de entrada
    string w_q[8];
    string w_r[9];
    string name[2];
    int i_a;
    
    //Declarar varia
    float dat_entrada[2][7], data_procesada[2][8];
    

    //Datos de la Demo
    name[0] = "Puebla (Liga MX - Apertura 2024)";
    dat_entrada [0][1]=3; // victorias
    dat_entrada [0][2]=2; // Empates
    dat_entrada [0][3]=7; //Perdidos 
    dat_entrada [0][4]=18; // Goles a favor 
    dat_entrada [0][5]=43; //Goles en contra
    dat_entrada [0][0]=12; //Partidos jugados
    dat_entrada [0][6]=11; //Puntos obtenidos
     
     
    
    
    //Preguntas
    w_q[0] = "Nombre del equipo: ";
    w_q[1] = "Partidos jugados: ";
    w_q[2] = "Partidos ganados: ";
    w_q[3] = "Partidos empatados: ";
    w_q[4] = "Partidos perdidos: ";
    w_q[5] = "Goles a favor: ";
    w_q[6] = "Goles en contra: ";
    w_q[7] = "Puntos obtenidos: ";
    
    //Respuestas
    w_r[0] = "\n\tEstadisticas de ";
    w_r[1] = "\nPorcentaje de partidos ganados: ";
    w_r[2] = "Porcentaje de partidos empatados: ";
    w_r[3] = "Porcentaje de partidos perdidos: ";
    w_r[4] = "Promedio de goles por partido: ";
    w_r[5] = "Promedio de goles en contra por partido: ";
    w_r[6] = "Diferencia de goles por partido: ";
    w_r[7] = "Promedio de puntos por partido: ";
    w_r[8] = "Promedio de goles a favor por goles en contra: ";
    
    //Pedir datos
    cout << "\tEstadisticas de Futbol (Soccer)Si \n"<< endl;
    cout << "1. Demo con datos pre-cargados" << endl;
    cout << "2. Calcular estadisticas con datos nuevos" << endl;

    while (true){ //Funcion para validar la opcion
            cout << "Seleccione una opcion: ";
            cin >> i_a;
            if (i_a == 1 || i_a == 2){
                break;}
            else{
                cout << "Opcion no valida, intente de nuevo" << endl;}}

    i_a = (i_a == 1) ? 0 : 1; //Operador ternario para selecionar el vector correcto

    if (i_a==1){
        for(int i = 0; i < 8; i++){
            cout << w_q[i];

            if (i == 0){    
                cin >> name[1];}
            else{
                cin >> dat_entrada[1][i-1];}
        }}

    //Calcular Estadisticas
    data_procesada[i_a][0] = (dat_entrada[i_a][1]/dat_entrada[i_a][0])*100; // r_w
    data_procesada[i_a][1] = (dat_entrada[i_a][2]/dat_entrada[i_a][0])*100; //r_d
    data_procesada[i_a][2] = (dat_entrada[i_a][3]/dat_entrada[i_a][0])*100; //r_l
    data_procesada[i_a][3] = (dat_entrada[i_a][4]/dat_entrada[i_a][0]); //r_gf_mp 
    data_procesada[i_a][4] = (dat_entrada[i_a][5]/dat_entrada[i_a][0]); //r_ga_mp
    data_procesada[i_a][5] = (dat_entrada[i_a][4]-dat_entrada[i_a][5])/dat_entrada[i_a][0]; //d_g_mp
    data_procesada[i_a][6] = dat_entrada[i_a][6]/dat_entrada[i_a][0]; //r_pts_mp
    data_procesada[i_a][7] = dat_entrada[i_a][4]/dat_entrada[i_a][5]; //r_gf_ga

    if (i_a == 0){
        cout << "\n\tDatos de la demo \n" << endl;
        for (int j = 0; j < 7; j++){
            cout << w_q[j+1] << dat_entrada[i_a][j] << endl;
        }
    }
    //Imprimir resultados en consola
    for(int k; k<9; k++){
        
        if(k == 0 ){
            cout << w_r[k] << name[i_a] << endl;
        } else{ 
        cout << w_r[k]<< data_procesada[i_a][k-1] << endl;}
    }

    return 0;
}