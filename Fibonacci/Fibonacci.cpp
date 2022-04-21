// Fibonacci.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int valorInicial;//Valor inicial é 0.
int valorSecundario;//Valor secundario começará em 1.
int quantVezes;//Quantidade de vezes que poderá repetir o ciclo de soma de Fibonacci.
int resultado;//Resultado das operações.

int main()
{
    std::cout << "Hello World!\n";
    cout << "Voce que ver a sequencia de Fibonacci quantas vezes? ";
    cin >> quantVezes;

    //Valor inicializado.
    valorInicial = 0;
    valorSecundario = 1;
    cout << valorInicial << endl;
    cout << valorSecundario << endl;
    
    for (int n = 2; n != quantVezes; n++) 
    {

        resultado = valorInicial + valorSecundario;// null = 0 + 1;        
        valorInicial = valorSecundario;// 0 = 1;
        valorSecundario = resultado;// 1 = 1;
        
        cout << resultado << endl;
        
    }
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
