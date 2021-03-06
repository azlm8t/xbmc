/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once


//-----------------------------------------------------------------------------
// VAAPI
//-----------------------------------------------------------------------------

class CVaapiProxy;

namespace GBM
{
CVaapiProxy* VaapiProxyCreate();
void VaapiProxyDelete(CVaapiProxy *proxy);
void VaapiProxyConfig(CVaapiProxy *proxy, void *eglDpy);
void VAAPIRegister(CVaapiProxy *winSystem, bool deepColor);
void VAAPIRegisterRender(CVaapiProxy *winSystem, bool &general, bool &deepColor);
}
