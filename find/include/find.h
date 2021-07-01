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
 * @tparam Equal tipo de uma função bool eq(const T &a,  const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param eq função que retorna verdadeiro caso dois parâmetros dados sejam iguais. caso contrário, retorna falso.
 *
 * @return Um iterator(ou ponteiro) para o primeiro elemento que satisfaz a função eq().
 *
 */
 /*
 blz
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    for(; first != last; ++first){
        if(eq(*first, value))
            return first;
    }

    return first;
}

}
#endif
