/***************************************************************************/
/***************************************************************************/
/********************    Author  :  Mariam Hossam    ***********************/
/********************    Layer   :  LIB              ***********************/
/********************    SWC     :  STD_TYPES        ***********************/
/********************    Version :  1.00             ***********************/
/***************************************************************************/
/***************************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char            boolean;
typedef unsigned char            uint8;          /*           0 .. 255             */
typedef signed char              sint8;          /*        -128 .. +127            */
typedef unsigned short int       uint16;         /*           0 .. 65535           */
typedef signed short int         sint16;         /*      -32768 .. +32767          */
typedef unsigned long  int       uint32;         /*           0 .. 4294967295      */
typedef signed long int          sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long int   uint64;         /*       0..18446744073709551615  */
typedef signed long long int     sint64;
typedef float                    float32;
typedef double                   float64;

#define NULL     0
#endif
