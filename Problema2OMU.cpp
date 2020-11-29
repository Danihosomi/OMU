#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
//declaramos as váriaveis que vamos utilizar
int num[2200];
vector<int> V;
set<int> S;
int main(){_
    //para cada inteiro par no intervalo [2020,2120] testamos quantos divisores ele possui
    for(int i=2020;i<=2120;i+=2){
        V.clear();
        //testagem dos divisores
        for(int j=1;j<=i;j++)
            if(i%j==0) V.push_back(j);

        if(V.size()%2==0) continue;
        //se o número de divisores for impar iremos imprimir quais são eles e adcioná-los em um conjunto com todos os divisores pares
        cout<<i<<": "<<V.size()<<'\n';
        for(int j=0;j<V.size();j++){
            cout<<V[j]<<' ';
            if(V[j]%2==0){
                num[V[j]]++;
                S.insert(V[j]);
            }
        }
        cout<<'\n';
        cout<<"---------------------------------------------------"<<'\n';
    }
    //imprimo a quantidade de divisores pares totais de números com quantidade impar de divisores
    cout<<"Quantidade de numeros pares diferentes que dividem os numeros entre esse intervalo: "<<S.size()<<'\n';
    //imprimo quantas vezes cada divisor aparece
    for(int i=2;i<=2120;i+=2)
        if(num[i]!=0) cout<<i<<": "<<num[i]<<'\n';
}

