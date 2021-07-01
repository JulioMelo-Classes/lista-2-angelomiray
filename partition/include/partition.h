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
 * @tparam UnaryPredicate tipo de uma função bool p(const T &a)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p função que retorna verdadeiro caso um parâmetro dado satisfaça uma condição. caso contrário, retorna falso.
 *
 * @return Um ponteiro(ou iterator) apontando para o endereço logo após o último elemento que satisfaz o predicado.
 *
 */
/*
ok
*/
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{

    for(auto i=first; i != last; ++i){
        if(p(*i)){
            std::swap(*first, *i); 
            ++first;
        }
    }
    
    return first;
}
//    n s n s n s  | ++first
//==> s n n s n s
//==> s s n n n s  
//==> s s s n n n
}
#endif
