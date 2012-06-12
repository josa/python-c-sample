#include <python2.7/Python.h>

static PyObject *getMyValue(PyObject *self, PyObject *args){
	return PyString_FromString("eh q funcionou");
}

static PyMethodDef MysampleMethods[] = {
	{"getMyValue", (PyCFunction)getMyValue, METH_VARARGS, "vee se funciona"},
	{NULL, NULL, 0, NULL}        /* Sentinel */
};

PyMODINIT_FUNC initmysample(void){
	PyObject *m;

	m = Py_InitModule("mysample", MysampleMethods);
	if (m == NULL)
		return;
}

int main(int argc, char *argv[]){
	Py_SetProgramName(argv[0]);

	Py_Initialize();

	initmysample();

	return 0;
}
