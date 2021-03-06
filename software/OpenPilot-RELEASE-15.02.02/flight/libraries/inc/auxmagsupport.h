/**
 ******************************************************************************
 *
 * @file       auxmagsupport.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2014.
 * @brief      Functions to handle aux mag data and calibration.
 *             --
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef AUXMAGSUPPORT_H_
#define AUXMAGSUPPORT_H_
#include <openpilot.h>
#include <auxmagsettings.h>
#include <auxmagsensor.h>
/**
 * @brief reload Aux Mag settings
 */
void auxmagsupport_reload_settings();

/**
 * @brief Publish a new Aux Magnetometer sample
 * @param[in] mags  Mag sample in milliGauss
 * @param[in] status one of AuxMagSensorStatusOptions option
 */
void auxmagsupport_publish_samples(float mags[3], uint8_t status);

/**
 * @brief Get the Aux Mag settings Type option
 * @param[in] mags  Mag sample in milliGauss
 * @return one of AuxMagSettingsTypeOptions option
 */
AuxMagSettingsTypeOptions auxmagsupport_get_type();


#endif /* AUXMAGSUPPORT_H_ */
