/*
 * utils.h
 *
 *  Created on: Feb 24, 2018
 *      Author: megah
 */

#ifndef UTILS_H_
#define UTILS_H_

#define SetBit(Reg, bitnumber) Reg |= (1 << bitnumber)
#define ClearBit(Reg, bitnumber) Reg &= (~(1 << bitnumber))
#define TogBit(Reg, bitnumber) Reg ^= (1 << bitnumber)
#define GetBit(Reg, bitnumber) (0X01 & (Reg >> bitnumber))

#endif /* UTILS_H_ */
