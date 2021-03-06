/**
 * The OpenCL PHP extension
 *
 * @package     php-opencl
 * @author      Ryusuke SEKIYAMA <rsky0711@gmail.com>
 * @copyright   2012 Ryusuke SEKIYAMA
 * @license     http://www.opensource.org/licenses/mit-license.php  MIT License
 */

#include "php_opencl.h"

#ifndef PHPCL_PARAMS_H
#define PHPCL_PARAMS_H
BEGIN_EXTERN_C()

PHPCL_LOCAL zend_bool
phpcl_is_callable(zval *zv, int argno TSRMLS_DC);

PHPCL_LOCAL cl_device_id *
phpcl_get_devicecs(zval *zv, int argno, cl_uint *num_devices_ret TSRMLS_DC);

END_EXTERN_C()
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
