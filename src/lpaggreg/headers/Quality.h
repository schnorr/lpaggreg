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

#ifndef LPQUALITY_H_
#define LPQUALITY_H_

#include <cmath>
#include <algorithm>
#define PRECISION 0.0000000000001

class Quality {
	private:
		
		/*Gain*/
		double gain;

		/*Loss*/
		double loss;

	public:
		
		/*Constructor, initialize gain and loss with value 0*/
		Quality();

		/*Constructor with parameters*/
		Quality(double gain, double loss);

		/*Destructor*/
		virtual ~Quality();

		/*Gain getter*/
		double getGain() const;

		/*Gain setter*/
		void setGain(double gain);

		/*Loss getter*/
		double getLoss() const;

		/*Loss setter*/
		void setLoss(double loss);

		/*Add a value to current gain*/
		void addToGain(double gain);

		/*Add a value to current loss*/
		void addToLoss(double loss);

		bool compare(Quality quality);
};

#endif /* LPQUALITY_H_ */