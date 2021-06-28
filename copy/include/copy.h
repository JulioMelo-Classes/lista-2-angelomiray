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
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param d_first Ponteiro para a posição do primeiro elemento do novo range
 *
 * @return iterator apontando para a posição logo após o último elemento do range cópia.
 *
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    for(; first != last; ++first, ++d_first){
        *first = *d_first;
    }

    return first;
}

}
#endif
