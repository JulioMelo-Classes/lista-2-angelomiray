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
 * @tparam FowardIt Iterator para o range.
 * @tparam Comparison tipo de uma função bool cmp(const Type &a,  const Type &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp função que retorna verdadeiro caso, dados dos parâmetros, o primeiro entre eles seja maior que o segundo. caso contrário, retorna falso.
 *
 * @return nenhum retorno.
 *
 */

template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{   
    for(auto i=first; i != last; ++i){
        for(auto j=first; j != last; ++j){
            if(!cmp(*j, *i))
                std::swap(*j, *i);
        }
    }
}

}
#endif
