#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 *
 * @tparam InputIt iterator para o range.
 * @tparam Equal o tipo de uma função bool eq(const string &a,  const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param eq função que retorna verdadeiro caso dois parâmetros dados sejam iguais. caso contrário, retorna falso.
 *
 * @return Um iterator para o elemento logo após o último elemento do range após o processamento.
 *
 */
/*
blz!
*/
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    if (first == last)
        return last;

    auto itr_expected = first;
    int cont = 0, aux = 0;

    for(; first != last; ++first){
        for(int i=0; i < cont; ++i){
            if(eq(*itr_expected+i, *first)){//comparando cada elemento do range para ver se não é repetido
                ++aux;
            }
        }
        if(aux == 0){//caso tal elemento não esteja no itr_expected, o adicionamos.
            *(itr_expected+cont) = *first;
            ++cont;
        }
        aux = 0;
    }

    return itr_expected+cont;
}

}
#endif
