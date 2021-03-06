/*
 * fifo.h
 *
 * Defines for AL422 fifo
 *
 *  Created on: Aug 18, 2013
 *      Author: arndtjenssen
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "ov7670_ports.h"

#define WRITE_ENABLE CONTROL_PORT |= AL422_WEN
#define WRITE_DISABLE CONTROL_PORT &= ~(AL422_WEN)

#define READ_CLOCK_HIGH CONTROL_PORT |= AL422_RCK
#define READ_CLOCK_LOW CONTROL_PORT &= ~(AL422_RCK)

#define READ_RESET_HIGH CONTROL_PORT |= AL422_RRST
#define READ_RESET_LOW CONTROL_PORT &= ~(AL422_RRST)

#define WRITE_RESET_HIGH CONTROL_PORT |= AL422_WRST
#define WRITE_RESET_LOW CONTROL_PORT &= ~(AL422_WRST)

#define READ_RESET READ_RESET_LOW; READ_CLOCK_HIGH; READ_RESET_HIGH; READ_CLOCK_LOW;

#define WRITE_RESET WRITE_RESET_LOW; WRITE_RESET_HIGH;

#endif /* FIFO_H_ */
