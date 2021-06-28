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
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate tipo de uma função bool p(const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param eq função que retorna verdadeiro caso dois parâmetros dados sejam iguais. caso contrário, retorna falso.
 *
 * @return Um iterator apontando para o primeiro elemento do range que satisfaz p.
 *
 */

template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    for(; first != last; ++first){
        if(p(*first))
            return first;
    }
    return first;
}
}
#endif
