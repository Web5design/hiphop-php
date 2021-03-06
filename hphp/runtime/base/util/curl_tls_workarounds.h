/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __CURL_TLS_WORKAROUNDS_H__
#define __CURL_TLS_WORKAROUNDS_H__

#include <curl/curl.h>

namespace HPHP {

CURLcode curl_tls_workarounds_cb(CURL *curl, void *sslctx, void *parm);

#endif // __CURL_TLS_WORKAROUNDS_H__

}
