/* This file is part of 3hs
 * Copyright (C) 2021-2022 hShop developer team
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef inc_image_ldr_hh
#define inc_image_ldr_hh

#include <citro2d.h>
#include <citro3d.h>

#include "ctr.hh"


enum class SMDHIconType
{ large, small };

void load_smdh_icon(C2D_Image *ret, const ctr::TitleSMDH& smdh, SMDHIconType type,
	unsigned int *chosenDimensions = nullptr);
void load_rgba8(C2D_Image *image, u32 *data, u16 w, u16 h);
void rgba_to_abgr(u32 *data, u16 w, u16 h);
void delete_image_data(C2D_Image icon);
void delete_image(C2D_Image icon);

#endif

