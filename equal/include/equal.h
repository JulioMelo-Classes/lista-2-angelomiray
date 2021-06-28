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
 * @param first2 Ponteiro para a posição do primeiro elemento de um novo range
 * @param eq função que retorna verdadeiro caso dois parâmetros dados sejam iguais. caso contrário, retorna falso.
 *
 * @return verdadeiro caso todos os elementos entre os dois ranges sejam iguais. casos contrário, retorna falso.
 *
 */

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    
    for(; first2 != first2+(last1-first1); ++first2, ++first1){
        if(!eq(*first1, *first2))
            return false;
    }
    return true; // talvez verificar caso de vetores de tamanhos diferentes, possivel erro.
}


/*! 
 *
 * @tparam InputIt Iterator para o range.
 * @tparam Equal tipo de uma função bool eq(const T &a,  const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param first2 Ponteiro para a posição do primeiro elemento de um novo range
 * @param last2 Ponteiro para fim do segundo range
 *
 * @param eq função que retorna verdadeiro caso dois parâmetros dados sejam iguais. caso contrário, retorna falso.
 * @return verdadeiro caso todos os elementos entre os dois ranges sejam iguais. casos contrário, retorna falso.
 *
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    for(;first1 != last1; ++first1, ++first2){
        if(!eq(*first1, *first2))
            return false;
    }
    return true;
}

}
#endif
