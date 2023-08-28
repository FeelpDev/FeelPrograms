#include <iostream>
using namespace std;

int main () {

int n, i, age, gender, res, days=0, help=0, test, resptest=0, asit=0, grave=0, totaldays=0, totalpes=0, totalidade=0, totalm=0;

	cout<< "Digite a quantidade de pessoas.: ";
	cin>> n;
	cout<< "\n-------------------------------------------------------------------\n";
	for (i=1; i<=n; i++){
		cout<< "Digite a idade do paciente.:";
		cin>> age;
		cout<< "Digite o sexo do paciente, 1-Feminino 2-Masculino.: ";
		cin>> gender;
		cout<< "O paciente em questao teve sintomas de COVID? \n1-Sim \n2-Nao \nDigite a resposta.: ";
		cin>> res; 
		if (res == 1){
			cout<< "Por quantos dias o paciente em questao teve os sintomas de COVID? \nSua resposta.: ";
			cin>> days;
			cout<< "O paciente teve que procurar ajuda medica? \n1-Emergencia \n2-Consulta medica \n3-nao \nSua resposta.: ";
			cin>> help;
		} //Termino das perguntas realizadas com o if :D
		
		cout<< "O paciente realizou algum teste de COVID? \n1-Sim \n2-Nao \nSua resposta.: ";
		cin>> test;
		if(test == 1){
			cout<< "Qual foi o resultado do teste realizado? \n1-Positivo \n2-Negativo \nSuaResposta.: ";
			cin>> resptest;
		} //Termino do if para o teste de COVID ;)
		cout<< "\n--------------------------------------------------------------------\n";
	
	    //Calculo feito para os pacientes assintomaticos ;(
	    if(res == 2 && resptest == 1){
	    	asit++;
		}
	    
	    //Calculo das pessoas com mais de 65 anos que foram parar na emergencia :(
	    if(age >65 && help ==1){
	    	grave++;
		}
	
	    //Calculo feito para a quantidade de dias :D
	    if(days >0){
	    	totaldays = totaldays + days;
		}
		
		//Calculo feito para a quantidade de pessoas com sintomas mas que nao procuraram ajuda medica >:(
		if(res == 1 && help == 3){
			totalpes++;
		}
		
		//Calculo da idade das mulheres que tiveram sintomas do COVID mas o resultado do teste deu negativo :)
	    if(gender == 1 && resptest == 2){
	    	totalidade = totalidade + age;
	    	totalm++;
		}
      } // For finalizado aqui! ^^
      
      cout<< "\n--------------------RESULTADO---------------\n";
      cout<< "\nQuantidade de pessoas Assintomaticas.:", asit;
      cout<< "\nO percentual de pessoas com mais de 65 anos que procuraram a emergencia.:", grave * 100/(i-1);
      cout<< "\nA media de duração, no caso, dias dos sintomas de COVID.:", totaldays / (i-1);
      cout<< "\nQuantidade de pessoas que teve sintomas do COVID mas nao procurou ajuda medica.:", totalpes;
      cout<< "\nA media das idades das mulheres que tiveram sintomas e o teste de COVID deu negativo.:", totalidade/totalm;
      
      //That's the end :D
      
 	return 0;
}
