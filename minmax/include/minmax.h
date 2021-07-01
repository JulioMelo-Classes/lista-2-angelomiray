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
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */

/*
como eu tinha dito no discord, essa função é passada por parâmetro, vc não precisa implementá-la*/
/*template <typename T>
bool cmp(const T &n1, const T &n2){
    //talvez converter de qualquer jeito para int
    return n1 > n2 ? false : true;
}*/

/*
80%
*/
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    auto max = first, min = first;

    for(; first != last; ++first){
        if(cmp(*first, *min)) //aqui vc confiou que *first == *min, mas no caso do max vc ainda testou com ==, como é um erro conceitual vou tirar 20%
            min = first;
        if(!cmp(*first, *max) || 
           *first == *max) //veja que vc não tem como garantir que o == vai funcionar, a única forma de comparar aqui é usando cmp!
            max = first;
    }

    return std::make_pair(min, max);
}

}
#endif
