#include <iostream>

// class Test
// {
// public:
// 	Test();
// 	~Test();
// 	//Pas possible : const int   nb = 12;
// 	static int nb_instances;
//     int    get_sensitive_info();

// private:
//     static int sensitive_info;
// };

// //Initialisation de la var de classe ne se fait pas avec constructeur
// //mais sur une ligne a part, en rajoutant ClasseName:: devant
// int Test::nb_instances = 0;

// int Test::sensitive_info = 3000;

// Test::Test()
// {
// 	//on n'utilise pas "this" pour une variable de classe
// 	//this ne fait référence qu'à l'instance courante
// 	Test::nb_instances++;
// }

// Test::~Test()
// {
// }

// int    Test::get_sensitive_info()
// {
//     return (Test::sensitive_info);
// }


// int main()
// {
// 	//pour faire référence à la var de classe on fait ClassName::Var
// 	//Pour variable publique :
// 	std::cout << Test::nb_instances << std::endl;
//     Test    instance1;
// 	std::cout << Test::nb_instances << std::endl;

// 	std::cout << instance1.get_sensitive_info() << std::endl;
// }

class Test
{
public:
	Test();
	~Test();
	static int nb_instances;
	//fonction get_sensitive_info pourrait etre membre ou non-membre
	//selon l'utilisation qu'on veut en faire
	//si fonction membre on ne pourra l'utiliser que depuis une **instance**
  static int    get_sensitive_info();
	int  get_info_member_function();

private:
    static int sensitive_info;
};

//Initialisation de la var de classe **ne se fait pas avec constructeur
//**En revanche avec constructeur on pourra **modifier ultérieurement la valeur**
//mais sur une ligne a part, en rajoutant ClasseName:: devant
int Test::nb_instances = 0;
int Test::sensitive_info = 3000;

int    Test::get_sensitive_info()
{
    return (Test::sensitive_info);
}

int    Test::get_info_member_function()
{
    return (Test::sensitive_info);
}

Test::Test()
{
	//on n'utilise pas "this" pour une variable **de classe
	//**this ne fait référence qu'à l'**instance** courante
	Test::nb_instances++;
}

Test::~Test()
{
		Test::nb_instances--;
}

int main()
{
	//pour faire référence à la var de classe on fait ClassName::Var
	//Pour variable publique :
	std::cout << Test::nb_instances << std::endl; //output 0
  Test    instance1;
	std::cout << Test::nb_instances << std::endl; //output 1

	//Pour variable de classe privée, on passe par une fonction getVar
	//Utilisation fonction **de classe/non membre**
	std::cout << Test::get_sensitive_info() << std::endl;
	
	//Utilisation fonction **d'instance/membre**
	std::cout << instance1.get_sensitive_info() << std::endl;
}