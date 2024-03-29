/***************************************************************************/
/***************************************************************************/
/********************    Author  :  Mariam Hossam    ***********************/
/********************    Layer   :  LIB              ***********************/
/********************    SWC     :  BITMATH          ***********************/
/********************    Version :  1.00             ***********************/
/***************************************************************************/
/***************************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR,BIT)           (VAR |=(0x01<<BIT))
#define CLR_BIT(VAR,BIT)           (VAR &= (~(0x01<<BIT)))
#define GET_BIT(VAR,BIT)           ((VAR>>BIT) & 0x01)
#define TOG_BIT(VAR,BIT)           (VAR ^=(0x01<<BIT))
#define IS_BIT_SET(VAR,BIT)        (GET_BIT(VAR,BIT))
#define IS_BIT_CLEAR(VAR,BIT)      (!GET_BIT(VAR,BIT))


#endif /* BIT_MATH_H_ */
