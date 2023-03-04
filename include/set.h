
/**
 * Tipo de dado que representa um conjunto.
 *
 * Esta estrutura representa um conjunto de inteiros, onde cada nó
 * contém um valor e um ponteiro para o próximo nó. 
 */

typedef struct set Set;


/**
 * @return Retorna a estrutura do tipo "Set".
 */
Set *set_create(void);


/**
 * Insere um novo valor no conjunto.
 * 
 * @param self Ponteiro para o conjunto que será modificado.
 * @param value Valor inteiro a ser inserido no conjunto.
 */
void set_insert(Set *self, int value);


/**
* Retorna a quantidade de elementos no conjunto.
* @param self Ponteiro para o conjunto que será verificado.
*/
int set_size(Set *self);


/**
* Verifica se um valor está contido no conjunto.
* @param self Ponteiro para o conjunto que será verificado.
* @return Retorna verdadeiro caso o valor estejá contido no conjunto.
*/

int set_contains(Set *self, int value);


/**
* Libera a memória.
* @param self Ponteiro para o conjunto que será liberado.
*/

void set_destroy(Set *self);
