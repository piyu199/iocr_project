/* Generated code for Python module 'scipy.optimize._minimize'
 * created by Nuitka version 1.8.1
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_scipy$optimize$_minimize" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_minimize;
PyDictObject *moduledict_scipy$optimize$_minimize;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[251];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[251];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("scipy.optimize._minimize"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 251; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_minimize(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 251; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e683d7e16a6e5ad9385f1f7b2b734af6;
static PyCodeObject *codeobj_61d89468a62fc7957563777fc18f99c9;
static PyCodeObject *codeobj_a3dfdd630f0815cddc52a3b4b1b85b6f;
static PyCodeObject *codeobj_043e8035794c48812a30ae0167e5d42a;
static PyCodeObject *codeobj_f859d483a0a4383124d84f82fa0c901f;
static PyCodeObject *codeobj_6b8844d296aedd593fad1d9f3575e4da;
static PyCodeObject *codeobj_cce593bc240866074ab44dd2f9ef20ee;
static PyCodeObject *codeobj_3d7f07e20016c134623c763bc3187f48;
static PyCodeObject *codeobj_884cb8cb387ab5341e848f8f62230de9;
static PyCodeObject *codeobj_49db943fdb94768a8d756accf8f2ace8;
static PyCodeObject *codeobj_6651c7f9a35d4a6b65f3a40faab69470;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[238]); CHECK_OBJECT(module_filename_obj);
    codeobj_e683d7e16a6e5ad9385f1f7b2b734af6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[239], mod_consts[239], NULL, NULL, 0, 0, 0);
    codeobj_61d89468a62fc7957563777fc18f99c9 = MAKE_CODE_OBJECT(module_filename_obj, 980, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[240], NULL, 3, 0, 0);
    codeobj_a3dfdd630f0815cddc52a3b4b1b85b6f = MAKE_CODE_OBJECT(module_filename_obj, 1045, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[241], NULL, 5, 0, 0);
    codeobj_043e8035794c48812a30ae0167e5d42a = MAKE_CODE_OBJECT(module_filename_obj, 950, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[242], NULL, 2, 0, 0);
    codeobj_f859d483a0a4383124d84f82fa0c901f = MAKE_CODE_OBJECT(module_filename_obj, 957, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[243], NULL, 5, 0, 0);
    codeobj_6b8844d296aedd593fad1d9f3575e4da = MAKE_CODE_OBJECT(module_filename_obj, 991, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[244], NULL, 3, 0, 0);
    codeobj_cce593bc240866074ab44dd2f9ef20ee = MAKE_CODE_OBJECT(module_filename_obj, 959, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[147], mod_consts[147], mod_consts[245], mod_consts[246], 1, 0, 0);
    codeobj_3d7f07e20016c134623c763bc3187f48 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[247], NULL, 12, 0, 0);
    codeobj_884cb8cb387ab5341e848f8f62230de9 = MAKE_CODE_OBJECT(module_filename_obj, 754, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[200], mod_consts[200], mod_consts[248], NULL, 7, 0, 0);
    codeobj_49db943fdb94768a8d756accf8f2ace8 = MAKE_CODE_OBJECT(module_filename_obj, 1007, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[249], NULL, 3, 0, 0);
    codeobj_6651c7f9a35d4a6b65f3a40faab69470 = MAKE_CODE_OBJECT(module_filename_obj, 1019, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[250], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__1_minimize(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__2_minimize_scalar(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__3__remove_from_bounds();


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__5__add_to_array();


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__6__validate_bounds();


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__7_standardize_bounds();


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__8_standardize_constraints();


static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$optimize$_minimize$$$function__1_minimize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_method = python_pars[3];
    PyObject *par_jac = python_pars[4];
    PyObject *par_hess = python_pars[5];
    PyObject *par_hessp = python_pars[6];
    PyObject *par_bounds = python_pars[7];
    PyObject *par_constraints = python_pars[8];
    PyObject *par_tol = python_pars[9];
    PyObject *par_callback = python_pars[10];
    PyObject *par_options = python_pars[11];
    PyObject *var_meth = NULL;
    PyObject *var_remove_vars = NULL;
    PyObject *var_i_fixed = NULL;
    PyObject *var_fd_needed = NULL;
    PyObject *var_con = NULL;
    PyObject *var_x_fixed = NULL;
    PyObject *var_res = NULL;
    PyObject *outline_0_var_con = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3d7f07e20016c134623c763bc3187f48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_3d7f07e20016c134623c763bc3187f48 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d7f07e20016c134623c763bc3187f48)) {
        Py_XDECREF(cache_frame_3d7f07e20016c134623c763bc3187f48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d7f07e20016c134623c763bc3187f48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d7f07e20016c134623c763bc3187f48 = MAKE_FUNCTION_FRAME(tstate, codeobj_3d7f07e20016c134623c763bc3187f48, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d7f07e20016c134623c763bc3187f48->m_type_description == NULL);
    frame_3d7f07e20016c134623c763bc3187f48 = cache_frame_3d7f07e20016c134623c763bc3187f48;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3d7f07e20016c134623c763bc3187f48);
    assert(Py_REFCNT(frame_3d7f07e20016c134623c763bc3187f48) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_2 = par_x0;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 530;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 530;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert(old != NULL);
            par_x0 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_x0);
        tmp_expression_value_2 = par_x0;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[5];
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 533;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 533;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x0);
        tmp_expression_value_4 = par_x0;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[9];
        tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_tuple_element_1 = par_x0;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[10]);
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 536;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert(old != NULL);
            par_x0 = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_args);
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_args);
        tmp_tuple_element_2 = par_args;
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_2);
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_3 = par_method;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_constraints);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_constraints);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[11];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_4;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_4 = par_bounds;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[12];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_5;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[13];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_6;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    branch_end_5:;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_2;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_method);
        tmp_args_element_value_3 = par_method;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 550;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 550;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[15];
        assert(var_meth == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_meth = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_method);
        tmp_expression_value_8 = par_method;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[16]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 553;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_meth == NULL);
        var_meth = tmp_assign_source_8;
    }
    branch_end_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_options);
        tmp_cmp_expr_left_5 = par_options;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_options;
            assert(old != NULL);
            par_options = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_6 = var_meth;
        tmp_cmp_expr_right_6 = mod_consts[17];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_jac);
        tmp_value_value_1 = par_jac;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? true : false;
        tmp_condition_result_9 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_9 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[19];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = par_method;
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_7 = var_meth;
        tmp_cmp_expr_right_7 = mod_consts[22];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_hess);
        tmp_cmp_expr_left_8 = par_hess;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        tmp_condition_result_10 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_10 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[23];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_2 = par_method;
        tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_10:;
    {
        bool tmp_condition_result_11;
        int tmp_and_left_truth_3;
        bool tmp_and_left_value_3;
        bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_9 = var_meth;
        tmp_cmp_expr_right_9 = mod_consts[24];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_hessp);
        tmp_cmp_expr_left_10 = par_hessp;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_and_right_value_3 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        tmp_condition_result_11 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_11 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_3 = mod_consts[25];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_3 = par_method;
        tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_11 = var_meth;
        tmp_cmp_expr_right_11 = mod_consts[26];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraints);
        tmp_args_element_value_10 = par_constraints;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 575;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[27], tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        tmp_condition_result_12 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_12 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_4 = mod_consts[28];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = par_method;
        tmp_args_element_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 577;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        int tmp_and_left_truth_5;
        bool tmp_and_left_value_5;
        bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_12 = var_meth;
        tmp_cmp_expr_right_12 = mod_consts[29];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_13 = par_bounds;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_and_right_value_5 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        tmp_condition_result_13 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_13 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_5 = mod_consts[30];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 580;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_5 = par_method;
        tmp_args_element_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 581;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 580;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_8;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_14 = var_meth;
        tmp_cmp_expr_right_14 = mod_consts[31];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(par_options);
        tmp_expression_value_9 = par_options;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[32]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 584;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_10, mod_consts[33]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_8);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_8);

            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_8);
        tmp_condition_result_14 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_14 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_6 = mod_consts[34];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_6 = par_method;
        tmp_args_element_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_12 != NULL);
        CHECK_OBJECT(par_jac);
        tmp_args_element_value_17 = par_jac;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 589;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_17);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(par_jac);
        tmp_cmp_expr_left_15 = par_jac;
        tmp_cmp_expr_right_15 = Py_True;
        tmp_condition_result_16 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fun);
        tmp_args_element_value_18 = par_fun;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 593;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_18);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fun;
            assert(old != NULL);
            par_fun = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_fun);
        tmp_expression_value_10 = par_fun;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[36]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_jac;
            assert(old != NULL);
            par_jac = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto branch_end_16;
    branch_no_16:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        int tmp_and_left_truth_7;
        PyObject *tmp_and_left_value_7;
        PyObject *tmp_and_right_value_7;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(par_jac);
        tmp_cmp_expr_left_16 = par_jac;
        tmp_cmp_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_16 == NULL)) {
            tmp_cmp_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_cmp_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_7 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_left_truth_7 = CHECK_IF_TRUE(tmp_and_left_value_7);
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_17 = var_meth;
        tmp_cmp_expr_right_17 = MAKE_LIST6(mod_consts[38]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_17, tmp_cmp_expr_left_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_7 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_operand_value_3 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_operand_value_3 = tmp_and_left_value_7;
        and_end_7:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_18 = var_meth;
        tmp_cmp_expr_right_18 = MAKE_LIST1(mod_consts[39]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_18, tmp_cmp_expr_left_18);
        Py_DECREF(tmp_cmp_expr_right_18);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[40];
        {
            PyObject *old = par_jac;
            assert(old != NULL);
            par_jac = tmp_assign_source_12;
            Py_INCREF(par_jac);
            Py_DECREF(old);
        }

    }
    goto branch_end_18;
    branch_no_18:;
    {
        bool tmp_condition_result_19;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        nuitka_bool tmp_cmp_expr_left_20;
        nuitka_bool tmp_cmp_expr_right_20;
        PyObject *tmp_value_value_2;
        CHECK_OBJECT(par_jac);
        tmp_cmp_expr_left_19 = par_jac;
        tmp_cmp_expr_right_19 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_jac);
        tmp_value_value_2 = par_jac;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_cmp_expr_right_20 = NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        tmp_condition_result_19 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_19 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        {
            PyObject *old = par_jac;
            assert(old != NULL);
            par_jac = tmp_assign_source_13;
            Py_INCREF(par_jac);
            Py_DECREF(old);
        }

    }
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        {
            PyObject *old = par_jac;
            assert(old != NULL);
            par_jac = tmp_assign_source_14;
            Py_INCREF(par_jac);
            Py_DECREF(old);
        }

    }
    branch_end_19:;
    branch_end_18:;
    branch_no_17:;
    branch_end_16:;
    branch_no_15:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(par_tol);
        tmp_cmp_expr_left_21 = par_tol;
        tmp_cmp_expr_right_21 = Py_None;
        tmp_condition_result_20 = (tmp_cmp_expr_left_21 != tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_seq_1;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_seq_1 = par_options;
        tmp_assign_source_15 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_options;
            par_options = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_22 = var_meth;
        tmp_cmp_expr_right_22 = mod_consts[42];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_1 = par_options;
        tmp_key_value_1 = mod_consts[43];
        CHECK_OBJECT(par_tol);
        tmp_default_value_1 = par_tol;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_2;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_2 = par_options;
        tmp_key_value_2 = mod_consts[44];
        CHECK_OBJECT(par_tol);
        tmp_default_value_2 = par_tol;
        tmp_capi_result_2 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_2, tmp_key_value_2, tmp_default_value_2);
        assert(!(tmp_capi_result_2 == NULL));
        Py_DECREF(tmp_capi_result_2);
    }
    branch_no_21:;
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_23 = var_meth;
        tmp_cmp_expr_right_23 = mod_consts[45];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_23, tmp_cmp_expr_left_23);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_3;
        PyObject *tmp_capi_result_3;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 616;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_arg_value_3 = par_options;
        tmp_key_value_3 = mod_consts[46];
        CHECK_OBJECT(par_tol);
        tmp_default_value_3 = par_tol;
        tmp_capi_result_3 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_3, tmp_key_value_3, tmp_default_value_3);
        assert(!(tmp_capi_result_3 == NULL));
        Py_DECREF(tmp_capi_result_3);
    }
    branch_no_22:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_24 = var_meth;
        tmp_cmp_expr_right_24 = mod_consts[47];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_24, tmp_cmp_expr_left_24);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_options;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[48]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[49];
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_20 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 618;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_23:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_25 = var_meth;
        tmp_cmp_expr_right_25 = mod_consts[50];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_25, tmp_cmp_expr_left_25);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_options;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[48]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[51];
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 621;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_24:;
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_26 = var_meth;
        tmp_cmp_expr_right_26 = mod_consts[53];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_26, tmp_cmp_expr_left_26);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_options;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[48]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[52];
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_24 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_27 = var_meth;
        tmp_cmp_expr_right_27 = mod_consts[39];
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_options;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[48]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[46];
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_options;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[48]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = mod_consts[51];
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_28 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_options;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[48]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[54];
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_30 = par_tol;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 627;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_26:;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_28 = var_meth;
        tmp_cmp_expr_right_28 = mod_consts[15];
        tmp_condition_result_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = par_method;
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_fun;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_3);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[57];
        CHECK_OBJECT(par_args);
        tmp_dict_value_1 = par_args;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(par_jac);
        tmp_dict_value_1 = par_jac;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[59];
        CHECK_OBJECT(par_hess);
        tmp_dict_value_1 = par_hess;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[60];
        CHECK_OBJECT(par_hessp);
        tmp_dict_value_1 = par_hessp;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        CHECK_OBJECT(par_bounds);
        tmp_dict_value_1 = par_bounds;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[62];
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 634;
            type_description_1 = "ooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = par_constraints;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_1 = par_callback;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 635;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_27:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 637;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = par_constraints;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 637;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = par_x0;
        CHECK_OBJECT(var_meth);
        tmp_args_element_value_33 = var_meth;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_constraints;
            par_constraints = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_False;
        assert(var_remove_vars == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_remove_vars = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_29 = par_bounds;
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_28 = (tmp_cmp_expr_left_29 != tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_args_element_value_34 = par_bounds;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_35 = par_x0;
        tmp_args_element_value_36 = mod_consts[66];
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            assert(old != NULL);
            par_bounds = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_args_element_value_37 = par_bounds;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 643;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_38 = par_x0;
        CHECK_OBJECT(var_meth);
        tmp_args_element_value_39 = var_meth;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 643;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            assert(old != NULL);
            par_bounds = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_30 = var_meth;
        tmp_cmp_expr_right_30 = PySet_New(mod_consts[68]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_30, tmp_cmp_expr_left_30);
        Py_DECREF(tmp_cmp_expr_right_30);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_17 = par_bounds;
        tmp_cmp_expr_left_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[69]);
        if (tmp_cmp_expr_left_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_18 = par_bounds;
        tmp_cmp_expr_right_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[70]);
        if (tmp_cmp_expr_right_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_31);

            exception_lineno = 654;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        Py_DECREF(tmp_cmp_expr_left_31);
        Py_DECREF(tmp_cmp_expr_right_31);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_i_fixed == NULL);
        var_i_fixed = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_40;
        int tmp_truth_name_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_i_fixed);
        tmp_args_element_value_40 = var_i_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 656;
        tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[71], tmp_args_element_value_40);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_16);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_16);

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_16);
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_fun;
        CHECK_OBJECT(par_bounds);
        tmp_kw_call_arg_value_1_1 = par_bounds;
        CHECK_OBJECT(var_meth);
        tmp_kw_call_arg_value_2_1 = var_meth;
        CHECK_OBJECT(par_args);
        tmp_kw_call_dict_value_0_1 = par_args;
        CHECK_OBJECT(par_constraints);
        tmp_kw_call_dict_value_1_1 = par_constraints;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 659;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_23, args, kw_values, mod_consts[73]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_30:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_24 != NULL);
        CHECK_OBJECT(par_jac);
        tmp_args_element_value_41 = par_jac;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 664;
        tmp_operand_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_41);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = (tmp_res == 0) ? Py_True : Py_False;
        assert(var_fd_needed == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_fd_needed = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_constraints);
        tmp_iter_arg_1 = par_constraints;
        tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 665;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_24 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_con;
            var_con = tmp_assign_source_24;
            Py_INCREF(var_con);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_19;
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_25 != NULL);
        CHECK_OBJECT(var_con);
        tmp_expression_value_19 = var_con;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[32]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 666;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_26, mod_consts[74]);

        Py_DECREF(tmp_called_value_26);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 666;
        tmp_operand_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = Py_True;
        {
            PyObject *old = var_fd_needed;
            var_fd_needed = tmp_assign_source_25;
            Py_INCREF(var_fd_needed);
            Py_XDECREF(old);
        }

    }
    branch_no_31:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 665;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_26;
        int tmp_and_left_truth_8;
        PyObject *tmp_and_left_value_8;
        PyObject *tmp_and_right_value_8;
        PyObject *tmp_called_instance_4;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        CHECK_OBJECT(var_i_fixed);
        tmp_called_instance_4 = var_i_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 671;
        tmp_and_left_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[27]);
        if (tmp_and_left_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_8 = CHECK_IF_TRUE(tmp_and_left_value_8);
        if (tmp_and_left_truth_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_8);

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        Py_DECREF(tmp_and_left_value_8);
        if (var_fd_needed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_2 = var_fd_needed;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_32 = var_meth;
        tmp_cmp_expr_right_32 = mod_consts[76];
        tmp_or_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        if (tmp_or_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_and_right_value_8 = tmp_or_left_value_2;
        or_end_2:;
        tmp_assign_source_26 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_assign_source_26 = tmp_and_left_value_8;
        and_end_8:;
        {
            PyObject *old = var_remove_vars;
            assert(old != NULL);
            var_remove_vars = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_remove_vars);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_remove_vars);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_21 = par_bounds;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[69]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_i_fixed);
        tmp_subscript_value_2 = var_i_fixed;
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x_fixed == NULL);
        var_x_fixed = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_operand_value_6;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 674;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_x0;
        CHECK_OBJECT(var_i_fixed);
        tmp_operand_value_6 = var_i_fixed;
        tmp_subscript_value_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            par_x0 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_args_element_value_43 = par_bounds;
        CHECK_OBJECT(var_i_fixed);
        tmp_args_element_value_44 = var_i_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 675;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            assert(old != NULL);
            par_bounds = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_45 = par_fun;
        CHECK_OBJECT(var_i_fixed);
        tmp_args_element_value_46 = var_i_fixed;
        CHECK_OBJECT(var_x_fixed);
        tmp_args_element_value_47 = var_x_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 676;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fun;
            par_fun = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_48;
        int tmp_truth_name_7;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_29 != NULL);
        CHECK_OBJECT(par_callback);
        tmp_args_element_value_48 = par_callback;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 677;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_48);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_17);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_17);

            exception_lineno = 677;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_17);
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_callback);
        tmp_args_element_value_49 = par_callback;
        CHECK_OBJECT(var_i_fixed);
        tmp_args_element_value_50 = var_i_fixed;
        CHECK_OBJECT(var_x_fixed);
        tmp_args_element_value_51 = var_x_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 678;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_callback;
            assert(old != NULL);
            par_callback = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_52;
        int tmp_truth_name_8;
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_31 != NULL);
        CHECK_OBJECT(par_jac);
        tmp_args_element_value_52 = par_jac;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 679;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_52);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_18);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_18);

            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_18);
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_4 = par_jac;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_i_fixed);
        tmp_tuple_element_4 = var_i_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_x_fixed);
        tmp_tuple_element_4 = var_x_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[79]);
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 680;
        tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_jac;
            assert(old != NULL);
            par_jac = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    branch_no_34:;
    {
        PyObject *tmp_assign_source_33;
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_constraints);
            tmp_iter_arg_2 = par_constraints;
            tmp_assign_source_34 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_35;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_36 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 684;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_37 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_con;
                outline_0_var_con = tmp_assign_source_37;
                Py_INCREF(outline_0_var_con);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_23;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_con);
            tmp_expression_value_23 = outline_0_var_con;
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[80]);
            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 684;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_33);
            Py_DECREF(tmp_called_value_33);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_33 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_con);
        outline_0_var_con = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_con);
        outline_0_var_con = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 684;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_constraints);
        tmp_iter_arg_3 = par_constraints;
        tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_38;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_39 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_39 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 685;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_40 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_con;
            var_con = tmp_assign_source_40;
            Py_INCREF(var_con);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_con);
        tmp_expression_value_24 = var_con;
        tmp_subscript_value_4 = mod_consts[55];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_4);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_5);
        if (var_i_fixed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_5 = var_i_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        if (var_x_fixed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 687;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_5 = var_x_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[83]);
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 686;
        tmp_ass_subvalue_1 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_con);
        tmp_ass_subscribed_1 = var_con;
        tmp_ass_subscript_1 = mod_consts[55];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_25;
        int tmp_truth_name_9;
        tmp_called_value_35 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_35 != NULL);
        CHECK_OBJECT(var_con);
        tmp_expression_value_25 = var_con;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[32]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 689;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_36, mod_consts[74]);

        Py_DECREF(tmp_called_value_36);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 689;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_19);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_19);

            exception_lineno = 689;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_35 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_19);
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_con);
        tmp_expression_value_26 = var_con;
        tmp_subscript_value_5 = mod_consts[58];
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_5);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_6);
        if (var_i_fixed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = var_i_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
        if (var_x_fixed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = var_x_fixed;
        PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_value_4);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[84]);
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 690;
        tmp_ass_subvalue_2 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_con);
        tmp_ass_subscribed_2 = var_con;
        tmp_ass_subscript_2 = mod_consts[58];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_35:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_32:;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_bounds == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 693;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_54 = par_bounds;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 693;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_55 = par_x0;
        CHECK_OBJECT(var_meth);
        tmp_args_element_value_56 = var_meth;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 693;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            par_bounds = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    branch_no_28:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_callback);
        tmp_args_element_value_57 = par_callback;
        CHECK_OBJECT(var_meth);
        tmp_args_element_value_58 = var_meth;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 695;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_callback;
            assert(old != NULL);
            par_callback = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_33 = var_meth;
        tmp_cmp_expr_right_33 = mod_consts[42];
        tmp_condition_result_36 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
        if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 698;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = par_fun;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_7);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 698;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_7 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_7);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_7 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_7);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_7 = par_callback;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_7);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_dircall_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_key_2 = mod_consts[61];
        CHECK_OBJECT(par_bounds);
        tmp_dict_value_2 = par_bounds;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_2);
            Py_DECREF(tmp_dircall_arg3_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_2 = par_options;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_assign_source_43 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_43;
    }
    goto branch_end_36;
    branch_no_36:;
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_34 = var_meth;
        tmp_cmp_expr_right_34 = mod_consts[87];
        tmp_condition_result_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_dircall_arg3_3;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = par_fun;
        tmp_dircall_arg2_3 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 0, tmp_tuple_element_8);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_8 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_8 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 2, tmp_tuple_element_8);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_8 = par_callback;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 3, tmp_tuple_element_8);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_8 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 4, tmp_tuple_element_8);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_dircall_arg2_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_3 = par_options;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_assign_source_44 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_44;
    }
    goto branch_end_37;
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_35 = var_meth;
        tmp_cmp_expr_right_35 = mod_consts[89];
        tmp_condition_result_38 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_dircall_arg3_4;
        tmp_dircall_arg1_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dircall_arg1_4 == NULL)) {
            tmp_dircall_arg1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_dircall_arg1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = par_fun;
        tmp_dircall_arg2_4 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 0, tmp_tuple_element_9);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_9 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 1, tmp_tuple_element_9);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_9 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 2, tmp_tuple_element_9);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_9 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 3, tmp_tuple_element_9);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_9 = par_callback;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 4, tmp_tuple_element_9);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_dircall_arg2_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_4 = par_options;
        Py_INCREF(tmp_dircall_arg1_4);
        Py_INCREF(tmp_dircall_arg3_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
            tmp_assign_source_45 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_45;
    }
    goto branch_end_38;
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_36 = var_meth;
        tmp_cmp_expr_right_36 = mod_consts[91];
        tmp_condition_result_39 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_dircall_arg2_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_dircall_arg3_5;
        tmp_dircall_arg1_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dircall_arg1_5 == NULL)) {
            tmp_dircall_arg1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_dircall_arg1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 705;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = par_fun;
        tmp_dircall_arg2_5 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 0, tmp_tuple_element_10);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 705;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_10 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_10 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 2, tmp_tuple_element_10);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_10 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 3, tmp_tuple_element_10);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_10 = par_callback;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 4, tmp_tuple_element_10);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_dircall_arg2_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 705;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_5 = par_options;
        Py_INCREF(tmp_dircall_arg1_5);
        Py_INCREF(tmp_dircall_arg3_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5, tmp_dircall_arg3_5};
            tmp_assign_source_46 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_46;
    }
    goto branch_end_39;
    branch_no_39:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_37 = var_meth;
        tmp_cmp_expr_right_37 = mod_consts[93];
        tmp_condition_result_40 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_6;
        PyObject *tmp_dircall_arg2_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_dircall_arg3_6;
        tmp_dircall_arg1_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dircall_arg1_6 == NULL)) {
            tmp_dircall_arg1_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_dircall_arg1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = par_fun;
        tmp_dircall_arg2_6 = MAKE_TUPLE_EMPTY(7);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 0, tmp_tuple_element_11);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_11 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 1, tmp_tuple_element_11);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_11 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 2, tmp_tuple_element_11);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_11 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 3, tmp_tuple_element_11);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_11 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 4, tmp_tuple_element_11);
        CHECK_OBJECT(par_hessp);
        tmp_tuple_element_11 = par_hessp;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 5, tmp_tuple_element_11);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_11 = par_callback;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_6, 6, tmp_tuple_element_11);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_dircall_arg2_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 708;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_6 = par_options;
        Py_INCREF(tmp_dircall_arg1_6);
        Py_INCREF(tmp_dircall_arg3_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_6, tmp_dircall_arg3_6};
            tmp_assign_source_47 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_47;
    }
    goto branch_end_40;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_38 = var_meth;
        tmp_cmp_expr_right_38 = mod_consts[95];
        tmp_condition_result_41 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_condition_result_41 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_7;
        PyObject *tmp_dircall_arg2_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_dircall_arg3_7;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_3;
        tmp_dircall_arg1_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dircall_arg1_7 == NULL)) {
            tmp_dircall_arg1_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_dircall_arg1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_12 = par_fun;
        tmp_dircall_arg2_7 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_7, 0, tmp_tuple_element_12);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_12 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_12 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_7, 2, tmp_tuple_element_12);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_12 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_7, 3, tmp_tuple_element_12);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_12 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_7, 4, tmp_tuple_element_12);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_dircall_arg2_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_dict_key_3 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_3 = par_callback;
        tmp_dircall_arg3_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_7, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_7);
            Py_DECREF(tmp_dircall_arg3_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 711;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_3 = par_options;
        Py_INCREF(tmp_dircall_arg1_7);
        Py_INCREF(tmp_dircall_arg4_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7, tmp_dircall_arg2_7, tmp_dircall_arg3_7, tmp_dircall_arg4_3};
            tmp_assign_source_48 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_48;
    }
    goto branch_end_41;
    branch_no_41:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_39 = var_meth;
        tmp_cmp_expr_right_39 = mod_consts[76];
        tmp_condition_result_42 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
        if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dircall_arg1_8;
        PyObject *tmp_dircall_arg2_8;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_dircall_arg3_8;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dircall_arg4_4;
        tmp_dircall_arg1_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dircall_arg1_8 == NULL)) {
            tmp_dircall_arg1_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_dircall_arg1_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 713;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_13 = par_fun;
        tmp_dircall_arg2_8 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_8, 0, tmp_tuple_element_13);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 713;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_10;
        }

        tmp_tuple_element_13 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_8, 1, tmp_tuple_element_13);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_13 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_8, 2, tmp_tuple_element_13);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_13 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_8, 3, tmp_tuple_element_13);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_13 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_8, 4, tmp_tuple_element_13);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_dircall_arg2_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_dict_key_4 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_4 = par_callback;
        tmp_dircall_arg3_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_8, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_8);
            Py_DECREF(tmp_dircall_arg3_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 714;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_4 = par_options;
        Py_INCREF(tmp_dircall_arg1_8);
        Py_INCREF(tmp_dircall_arg4_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8, tmp_dircall_arg2_8, tmp_dircall_arg3_8, tmp_dircall_arg4_4};
            tmp_assign_source_49 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_49;
    }
    goto branch_end_42;
    branch_no_42:;
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_40 = var_meth;
        tmp_cmp_expr_right_40 = mod_consts[98];
        tmp_condition_result_43 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        if (tmp_condition_result_43 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_9;
        PyObject *tmp_dircall_arg2_9;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_dircall_arg3_9;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dircall_arg4_5;
        tmp_dircall_arg1_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_dircall_arg1_9 == NULL)) {
            tmp_dircall_arg1_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_dircall_arg1_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_14 = par_fun;
        tmp_dircall_arg2_9 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_9, 0, tmp_tuple_element_14);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_11;
        }

        tmp_tuple_element_14 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_9, 1, tmp_tuple_element_14);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_14 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_9, 2, tmp_tuple_element_14);
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_11;
        }

        tmp_tuple_element_14 = par_constraints;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_9, 3, tmp_tuple_element_14);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_dircall_arg2_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_dict_key_5 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_5 = par_callback;
        tmp_dircall_arg3_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_9, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[61];
        CHECK_OBJECT(par_bounds);
        tmp_dict_value_5 = par_bounds;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_9, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_9);
            Py_DECREF(tmp_dircall_arg3_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_5 = par_options;
        Py_INCREF(tmp_dircall_arg1_9);
        Py_INCREF(tmp_dircall_arg4_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9, tmp_dircall_arg2_9, tmp_dircall_arg3_9, tmp_dircall_arg4_5};
            tmp_assign_source_50 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_50;
    }
    goto branch_end_43;
    branch_no_43:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_41 = var_meth;
        tmp_cmp_expr_right_41 = mod_consts[100];
        tmp_condition_result_44 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_10;
        PyObject *tmp_dircall_arg2_10;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_dircall_arg3_10;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dircall_arg4_6;
        tmp_dircall_arg1_10 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_dircall_arg1_10 == NULL)) {
            tmp_dircall_arg1_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_dircall_arg1_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 719;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_15 = par_fun;
        tmp_dircall_arg2_10 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 0, tmp_tuple_element_15);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 719;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_12;
        }

        tmp_tuple_element_15 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 1, tmp_tuple_element_15);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_15 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 2, tmp_tuple_element_15);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_15 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 3, tmp_tuple_element_15);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_15 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 4, tmp_tuple_element_15);
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_12;
        }

        tmp_tuple_element_15 = par_constraints;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_10, 5, tmp_tuple_element_15);
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_dircall_arg2_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_dict_key_6 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_6 = par_callback;
        tmp_dircall_arg3_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_10, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_10);
            Py_DECREF(tmp_dircall_arg3_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_6 = par_options;
        Py_INCREF(tmp_dircall_arg1_10);
        Py_INCREF(tmp_dircall_arg4_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10, tmp_dircall_arg2_10, tmp_dircall_arg3_10, tmp_dircall_arg4_6};
            tmp_assign_source_51 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_51;
    }
    goto branch_end_44;
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_42 = var_meth;
        tmp_cmp_expr_right_42 = mod_consts[39];
        tmp_condition_result_45 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        if (tmp_condition_result_45 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_11;
        PyObject *tmp_dircall_arg2_11;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_dircall_arg3_11;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dircall_arg4_7;
        tmp_dircall_arg1_11 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_dircall_arg1_11 == NULL)) {
            tmp_dircall_arg1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_dircall_arg1_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 722;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_16 = par_fun;
        tmp_dircall_arg2_11 = MAKE_TUPLE_EMPTY(8);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 0, tmp_tuple_element_16);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 722;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_13;
        }

        tmp_tuple_element_16 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 1, tmp_tuple_element_16);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_16 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 2, tmp_tuple_element_16);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_16 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 3, tmp_tuple_element_16);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_16 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 4, tmp_tuple_element_16);
        CHECK_OBJECT(par_hessp);
        tmp_tuple_element_16 = par_hessp;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 5, tmp_tuple_element_16);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_16 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 6, tmp_tuple_element_16);
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 723;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_13;
        }

        tmp_tuple_element_16 = par_constraints;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_11, 7, tmp_tuple_element_16);
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_dircall_arg2_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_dict_key_7 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_7 = par_callback;
        tmp_dircall_arg3_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_11, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_11);
            Py_DECREF(tmp_dircall_arg3_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 724;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_7 = par_options;
        Py_INCREF(tmp_dircall_arg1_11);
        Py_INCREF(tmp_dircall_arg4_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11, tmp_dircall_arg2_11, tmp_dircall_arg3_11, tmp_dircall_arg4_7};
            tmp_assign_source_52 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_52;
    }
    goto branch_end_45;
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_43 = var_meth;
        tmp_cmp_expr_right_43 = mod_consts[103];
        tmp_condition_result_46 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_43, tmp_cmp_expr_right_43);
        if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_12;
        PyObject *tmp_dircall_arg2_12;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_dircall_arg3_12;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dircall_arg4_8;
        tmp_dircall_arg1_12 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_dircall_arg1_12 == NULL)) {
            tmp_dircall_arg1_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_dircall_arg1_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 726;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_17 = par_fun;
        tmp_dircall_arg2_12 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_12, 0, tmp_tuple_element_17);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 726;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_14;
        }

        tmp_tuple_element_17 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_12, 1, tmp_tuple_element_17);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_17 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_12, 2, tmp_tuple_element_17);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_17 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_12, 3, tmp_tuple_element_17);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_17 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_12, 4, tmp_tuple_element_17);
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_dircall_arg2_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_dict_key_8 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_8 = par_callback;
        tmp_dircall_arg3_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_12, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_12);
            Py_DECREF(tmp_dircall_arg3_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 727;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_8 = par_options;
        Py_INCREF(tmp_dircall_arg1_12);
        Py_INCREF(tmp_dircall_arg4_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12, tmp_dircall_arg2_12, tmp_dircall_arg3_12, tmp_dircall_arg4_8};
            tmp_assign_source_53 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_53;
    }
    goto branch_end_46;
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_44 = var_meth;
        tmp_cmp_expr_right_44 = mod_consts[105];
        tmp_condition_result_47 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_13;
        PyObject *tmp_dircall_arg2_13;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_dircall_arg3_13;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dircall_arg4_9;
        tmp_dircall_arg1_13 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_dircall_arg1_13 == NULL)) {
            tmp_dircall_arg1_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_dircall_arg1_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = par_fun;
        tmp_dircall_arg2_13 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 0, tmp_tuple_element_18);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_15;
        }

        tmp_tuple_element_18 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 1, tmp_tuple_element_18);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_18 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 2, tmp_tuple_element_18);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_18 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 3, tmp_tuple_element_18);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_18 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 4, tmp_tuple_element_18);
        CHECK_OBJECT(par_hessp);
        tmp_tuple_element_18 = par_hessp;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_13, 5, tmp_tuple_element_18);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_dircall_arg2_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_dict_key_9 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_9 = par_callback;
        tmp_dircall_arg3_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_13, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_13);
            Py_DECREF(tmp_dircall_arg3_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_9 = par_options;
        Py_INCREF(tmp_dircall_arg1_13);
        Py_INCREF(tmp_dircall_arg4_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13, tmp_dircall_arg2_13, tmp_dircall_arg3_13, tmp_dircall_arg4_9};
            tmp_assign_source_54 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_54;
    }
    goto branch_end_47;
    branch_no_47:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_45 = var_meth;
        tmp_cmp_expr_right_45 = mod_consts[107];
        tmp_condition_result_48 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_45, tmp_cmp_expr_right_45);
        if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_14;
        PyObject *tmp_dircall_arg2_14;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_dircall_arg3_14;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dircall_arg4_10;
        tmp_dircall_arg1_14 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dircall_arg1_14 == NULL)) {
            tmp_dircall_arg1_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_dircall_arg1_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_19 = par_fun;
        tmp_dircall_arg2_14 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 0, tmp_tuple_element_19);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_16;
        }

        tmp_tuple_element_19 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 1, tmp_tuple_element_19);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_19 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 2, tmp_tuple_element_19);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_19 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 3, tmp_tuple_element_19);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_19 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 4, tmp_tuple_element_19);
        CHECK_OBJECT(par_hessp);
        tmp_tuple_element_19 = par_hessp;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_14, 5, tmp_tuple_element_19);
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_dircall_arg2_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_dict_key_10 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_10 = par_callback;
        tmp_dircall_arg3_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_14, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_14);
            Py_DECREF(tmp_dircall_arg3_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 733;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_10 = par_options;
        Py_INCREF(tmp_dircall_arg1_14);
        Py_INCREF(tmp_dircall_arg4_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14, tmp_dircall_arg2_14, tmp_dircall_arg3_14, tmp_dircall_arg4_10};
            tmp_assign_source_55 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_55;
    }
    goto branch_end_48;
    branch_no_48:;
    {
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_46 = var_meth;
        tmp_cmp_expr_right_46 = mod_consts[109];
        tmp_condition_result_49 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_46, tmp_cmp_expr_right_46);
        if (tmp_condition_result_49 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_15;
        PyObject *tmp_dircall_arg2_15;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_dircall_arg3_15;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dircall_arg4_11;
        tmp_dircall_arg1_15 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_dircall_arg1_15 == NULL)) {
            tmp_dircall_arg1_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_dircall_arg1_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 735;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_20 = par_fun;
        tmp_dircall_arg2_15 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_15, 0, tmp_tuple_element_20);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 735;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_17;
        }

        tmp_tuple_element_20 = par_x0;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_15, 1, tmp_tuple_element_20);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_20 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_15, 2, tmp_tuple_element_20);
        CHECK_OBJECT(par_jac);
        tmp_tuple_element_20 = par_jac;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_15, 3, tmp_tuple_element_20);
        CHECK_OBJECT(par_hess);
        tmp_tuple_element_20 = par_hess;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_15, 4, tmp_tuple_element_20);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_dircall_arg2_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_dict_key_11 = mod_consts[63];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_11 = par_callback;
        tmp_dircall_arg3_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_15, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_15);
            Py_DECREF(tmp_dircall_arg3_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 736;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_11 = par_options;
        Py_INCREF(tmp_dircall_arg1_15);
        Py_INCREF(tmp_dircall_arg4_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15, tmp_dircall_arg2_15, tmp_dircall_arg3_15, tmp_dircall_arg4_11};
            tmp_assign_source_56 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_56;
    }
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        tmp_mod_expr_left_7 = mod_consts[111];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 738;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_7 = par_method;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 738;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 738;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_49:;
    branch_end_48:;
    branch_end_47:;
    branch_end_46:;
    branch_end_45:;
    branch_end_44:;
    branch_end_43:;
    branch_end_42:;
    branch_end_41:;
    branch_end_40:;
    branch_end_39:;
    branch_end_38:;
    branch_end_37:;
    branch_end_36:;
    {
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_remove_vars);
        tmp_truth_name_10 = CHECK_IF_TRUE(var_remove_vars);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_50 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_27 = var_res;
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[113]);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_i_fixed == NULL) {
            Py_DECREF(tmp_args_element_value_59);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_60 = var_i_fixed;
        if (var_x_fixed == NULL) {
            Py_DECREF(tmp_args_element_value_59);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_61 = var_x_fixed;
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 741;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_assattr_target_1 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[113], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_28 = var_res;
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[58]);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_i_fixed == NULL) {
            Py_DECREF(tmp_args_element_value_62);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_63 = var_i_fixed;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[114]);
        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d7f07e20016c134623c763bc3187f48->m_frame.f_lineno = 742;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_args_element_value_62);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_assattr_target_2 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        tmp_cmp_expr_left_47 = mod_consts[115];
        CHECK_OBJECT(var_res);
        tmp_cmp_expr_right_47 = var_res;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_47, tmp_cmp_expr_left_47);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_51 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(var_res);
        tmp_assattr_target_3 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[115], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_51:;
    branch_no_50:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_4;
        PyObject *tmp_capi_result_4;
        int tmp_truth_name_11;
        CHECK_OBJECT(par_callback);
        tmp_expression_value_30 = par_callback;
        tmp_name_value_1 = mod_consts[116];
        tmp_default_value_4 = Py_False;
        tmp_capi_result_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_1, tmp_default_value_4);
        if (tmp_capi_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_capi_result_4);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_4);

            exception_lineno = 746;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_4);
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 747;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[118], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 747;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[119];
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 748;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[120], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[121];
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 749;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[122], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_52:;
    if (var_res == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 751;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d7f07e20016c134623c763bc3187f48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d7f07e20016c134623c763bc3187f48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d7f07e20016c134623c763bc3187f48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d7f07e20016c134623c763bc3187f48,
        type_description_1,
        par_fun,
        par_x0,
        par_args,
        par_method,
        par_jac,
        par_hess,
        par_hessp,
        par_bounds,
        par_constraints,
        par_tol,
        par_callback,
        par_options,
        var_meth,
        var_remove_vars,
        var_i_fixed,
        var_fd_needed,
        var_con,
        var_x_fixed,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_3d7f07e20016c134623c763bc3187f48 == cache_frame_3d7f07e20016c134623c763bc3187f48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d7f07e20016c134623c763bc3187f48);
        cache_frame_3d7f07e20016c134623c763bc3187f48 = NULL;
    }

    assertFrameObject(frame_3d7f07e20016c134623c763bc3187f48);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_fun);
    par_fun = NULL;
    Py_XDECREF(par_x0);
    par_x0 = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    par_jac = NULL;
    Py_XDECREF(par_bounds);
    par_bounds = NULL;
    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
    CHECK_OBJECT(var_meth);
    Py_DECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_remove_vars);
    var_remove_vars = NULL;
    Py_XDECREF(var_i_fixed);
    var_i_fixed = NULL;
    Py_XDECREF(var_fd_needed);
    var_fd_needed = NULL;
    Py_XDECREF(var_con);
    var_con = NULL;
    Py_XDECREF(var_x_fixed);
    var_x_fixed = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_fun);
    par_fun = NULL;
    Py_XDECREF(par_x0);
    par_x0 = NULL;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_jac);
    par_jac = NULL;
    Py_XDECREF(par_bounds);
    par_bounds = NULL;
    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(par_callback);
    par_callback = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_remove_vars);
    var_remove_vars = NULL;
    Py_XDECREF(var_i_fixed);
    var_i_fixed = NULL;
    Py_XDECREF(var_fd_needed);
    var_fd_needed = NULL;
    Py_XDECREF(var_con);
    var_con = NULL;
    Py_XDECREF(var_x_fixed);
    var_x_fixed = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_hessp);
    Py_DECREF(par_hessp);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__2_minimize_scalar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    PyObject *par_bracket = python_pars[1];
    PyObject *par_bounds = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_method = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_options = python_pars[6];
    PyObject *var_meth = NULL;
    PyObject *var_message = NULL;
    PyObject *var_disp = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_884cb8cb387ab5341e848f8f62230de9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_884cb8cb387ab5341e848f8f62230de9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_884cb8cb387ab5341e848f8f62230de9)) {
        Py_XDECREF(cache_frame_884cb8cb387ab5341e848f8f62230de9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_884cb8cb387ab5341e848f8f62230de9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_884cb8cb387ab5341e848f8f62230de9 = MAKE_FUNCTION_FRAME(tstate, codeobj_884cb8cb387ab5341e848f8f62230de9, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_884cb8cb387ab5341e848f8f62230de9->m_type_description == NULL);
    frame_884cb8cb387ab5341e848f8f62230de9 = cache_frame_884cb8cb387ab5341e848f8f62230de9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_884cb8cb387ab5341e848f8f62230de9);
    assert(Py_REFCNT(frame_884cb8cb387ab5341e848f8f62230de9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_args);
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_args);
        tmp_tuple_element_1 = par_args;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_method);
        tmp_args_element_value_1 = par_method;
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 897;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 897;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[15];
        assert(var_meth == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_meth = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_1 = par_method;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_2 = par_bounds;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = mod_consts[124];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = mod_consts[125];
        condexpr_end_1:;
        assert(var_meth == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_meth = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_method);
        tmp_expression_value_1 = par_method;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 902;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_meth == NULL);
        var_meth = tmp_assign_source_4;
    }
    branch_end_3:;
    branch_end_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_options);
        tmp_cmp_expr_left_3 = par_options;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_options;
            assert(old != NULL);
            par_options = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_4 = par_bounds;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_5 = var_meth;
        tmp_cmp_expr_right_5 = PySet_New(mod_consts[126]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[127];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            if (par_method == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 907;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = par_method;
            tmp_format_spec_1 = mod_consts[128];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 907;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = PyUnicode_Join(mod_consts[128], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_6;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(var_message);
        tmp_make_exception_arg_1 = var_message;
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 908;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 908;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_tol);
        tmp_cmp_expr_left_6 = par_tol;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_options);
        tmp_dict_seq_1 = par_options;
        tmp_assign_source_7 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_options;
            assert(old != NULL);
            par_options = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_7 = var_meth;
        tmp_cmp_expr_right_7 = mod_consts[125];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_key_value_1 = mod_consts[43];
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_1 = par_options;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_8 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[130];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 914;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 913;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    CHECK_OBJECT(par_tol);
    tmp_dictset_value = par_tol;
    CHECK_OBJECT(par_options);
    tmp_dictset_dict = par_options;
    tmp_dictset_key = mod_consts[43];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_8 = var_meth;
        tmp_cmp_expr_right_8 = mod_consts[15];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 916;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_2 = par_options;
        tmp_key_value_2 = mod_consts[52];
        CHECK_OBJECT(par_tol);
        tmp_default_value_1 = par_tol;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_2, tmp_key_value_2, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_2;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_3 = par_options;
        tmp_key_value_3 = mod_consts[46];
        CHECK_OBJECT(par_tol);
        tmp_default_value_2 = par_tol;
        tmp_capi_result_2 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_3, tmp_key_value_3, tmp_default_value_2);
        assert(!(tmp_capi_result_2 == NULL));
        Py_DECREF(tmp_capi_result_2);
    }
    branch_end_8:;
    branch_end_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        if (par_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 922;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_options;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 922;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[131]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_disp == NULL);
        var_disp = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_disp);
        tmp_isinstance_inst_2 = var_disp;
        tmp_isinstance_cls_2 = (PyObject *)&PyBool_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mult_expr_left_1 = mod_consts[132];
        CHECK_OBJECT(var_disp);
        tmp_int_arg_1 = var_disp;
        tmp_mult_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_options == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 924;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = par_options;
        tmp_ass_subscript_1 = mod_consts[133];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_9 = var_meth;
        tmp_cmp_expr_right_9 = mod_consts[15];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 927;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = par_method;
        CHECK_OBJECT(par_fun);
        tmp_tuple_element_3 = par_fun;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_3);
        tmp_dict_key_1 = mod_consts[57];
        CHECK_OBJECT(par_args);
        tmp_dict_value_1 = par_args;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[134];
        CHECK_OBJECT(par_bracket);
        tmp_dict_value_1 = par_bracket;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        CHECK_OBJECT(par_bounds);
        tmp_dict_value_1 = par_bounds;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 927;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_9 = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_9;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_10 = var_meth;
        tmp_cmp_expr_right_10 = mod_consts[124];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_fun);
        tmp_tuple_element_4 = par_fun;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_4);
        CHECK_OBJECT(par_bracket);
        tmp_tuple_element_4 = par_bracket;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_4);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_4 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_4);
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 930;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_2 = par_options;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_assign_source_10 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_10;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_11 = var_meth;
        tmp_cmp_expr_right_11 = mod_consts[125];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_12 = par_bounds;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_14 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[137];
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 933;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 933;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dircall_arg3_3;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 935;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fun);
        tmp_tuple_element_5 = par_fun;
        tmp_dircall_arg2_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(par_bounds);
        tmp_tuple_element_5 = par_bounds;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_5 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 2, tmp_tuple_element_5);
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 935;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_3 = par_options;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_assign_source_11 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 935;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_11;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_13 = var_meth;
        tmp_cmp_expr_right_13 = mod_consts[139];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_dircall_arg3_4;
        tmp_dircall_arg1_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_dircall_arg1_4 == NULL)) {
            tmp_dircall_arg1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_dircall_arg1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_4 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 0, tmp_tuple_element_6);
        CHECK_OBJECT(par_fun);
        tmp_tuple_element_6 = par_fun;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 1, tmp_tuple_element_6);
        CHECK_OBJECT(par_bracket);
        tmp_tuple_element_6 = par_bracket;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 2, tmp_tuple_element_6);
        CHECK_OBJECT(par_args);
        tmp_tuple_element_6 = par_args;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 3, tmp_tuple_element_6);
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 938;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_4 = par_options;
        Py_INCREF(tmp_dircall_arg1_4);
        Py_INCREF(tmp_dircall_arg3_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
            tmp_assign_source_12 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_12;
    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[111];
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 940;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = par_method;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 940;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 940;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 940;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_14:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_5 = var_res;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[55]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 945;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[141];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_assattr_target_1 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[55], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[142]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_8 = var_res;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[113]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_10 = var_res;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[55]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[143]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_884cb8cb387ab5341e848f8f62230de9->m_frame.f_lineno = 946;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[141];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_assattr_target_2 = var_res;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[113], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_884cb8cb387ab5341e848f8f62230de9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_884cb8cb387ab5341e848f8f62230de9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_884cb8cb387ab5341e848f8f62230de9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_884cb8cb387ab5341e848f8f62230de9,
        type_description_1,
        par_fun,
        par_bracket,
        par_bounds,
        par_args,
        par_method,
        par_tol,
        par_options,
        var_meth,
        var_message,
        var_disp,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_884cb8cb387ab5341e848f8f62230de9 == cache_frame_884cb8cb387ab5341e848f8f62230de9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_884cb8cb387ab5341e848f8f62230de9);
        cache_frame_884cb8cb387ab5341e848f8f62230de9 = NULL;
    }

    assertFrameObject(frame_884cb8cb387ab5341e848f8f62230de9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
    CHECK_OBJECT(var_meth);
    Py_DECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_disp);
    var_disp = NULL;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_disp);
    var_disp = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_bracket);
    Py_DECREF(par_bracket);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_bracket);
    Py_DECREF(par_bracket);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__3__remove_from_bounds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[0];
    PyObject *par_i_fixed = python_pars[1];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    struct Nuitka_FrameObject *frame_043e8035794c48812a30ae0167e5d42a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_043e8035794c48812a30ae0167e5d42a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_043e8035794c48812a30ae0167e5d42a)) {
        Py_XDECREF(cache_frame_043e8035794c48812a30ae0167e5d42a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_043e8035794c48812a30ae0167e5d42a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_043e8035794c48812a30ae0167e5d42a = MAKE_FUNCTION_FRAME(tstate, codeobj_043e8035794c48812a30ae0167e5d42a, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_043e8035794c48812a30ae0167e5d42a->m_type_description == NULL);
    frame_043e8035794c48812a30ae0167e5d42a = cache_frame_043e8035794c48812a30ae0167e5d42a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_043e8035794c48812a30ae0167e5d42a);
    assert(Py_REFCNT(frame_043e8035794c48812a30ae0167e5d42a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_2 = par_bounds;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_i_fixed);
        tmp_operand_value_1 = par_i_fixed;
        tmp_subscript_value_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 952;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lb == NULL);
        var_lb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_4 = par_bounds;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[70]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_i_fixed);
        tmp_operand_value_2 = par_i_fixed;
        tmp_subscript_value_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 953;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ub == NULL);
        var_ub = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_1 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_2 = var_ub;
        frame_043e8035794c48812a30ae0167e5d42a->m_frame.f_lineno = 954;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_043e8035794c48812a30ae0167e5d42a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_043e8035794c48812a30ae0167e5d42a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_043e8035794c48812a30ae0167e5d42a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_043e8035794c48812a30ae0167e5d42a,
        type_description_1,
        par_bounds,
        par_i_fixed,
        var_lb,
        var_ub
    );


    // Release cached frame if used for exception.
    if (frame_043e8035794c48812a30ae0167e5d42a == cache_frame_043e8035794c48812a30ae0167e5d42a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_043e8035794c48812a30ae0167e5d42a);
        cache_frame_043e8035794c48812a30ae0167e5d42a = NULL;
    }

    assertFrameObject(frame_043e8035794c48812a30ae0167e5d42a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lb);
    Py_DECREF(var_lb);
    var_lb = NULL;
    CHECK_OBJECT(var_ub);
    Py_DECREF(var_ub);
    var_ub = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_i_fixed);
    Py_DECREF(par_i_fixed);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_i_fixed);
    Py_DECREF(par_i_fixed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__4__remove_from_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fun_in = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_i_fixed = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_x_fixed = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_min_dim = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_remove = Nuitka_Cell_New1(python_pars[4]);
    PyObject *var_fun_out = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = par_fun_in;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_i_fixed;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_min_dim;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_remove;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_x_fixed;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out(tmp_closure_1);

        assert(var_fun_out == NULL);
        var_fun_out = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_fun_out);
    tmp_return_value = var_fun_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fun_out);
    Py_DECREF(var_fun_out);
    var_fun_out = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun_in);
    Py_DECREF(par_fun_in);
    CHECK_OBJECT(par_i_fixed);
    Py_DECREF(par_i_fixed);
    CHECK_OBJECT(par_x_fixed);
    Py_DECREF(par_x_fixed);
    CHECK_OBJECT(par_min_dim);
    Py_DECREF(par_min_dim);
    CHECK_OBJECT(par_remove);
    Py_DECREF(par_remove);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x_in = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_x_out = NULL;
    PyObject *var_y_out = NULL;
    struct Nuitka_FrameObject *frame_cce593bc240866074ab44dd2f9ef20ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cce593bc240866074ab44dd2f9ef20ee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cce593bc240866074ab44dd2f9ef20ee)) {
        Py_XDECREF(cache_frame_cce593bc240866074ab44dd2f9ef20ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cce593bc240866074ab44dd2f9ef20ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cce593bc240866074ab44dd2f9ef20ee = MAKE_FUNCTION_FRAME(tstate, codeobj_cce593bc240866074ab44dd2f9ef20ee, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cce593bc240866074ab44dd2f9ef20ee->m_type_description == NULL);
    frame_cce593bc240866074ab44dd2f9ef20ee = cache_frame_cce593bc240866074ab44dd2f9ef20ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cce593bc240866074ab44dd2f9ef20ee);
    assert(Py_REFCNT(frame_cce593bc240866074ab44dd2f9ef20ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[150]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 960;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x_in);
        tmp_expression_value_2 = par_x_in;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 960;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        frame_cce593bc240866074ab44dd2f9ef20ee->m_frame.f_lineno = 960;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_x_out == NULL);
        var_x_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 961;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = Nuitka_Cell_GET(self->m_closure[4]);
        CHECK_OBJECT(var_x_out);
        tmp_ass_subscribed_1 = var_x_out;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 961;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_x_in);
        tmp_ass_subvalue_2 = par_x_in;
        CHECK_OBJECT(var_x_out);
        tmp_ass_subscribed_2 = var_x_out;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 962;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_ass_subscript_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[152]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 963;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_x_out);
        tmp_tuple_element_1 = var_x_out;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_2 = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_y_out == NULL);
        var_y_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y_out);
        tmp_args_element_value_1 = var_y_out;
        frame_cce593bc240866074ab44dd2f9ef20ee->m_frame.f_lineno = 964;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[153], tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_out;
            assert(old != NULL);
            var_y_out = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 966;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y_out);
        tmp_args_element_value_2 = var_y_out;
        frame_cce593bc240866074ab44dd2f9ef20ee->m_frame.f_lineno = 967;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[1], tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_out;
            assert(old != NULL);
            var_y_out = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 968;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_cmp_expr_right_2 = mod_consts[132];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 968;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y_out);
        tmp_args_element_value_3 = var_y_out;
        frame_cce593bc240866074ab44dd2f9ef20ee->m_frame.f_lineno = 969;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[155], tmp_args_element_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_out;
            assert(old != NULL);
            var_y_out = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 971;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_cmp_expr_right_3 = mod_consts[4];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 971;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_y_out);
        tmp_expression_value_3 = var_y_out;
        tmp_tuple_element_2 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_operand_value_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 972;
                type_description_1 = "oooooccccc";
                goto tuple_build_exception_1;
            }

            tmp_operand_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_tuple_element_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 972;
                type_description_1 = "oooooccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_out;
            assert(old != NULL);
            var_y_out = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 973;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_cmp_expr_right_4 = mod_consts[132];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 973;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_y_out);
        tmp_expression_value_4 = var_y_out;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 974;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_tuple_element_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 974;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_operand_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_3);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 974;
                type_description_1 = "oooooccccc";
                goto tuple_build_exception_2;
            }

            tmp_operand_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_tuple_element_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 974;
                type_description_1 = "oooooccccc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 974;
            type_description_1 = "oooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_out;
            assert(old != NULL);
            var_y_out = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cce593bc240866074ab44dd2f9ef20ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cce593bc240866074ab44dd2f9ef20ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cce593bc240866074ab44dd2f9ef20ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cce593bc240866074ab44dd2f9ef20ee,
        type_description_1,
        par_x_in,
        par_args,
        par_kwargs,
        var_x_out,
        var_y_out,
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_cce593bc240866074ab44dd2f9ef20ee == cache_frame_cce593bc240866074ab44dd2f9ef20ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cce593bc240866074ab44dd2f9ef20ee);
        cache_frame_cce593bc240866074ab44dd2f9ef20ee = NULL;
    }

    assertFrameObject(frame_cce593bc240866074ab44dd2f9ef20ee);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_y_out);
    tmp_return_value = var_y_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x_out);
    Py_DECREF(var_x_out);
    var_x_out = NULL;
    CHECK_OBJECT(var_y_out);
    Py_DECREF(var_y_out);
    var_y_out = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_x_out);
    var_x_out = NULL;
    Py_XDECREF(var_y_out);
    var_y_out = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x_in);
    Py_DECREF(par_x_in);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x_in);
    Py_DECREF(par_x_in);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__5__add_to_array(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x_in = python_pars[0];
    PyObject *par_i_fixed = python_pars[1];
    PyObject *par_x_fixed = python_pars[2];
    PyObject *var_i_free = NULL;
    PyObject *var_x_out = NULL;
    struct Nuitka_FrameObject *frame_61d89468a62fc7957563777fc18f99c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_61d89468a62fc7957563777fc18f99c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_61d89468a62fc7957563777fc18f99c9)) {
        Py_XDECREF(cache_frame_61d89468a62fc7957563777fc18f99c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61d89468a62fc7957563777fc18f99c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61d89468a62fc7957563777fc18f99c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_61d89468a62fc7957563777fc18f99c9, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61d89468a62fc7957563777fc18f99c9->m_type_description == NULL);
    frame_61d89468a62fc7957563777fc18f99c9 = cache_frame_61d89468a62fc7957563777fc18f99c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_61d89468a62fc7957563777fc18f99c9);
    assert(Py_REFCNT(frame_61d89468a62fc7957563777fc18f99c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_i_fixed);
        tmp_operand_value_1 = par_i_fixed;
        tmp_assign_source_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 982;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_i_free == NULL);
        var_i_free = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x_in);
        tmp_expression_value_1 = par_x_in;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 983;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[132];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 983;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_matmult_expr_left_1;
        PyObject *tmp_matmult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_i_free);
        tmp_expression_value_2 = var_i_free;
        tmp_subscript_value_1 = mod_consts[157];
        tmp_matmult_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_matmult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 984;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_i_free);
        tmp_expression_value_3 = var_i_free;
        tmp_subscript_value_2 = mod_consts[158];
        tmp_matmult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_matmult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_matmult_expr_left_1);

            exception_lineno = 984;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MATMULT_OBJECT_OBJECT_OBJECT(tmp_matmult_expr_left_1, tmp_matmult_expr_right_1);
        Py_DECREF(tmp_matmult_expr_left_1);
        Py_DECREF(tmp_matmult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 984;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_free;
            assert(old != NULL);
            var_i_free = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 985;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[150]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 985;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_i_free);
        tmp_kw_call_arg_value_0_1 = var_i_free;
        CHECK_OBJECT(par_x_in);
        tmp_expression_value_5 = par_x_in;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 985;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_61d89468a62fc7957563777fc18f99c9->m_frame.f_lineno = 985;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 985;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x_out == NULL);
        var_x_out = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_x_fixed);
        tmp_ass_subvalue_1 = par_x_fixed;
        CHECK_OBJECT(var_x_out);
        tmp_ass_subscribed_1 = var_x_out;
        CHECK_OBJECT(var_i_free);
        tmp_operand_value_2 = var_i_free;
        tmp_ass_subscript_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 986;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 986;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_x_in);
        tmp_called_instance_1 = par_x_in;
        frame_61d89468a62fc7957563777fc18f99c9->m_frame.f_lineno = 987;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[159]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x_out);
        tmp_ass_subscribed_2 = var_x_out;
        CHECK_OBJECT(var_i_free);
        tmp_ass_subscript_2 = var_i_free;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61d89468a62fc7957563777fc18f99c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61d89468a62fc7957563777fc18f99c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61d89468a62fc7957563777fc18f99c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61d89468a62fc7957563777fc18f99c9,
        type_description_1,
        par_x_in,
        par_i_fixed,
        par_x_fixed,
        var_i_free,
        var_x_out
    );


    // Release cached frame if used for exception.
    if (frame_61d89468a62fc7957563777fc18f99c9 == cache_frame_61d89468a62fc7957563777fc18f99c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61d89468a62fc7957563777fc18f99c9);
        cache_frame_61d89468a62fc7957563777fc18f99c9 = NULL;
    }

    assertFrameObject(frame_61d89468a62fc7957563777fc18f99c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_x_out);
    tmp_return_value = var_x_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_i_free);
    Py_DECREF(var_i_free);
    var_i_free = NULL;
    CHECK_OBJECT(var_x_out);
    Py_DECREF(var_x_out);
    var_x_out = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_i_free);
    var_i_free = NULL;
    Py_XDECREF(var_x_out);
    var_x_out = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x_in);
    Py_DECREF(par_x_in);
    CHECK_OBJECT(par_i_fixed);
    Py_DECREF(par_i_fixed);
    CHECK_OBJECT(par_x_fixed);
    Py_DECREF(par_x_fixed);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x_in);
    Py_DECREF(par_x_in);
    CHECK_OBJECT(par_i_fixed);
    Py_DECREF(par_i_fixed);
    CHECK_OBJECT(par_x_fixed);
    Py_DECREF(par_x_fixed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__6__validate_bounds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_meth = python_pars[2];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_6b8844d296aedd593fad1d9f3575e4da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6b8844d296aedd593fad1d9f3575e4da = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b8844d296aedd593fad1d9f3575e4da)) {
        Py_XDECREF(cache_frame_6b8844d296aedd593fad1d9f3575e4da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b8844d296aedd593fad1d9f3575e4da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b8844d296aedd593fad1d9f3575e4da = MAKE_FUNCTION_FRAME(tstate, codeobj_6b8844d296aedd593fad1d9f3575e4da, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b8844d296aedd593fad1d9f3575e4da->m_type_description == NULL);
    frame_6b8844d296aedd593fad1d9f3575e4da = cache_frame_6b8844d296aedd593fad1d9f3575e4da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b8844d296aedd593fad1d9f3575e4da);
    assert(Py_REFCNT(frame_6b8844d296aedd593fad1d9f3575e4da) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_2 = par_bounds;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[70]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_3 = par_bounds;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[69]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = 995;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 995;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[161];
        frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = 996;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 996;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooNo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[162]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_5 = par_bounds;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[69]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_6 = par_x0;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[143]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = 1000;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_assattr_target_1 = par_bounds;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1000;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[162]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_8 = par_bounds;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[70]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_9 = par_x0;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[143]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = 1001;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_assattr_target_2 = par_bounds;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1001;
            type_description_1 = "oooNo";
            goto try_except_handler_1;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6b8844d296aedd593fad1d9f3575e4da, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6b8844d296aedd593fad1d9f3575e4da, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_2 = mod_consts[163];
        frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = 1003;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_2;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 1003;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooNo";
        goto try_except_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 999;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6b8844d296aedd593fad1d9f3575e4da->m_frame) frame_6b8844d296aedd593fad1d9f3575e4da->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNo";
    goto try_except_handler_2;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b8844d296aedd593fad1d9f3575e4da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b8844d296aedd593fad1d9f3575e4da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b8844d296aedd593fad1d9f3575e4da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b8844d296aedd593fad1d9f3575e4da,
        type_description_1,
        par_bounds,
        par_x0,
        par_meth,
        NULL,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_6b8844d296aedd593fad1d9f3575e4da == cache_frame_6b8844d296aedd593fad1d9f3575e4da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b8844d296aedd593fad1d9f3575e4da);
        cache_frame_6b8844d296aedd593fad1d9f3575e4da = NULL;
    }

    assertFrameObject(frame_6b8844d296aedd593fad1d9f3575e4da);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_bounds);
    tmp_return_value = par_bounds;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__7_standardize_bounds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_meth = python_pars[2];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_49db943fdb94768a8d756accf8f2ace8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_49db943fdb94768a8d756accf8f2ace8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49db943fdb94768a8d756accf8f2ace8)) {
        Py_XDECREF(cache_frame_49db943fdb94768a8d756accf8f2ace8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49db943fdb94768a8d756accf8f2ace8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49db943fdb94768a8d756accf8f2ace8 = MAKE_FUNCTION_FRAME(tstate, codeobj_49db943fdb94768a8d756accf8f2ace8, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49db943fdb94768a8d756accf8f2ace8->m_type_description == NULL);
    frame_49db943fdb94768a8d756accf8f2ace8 = cache_frame_49db943fdb94768a8d756accf8f2ace8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_49db943fdb94768a8d756accf8f2ace8);
    assert(Py_REFCNT(frame_49db943fdb94768a8d756accf8f2ace8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_meth);
        tmp_cmp_expr_left_1 = par_meth;
        tmp_cmp_expr_right_1 = PySet_New(mod_consts[165]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1009;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_bounds);
        tmp_isinstance_inst_1 = par_bounds;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1011;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_bounds);
        tmp_args_element_value_1 = par_bounds;
        frame_49db943fdb94768a8d756accf8f2ace8->m_frame.f_lineno = 1011;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1011;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1011;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 1011;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 1011;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 1011;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[167];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 1011;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_lb == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_lb = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_ub == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_ub = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_2 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_3 = var_ub;
        frame_49db943fdb94768a8d756accf8f2ace8->m_frame.f_lineno = 1012;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            assert(old != NULL);
            par_bounds = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_meth);
        tmp_cmp_expr_left_2 = par_meth;
        tmp_cmp_expr_right_2 = mod_consts[168];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1013;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_bounds);
        tmp_isinstance_inst_2 = par_bounds;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_1 = par_bounds;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_2 = par_bounds;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[70]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_4 = par_x0;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[143]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[170];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_49db943fdb94768a8d756accf8f2ace8->m_frame.f_lineno = 1015;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bounds;
            assert(old != NULL);
            par_bounds = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_no_3:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49db943fdb94768a8d756accf8f2ace8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49db943fdb94768a8d756accf8f2ace8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49db943fdb94768a8d756accf8f2ace8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49db943fdb94768a8d756accf8f2ace8,
        type_description_1,
        par_bounds,
        par_x0,
        par_meth,
        var_lb,
        var_ub
    );


    // Release cached frame if used for exception.
    if (frame_49db943fdb94768a8d756accf8f2ace8 == cache_frame_49db943fdb94768a8d756accf8f2ace8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49db943fdb94768a8d756accf8f2ace8);
        cache_frame_49db943fdb94768a8d756accf8f2ace8 = NULL;
    }

    assertFrameObject(frame_49db943fdb94768a8d756accf8f2ace8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_bounds);
    tmp_return_value = par_bounds;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_bounds);
    par_bounds = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__8_standardize_constraints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_constraints = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_meth = python_pars[2];
    PyObject *var_all_constraint_types = NULL;
    PyObject *var_new_constraint_types = NULL;
    PyObject *var_i = NULL;
    PyObject *var_con = NULL;
    PyObject *var_old_constraints = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6651c7f9a35d4a6b65f3a40faab69470;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6651c7f9a35d4a6b65f3a40faab69470 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6651c7f9a35d4a6b65f3a40faab69470)) {
        Py_XDECREF(cache_frame_6651c7f9a35d4a6b65f3a40faab69470);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6651c7f9a35d4a6b65f3a40faab69470 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6651c7f9a35d4a6b65f3a40faab69470 = MAKE_FUNCTION_FRAME(tstate, codeobj_6651c7f9a35d4a6b65f3a40faab69470, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6651c7f9a35d4a6b65f3a40faab69470->m_type_description == NULL);
    frame_6651c7f9a35d4a6b65f3a40faab69470 = cache_frame_6651c7f9a35d4a6b65f3a40faab69470;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6651c7f9a35d4a6b65f3a40faab69470);
    assert(Py_REFCNT(frame_6651c7f9a35d4a6b65f3a40faab69470) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyDict_Type;
        PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_all_constraint_types == NULL);
        var_all_constraint_types = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_all_constraint_types);
        tmp_expression_value_1 = var_all_constraint_types;
        tmp_subscript_value_1 = mod_consts[174];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_constraint_types == NULL);
        var_new_constraint_types = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_constraints);
        tmp_cmp_expr_left_1 = par_constraints;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_constraints);
        tmp_isinstance_inst_1 = par_constraints;
        CHECK_OBJECT(var_all_constraint_types);
        tmp_isinstance_cls_1 = var_all_constraint_types;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_constraints);
        tmp_list_element_1 = par_constraints;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_1);
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_constraints);
        tmp_list_arg_1 = par_constraints;
        tmp_assign_source_5 = MAKE_LIST(tstate, tmp_list_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1028;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_meth);
        tmp_cmp_expr_left_2 = par_meth;
        tmp_cmp_expr_right_2 = MAKE_LIST2(mod_consts[39],mod_consts[66]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1030;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_constraints);
        tmp_args_element_value_1 = par_constraints;
        frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame.f_lineno = 1031;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1031;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1031;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 1031;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1031;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 1031;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 1031;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 1031;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[167];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 1031;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_11;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_con;
            var_con = tmp_assign_source_12;
            Py_INCREF(var_con);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_con);
        tmp_isinstance_inst_2 = var_con;
        CHECK_OBJECT(var_new_constraint_types);
        tmp_isinstance_cls_2 = var_new_constraint_types;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1032;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1032;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_2 = var_i;
        CHECK_OBJECT(var_con);
        tmp_args_element_value_3 = var_con;
        frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame.f_lineno = 1033;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (par_constraints == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1033;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = par_constraints;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 1031;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_arg_2;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_constraints);
        tmp_list_arg_2 = par_constraints;
        tmp_args_element_value_4 = MAKE_LIST(tstate, tmp_list_arg_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame.f_lineno = 1036;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 1036;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 1036;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 1036;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 1036;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[167];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 1036;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_18;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_con;
            var_con = tmp_assign_source_19;
            Py_INCREF(var_con);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_con);
        tmp_isinstance_inst_3 = var_con;
        CHECK_OBJECT(var_new_constraint_types);
        tmp_isinstance_cls_3 = var_new_constraint_types;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1037;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_con);
        tmp_args_element_value_5 = var_con;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1038;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_6 = par_x0;
        frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_old_constraints;
            var_old_constraints = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_old_constraints);
        tmp_expression_value_2 = var_old_constraints;
        tmp_subscript_value_2 = mod_consts[170];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        if (par_constraints == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1039;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_2 = par_constraints;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        if (par_constraints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1040;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_3 = par_constraints;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[177]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_old_constraints);
        tmp_expression_value_4 = var_old_constraints;
        tmp_subscript_value_3 = mod_consts[178];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 1040;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame.f_lineno = 1040;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 1036;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_end_3:;
    if (par_constraints == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 1042;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_constraints;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6651c7f9a35d4a6b65f3a40faab69470, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6651c7f9a35d4a6b65f3a40faab69470->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6651c7f9a35d4a6b65f3a40faab69470, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6651c7f9a35d4a6b65f3a40faab69470,
        type_description_1,
        par_constraints,
        par_x0,
        par_meth,
        var_all_constraint_types,
        var_new_constraint_types,
        var_i,
        var_con,
        var_old_constraints
    );


    // Release cached frame if used for exception.
    if (frame_6651c7f9a35d4a6b65f3a40faab69470 == cache_frame_6651c7f9a35d4a6b65f3a40faab69470) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6651c7f9a35d4a6b65f3a40faab69470);
        cache_frame_6651c7f9a35d4a6b65f3a40faab69470 = NULL;
    }

    assertFrameObject(frame_6651c7f9a35d4a6b65f3a40faab69470);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    CHECK_OBJECT(var_all_constraint_types);
    Py_DECREF(var_all_constraint_types);
    var_all_constraint_types = NULL;
    CHECK_OBJECT(var_new_constraint_types);
    Py_DECREF(var_new_constraint_types);
    var_new_constraint_types = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_con);
    var_con = NULL;
    Py_XDECREF(var_old_constraints);
    var_old_constraints = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(var_all_constraint_types);
    var_all_constraint_types = NULL;
    Py_XDECREF(var_new_constraint_types);
    var_new_constraint_types = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_con);
    var_con = NULL;
    Py_XDECREF(var_old_constraints);
    var_old_constraints = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    PyObject *par_bounds = python_pars[1];
    PyObject *par_method = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_constraints = python_pars[4];
    PyObject *var_success = NULL;
    PyObject *var_message = NULL;
    PyObject *var_x0 = NULL;
    PyObject *var_maxcv = NULL;
    PyObject *var_c = NULL;
    PyObject *var_pc = NULL;
    PyObject *var_violation = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a3dfdd630f0815cddc52a3b4b1b85b6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        assert(var_success == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_success = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[180];
        assert(var_message == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_message = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f)) {
        Py_XDECREF(cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f = MAKE_FUNCTION_FRAME(tstate, codeobj_a3dfdd630f0815cddc52a3b4b1b85b6f, module_scipy$optimize$_minimize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_type_description == NULL);
    frame_a3dfdd630f0815cddc52a3b4b1b85b6f = cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a3dfdd630f0815cddc52a3b4b1b85b6f);
    assert(Py_REFCNT(frame_a3dfdd630f0815cddc52a3b4b1b85b6f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_bounds);
        tmp_expression_value_1 = par_bounds;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x0 == NULL);
        var_x0 = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_constraints);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_constraints);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[181];
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_4;
            Py_INCREF(var_message);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraints);
        tmp_args_element_value_1 = par_constraints;
        CHECK_OBJECT(var_x0);
        tmp_args_element_value_2 = var_x0;
        tmp_args_element_value_3 = mod_consts[66];
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1068;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_constraints;
            assert(old != NULL);
            par_constraints = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[170];
        assert(var_maxcv == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_maxcv = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_constraints);
        tmp_iter_arg_1 = par_constraints;
        tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooo";
                exception_lineno = 1071;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_9;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_value_4 = var_c;
        if (var_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = var_x0;
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1072;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pc;
            var_pc = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_pc);
        tmp_expression_value_2 = var_pc;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[183]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        if (var_x0 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1073;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = var_x0;
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1073;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_violation;
            var_violation = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        int tmp_truth_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_violation);
        tmp_args_element_value_7 = var_violation;
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1074;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[184], tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 1074;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[185]);
        assert(tmp_called_value_4 != NULL);
        if (var_maxcv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[186]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1075;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = var_maxcv;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_violation);
        tmp_args_element_value_10 = var_violation;
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1075;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[185], tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1075;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_maxcv;
            var_maxcv = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        {
            PyObject *old = var_success;
            var_success = tmp_assign_source_13;
            Py_INCREF(var_success);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[187];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_maxcv);
            tmp_format_value_1 = var_maxcv;
            tmp_format_spec_1 = mod_consts[128];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1079;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[188];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_14 = PyUnicode_Join(mod_consts[128], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 1071;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1081;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = var_x0;
        CHECK_OBJECT(par_fun);
        tmp_dircall_arg1_1 = par_fun;
        if (var_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_x0;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_kw_call_value_1_1 = impl___main__$$$function__4_complex_call_helper_pos_star_list(tstate, dir_call_args);
        }
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_success == NULL) {
            Py_DECREF(tmp_kw_call_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_2_1 = var_success;
        if (var_message == NULL) {
            Py_DECREF(tmp_kw_call_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[122]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_3_1 = var_message;
        tmp_kw_call_value_4_1 = mod_consts[4];
        tmp_kw_call_value_5_1 = mod_consts[170];
        tmp_kw_call_value_6_1 = mod_consts[170];
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame.f_lineno = 1081;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[190]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1081;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3dfdd630f0815cddc52a3b4b1b85b6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3dfdd630f0815cddc52a3b4b1b85b6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3dfdd630f0815cddc52a3b4b1b85b6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3dfdd630f0815cddc52a3b4b1b85b6f,
        type_description_1,
        par_fun,
        par_bounds,
        par_method,
        par_args,
        par_constraints,
        var_success,
        var_message,
        var_x0,
        var_maxcv,
        var_c,
        var_pc,
        var_violation
    );


    // Release cached frame if used for exception.
    if (frame_a3dfdd630f0815cddc52a3b4b1b85b6f == cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f);
        cache_frame_a3dfdd630f0815cddc52a3b4b1b85b6f = NULL;
    }

    assertFrameObject(frame_a3dfdd630f0815cddc52a3b4b1b85b6f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_constraints);
    Py_DECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_x0);
    var_x0 = NULL;
    Py_XDECREF(var_maxcv);
    var_maxcv = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_pc);
    var_pc = NULL;
    Py_XDECREF(var_violation);
    var_violation = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_constraints);
    par_constraints = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_x0);
    var_x0 = NULL;
    Py_XDECREF(var_maxcv);
    var_maxcv = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_pc);
    var_pc = NULL;
    Py_XDECREF(var_violation);
    var_violation = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__1_minimize(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__1_minimize,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d7f07e20016c134623c763bc3187f48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__2_minimize_scalar(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__2_minimize_scalar,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_884cb8cb387ab5341e848f8f62230de9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__3__remove_from_bounds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__3__remove_from_bounds,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_043e8035794c48812a30ae0167e5d42a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__4__remove_from_func,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f859d483a0a4383124d84f82fa0c901f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[149],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_cce593bc240866074ab44dd2f9ef20ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__5__add_to_array() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__5__add_to_array,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61d89468a62fc7957563777fc18f99c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[160],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__6__validate_bounds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__6__validate_bounds,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b8844d296aedd593fad1d9f3575e4da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[164],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__7_standardize_bounds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__7_standardize_bounds,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_49db943fdb94768a8d756accf8f2ace8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[171],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__8_standardize_constraints() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__8_standardize_constraints,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6651c7f9a35d4a6b65f3a40faab69470,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[179],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a3dfdd630f0815cddc52a3b4b1b85b6f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_minimize,
        mod_consts[191],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_scipy$optimize$_minimize[] = {
    impl_scipy$optimize$_minimize$$$function__4__remove_from_func$$$function__1_fun_out,
    impl_scipy$optimize$_minimize$$$function__1_minimize,
    impl_scipy$optimize$_minimize$$$function__2_minimize_scalar,
    impl_scipy$optimize$_minimize$$$function__3__remove_from_bounds,
    impl_scipy$optimize$_minimize$$$function__4__remove_from_func,
    impl_scipy$optimize$_minimize$$$function__5__add_to_array,
    impl_scipy$optimize$_minimize$$$function__6__validate_bounds,
    impl_scipy$optimize$_minimize$$$function__7_standardize_bounds,
    impl_scipy$optimize$_minimize$$$function__8_standardize_constraints,
    impl_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_scipy$optimize$_minimize;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_scipy$optimize$_minimize) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_scipy$optimize$_minimize[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_scipy$optimize$_minimize,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$optimize$_minimize(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.optimize._minimize");

    // Store the module for future use.
    module_scipy$optimize$_minimize = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._minimize: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy.optimize._minimize: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$optimize$_minimize\n");

    moduledict_scipy$optimize$_minimize = MODULE_DICT(module_scipy$optimize$_minimize);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_minimize,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_minimize,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[128]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_minimize,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_minimize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_minimize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_minimize);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$optimize$_minimize);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_e683d7e16a6e5ad9385f1f7b2b734af6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_2);
    }
    frame_e683d7e16a6e5ad9385f1f7b2b734af6 = MAKE_MODULE_FRAME(codeobj_e683d7e16a6e5ad9385f1f7b2b734af6, module_scipy$optimize$_minimize);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e683d7e16a6e5ad9385f1f7b2b734af6);
    assert(Py_REFCNT(frame_e683d7e16a6e5ad9385f1f7b2b734af6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[196], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[197], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST2(mod_consts[199],mod_consts[200]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[202];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[203];
        tmp_level_value_1 = mod_consts[170];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[18],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[204];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[170];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[205];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[206];
        tmp_level_value_3 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 18;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[86],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[86]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[88],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[88]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[90],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[90]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[92],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[92]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[94],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[94]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[136],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[136]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[138],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[138]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[140],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[140]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[35],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[35]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[189],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[189]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[85],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[85]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[135],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[135]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_19);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[207];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[208];
        tmp_level_value_4 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 23;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[104],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[209];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[210];
        tmp_level_value_5 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 24;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[106],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[211];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[212];
        tmp_level_value_6 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 25;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[108],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[213];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[214];
        tmp_level_value_7 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 26;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[110],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[110]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[215];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[216];
        tmp_level_value_8 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 27;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[102],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[217];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[218];
        tmp_level_value_9 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 30;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[96],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[219];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[220];
        tmp_level_value_10 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 31;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[97],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[221];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[222];
        tmp_level_value_11 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 32;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[99],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[223];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[224];
        tmp_level_value_12 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 33;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[101],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[225];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[226];
        tmp_level_value_13 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 34;
        tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_23 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[166],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[166]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_24 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[169],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[169]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_25 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[175],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[175]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_26 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[176],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[176]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_27 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[172],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[172]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_28 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[173],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[173]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_29 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[145],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[145]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_30 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[182],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[182]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_37);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[227];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_scipy$optimize$_minimize;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[228];
        tmp_level_value_14 = mod_consts[4];
        frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame.f_lineno = 38;
        tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_scipy$optimize$_minimize,
                mod_consts[37],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e683d7e16a6e5ad9385f1f7b2b734af6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e683d7e16a6e5ad9385f1f7b2b734af6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e683d7e16a6e5ad9385f1f7b2b734af6, exception_lineno);
    }



    assertFrameObject(frame_e683d7e16a6e5ad9385f1f7b2b734af6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = LIST_COPY(mod_consts[229]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_LIST11(mod_consts[231]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_LIST3(mod_consts[124],mod_consts[125],mod_consts[139]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[234];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_42 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__1_minimize(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[235];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_43 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__2_minimize_scalar(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__3__remove_from_bounds();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[236];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_45 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__4__remove_from_func(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__5__add_to_array();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__6__validate_bounds();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__7_standardize_bounds();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__8_standardize_constraints();

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[237];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_50 = MAKE_FUNCTION_scipy$optimize$_minimize$$$function__9__optimize_result_for_equal_bounds(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_50);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.optimize._minimize", false);

    Py_INCREF(module_scipy$optimize$_minimize);
    return module_scipy$optimize$_minimize;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_minimize, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$optimize$_minimize", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
