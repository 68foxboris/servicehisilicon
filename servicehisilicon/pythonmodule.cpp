#include "servicehisilicon.h"

static PyMethodDef servicehisiliconMethods[] =
{
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	"servicehisilicon",			   /* m_name */
	"Module for servicehisilicon", /* m_doc */
	-1,							   /* m_size */
	servicehisiliconMethods,	   /* m_methods */
	NULL,						   /* m_reload */
	NULL,						   /* m_traverse */
	NULL,						   /* m_clear */
	NULL,						   /* m_free */
};

PyMODINIT_FUNC PyInit_servicehisilicon(void)
{
	return PyModule_Create(&moduledef);
}
