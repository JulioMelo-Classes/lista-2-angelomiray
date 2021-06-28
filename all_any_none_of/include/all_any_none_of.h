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
 * @tparam UnaryPredicate o tipo de uma função 
 bool p(const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função booleana que retorna true quando um dado parâmetro satisfaz a condição do predicado. caso contrário, retorna falso.
 *
 * @return verdadeiro quando o predicado p é verdadeiro para todos os elementos do range. caso contrário, retorna falso.
 *
 */

template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    if(first == last)
        return false;

    for(; first != last; ++first){
        if(!p(*first))
            return false;
    }
    return true;
}

/*! 
 *
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função 
 bool p(const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função booleana que retorna true quando um dado parâmetro satisfaz a condição do predicado. caso contrário, retorna falso.
 *
 * @return verdadeiro quando o predicado p é verdadeiro para pelo menos um elemento do range. caso contrário, retorna falso.
 *
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{

    for(; first != last; ++first){
        if(p(*first))
            return true;
    }
    return false;
}

/*! 
 *
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função 
 bool p(const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função booleana que retorna true quando um dado parâmetro satisfaz a condição do predicado. caso contrário, retorna falso.
 *
 * @return verdadeiro quando o predicado p é falso para todos os elementos do range. caso contrário, retorna falso.
 *
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{       
    for(; first != last; ++first){
        if(p(*first))
            return false;
    }
    return true;
    
}

}
#endif
