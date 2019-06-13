#ifndef TFILA_H_INCLUDED
#define TFILA_H_INCLUDED
#include "TLista.h"

using namespace std;

template <typename T> class TFila{
    TLista<T> *l;

    public:
        TFila<T>();
        void add(T _info); ///Adiciona elementos na fila
        T poll(); ///Retira elementos da fila
        T peek(); /// Retorna o primeiro elemento da fila (no caso � o ult por motivos de log�stica)
        ~TFila<T>();
};

template <typename T> TFila<T>::TFila(){
    l = new TLista<T>();
}

template <typename T> void TFila<T>::add(T _info){
    l ->ins_ini(_info);
}

template <typename T> T TFila<T>::poll(){
    return(l -> rem_fim());
}

template <typename T> T TFila<T>::peek(){
    return(l ->get((l->size())-1));
}

#endif // TFILA_H_INCLUDED
