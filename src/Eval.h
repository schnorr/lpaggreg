/*******************************************************************************
 *
 * This library is a C++ implementation of several algorithms that enables
 * to aggregate set of data according: an ordered dimension (OLP), a
 * hierarchy (NLP), or both (DLP). OLP and NLP scalar versions (1) have been
 * designed by Robin Lamarche-Perrin. OLP and NLP vector versions (2, 3) and
 * DLP (1, 2) have been designed by Damien Dosimont and are a generalization
 * of Robin Lamarche-Perrin works.
 *
 * Related works:
 * http://magma.imag.fr/content/robin-lamarche-perrin
 * http://moais.imag.fr/membres/damien.dosimont/research.html
 *
 *
 * (C) Copyright (February 28th 2013) Damien Dosimont. All rights reserved.
 *
 * Damien Dosimont <damien.dosimont@imag.fr>
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3.0 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 *
 *******************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

#include <cstdlib>
#include "Configuration.h"
#ifdef LINUX
#include <sys/time.h>
#endif

class Eval {
		
	private:
#ifdef LINUX
		timeval timeQ1, timeQ2, timeBC1, timeBC2, timeBP1, timeBP2;
#endif
		int counterQ, counterBC, counterBP;

	public:
		Eval();
		void startQTimer();
		void stopQTimer();
		void startBCTimer();
		void stopBCTimer();
		void startBPTimer();
		void stopBPTimer();
		int getQDuration(); //ms
		int getBCDuration(); //ms
		int getBPDuration(); //ms
		void resetQCounter();
		void resetBCCounter();
		void resetBPCounter();
		void resetCounters();
		void incrQCounter(int i = 1);
		void incrBCCounter(int i = 1);
		void incrBPCounter(int i = 1);
		int getQCount();
		int getBCCount();
		int getBPCount();
		virtual ~Eval();
};

#endif /* TIMER_H_ */
