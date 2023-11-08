/* Generated code for Python module 'pandas.core.window.expanding'
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

/* The "module_pandas$core$window$expanding" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$window$expanding;
PyDictObject *moduledict_pandas$core$window$expanding;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[191];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[191];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.window.expanding"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 191; i++) {
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
void checkModuleConstants_pandas$core$window$expanding(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 191; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_09133c0f352811827f43c45613c3b7a8;
static PyCodeObject *codeobj_377f7bf24f3c3a68625d8c957c8a6498;
static PyCodeObject *codeobj_7e67b7f72890e0a1e2dc2b7653dc5352;
static PyCodeObject *codeobj_3f8fe8abeba231772738da7d39b8c0e2;
static PyCodeObject *codeobj_cf9c373fd76eb0f62eaab4e506dbcc0b;
static PyCodeObject *codeobj_58b53f9c7a0b75b71bf43ef0fb797a2a;
static PyCodeObject *codeobj_723d3cd547a05fc2c7838bddb23ba46e;
static PyCodeObject *codeobj_30ad0a2adb5455d78336ad0f1aeaa6be;
static PyCodeObject *codeobj_e6046ea91d509a7ae5fd8bfc712ecfd9;
static PyCodeObject *codeobj_0d9bb01b927bfa484624c4ae274b269c;
static PyCodeObject *codeobj_3ee031201a4fc8dd6eb54563aa048063;
static PyCodeObject *codeobj_70c593e47d897d3d13526913eaea9c63;
static PyCodeObject *codeobj_55071435d43ddabb49168ff302318e2e;
static PyCodeObject *codeobj_47af79212ececd7b13a6f0562a93bca2;
static PyCodeObject *codeobj_504835e3d66fd071141ece6e32904272;
static PyCodeObject *codeobj_9af2fae35b088c517659b7812f5f05da;
static PyCodeObject *codeobj_d0eb5b5922eaea2f3c7795c16d8aa720;
static PyCodeObject *codeobj_36d6e9dd46a3904f7859c730b11acc14;
static PyCodeObject *codeobj_9e3ec861bd1447bc3ff5ce2329b08384;
static PyCodeObject *codeobj_da553a3e18d4ea0913021136f339f0ea;
static PyCodeObject *codeobj_2b1f080e37753958d1515f0e3c8bd297;
static PyCodeObject *codeobj_9aadf532ab30b73073affa357c7155b6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[176]); CHECK_OBJECT(module_filename_obj);
    codeobj_09133c0f352811827f43c45613c3b7a8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[177], mod_consts[177], NULL, NULL, 0, 0, 0);
    codeobj_377f7bf24f3c3a68625d8c957c8a6498 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[79], mod_consts[79], mod_consts[178], NULL, 0, 0, 0);
    codeobj_7e67b7f72890e0a1e2dc2b7653dc5352 = MAKE_CODE_OBJECT(module_filename_obj, 667, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], mod_consts[178], NULL, 0, 0, 0);
    codeobj_3f8fe8abeba231772738da7d39b8c0e2 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[179], mod_consts[178], 7, 0, 0);
    codeobj_cf9c373fd76eb0f62eaab4e506dbcc0b = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[94], mod_consts[94], mod_consts[180], NULL, 1, 0, 0);
    codeobj_58b53f9c7a0b75b71bf43ef0fb797a2a = MAKE_CODE_OBJECT(module_filename_obj, 674, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[94], mod_consts[94], mod_consts[181], NULL, 1, 0, 0);
    codeobj_723d3cd547a05fc2c7838bddb23ba46e = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[182], mod_consts[178], 2, 0, 0);
    codeobj_30ad0a2adb5455d78336ad0f1aeaa6be = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[7], mod_consts[7], mod_consts[183], mod_consts[178], 7, 0, 0);
    codeobj_e6046ea91d509a7ae5fd8bfc712ecfd9 = MAKE_CODE_OBJECT(module_filename_obj, 657, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[184], mod_consts[178], 4, 0, 0);
    codeobj_0d9bb01b927bfa484624c4ae274b269c = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[185], mod_consts[178], 1, 0, 0);
    codeobj_3ee031201a4fc8dd6eb54563aa048063 = MAKE_CODE_OBJECT(module_filename_obj, 592, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[184], mod_consts[178], 4, 0, 0);
    codeobj_70c593e47d897d3d13526913eaea9c63 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[186], mod_consts[178], 1, 0, 0);
    codeobj_55071435d43ddabb49168ff302318e2e = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[14], mod_consts[14], mod_consts[187], mod_consts[178], 1, 2, 0);
    codeobj_47af79212ececd7b13a6f0562a93bca2 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[187], mod_consts[178], 1, 2, 0);
    codeobj_504835e3d66fd071141ece6e32904272 = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[17], mod_consts[17], mod_consts[188], mod_consts[178], 3, 0, 0);
    codeobj_9af2fae35b088c517659b7812f5f05da = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[187], mod_consts[178], 1, 2, 0);
    codeobj_d0eb5b5922eaea2f3c7795c16d8aa720 = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[24], mod_consts[24], mod_consts[189], mod_consts[178], 3, 0, 0);
    codeobj_36d6e9dd46a3904f7859c730b11acc14 = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[21], mod_consts[21], mod_consts[190], mod_consts[178], 2, 0, 0);
    codeobj_9e3ec861bd1447bc3ff5ce2329b08384 = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[186], mod_consts[178], 1, 0, 0);
    codeobj_da553a3e18d4ea0913021136f339f0ea = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[190], mod_consts[178], 2, 0, 0);
    codeobj_2b1f080e37753958d1515f0e3c8bd297 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[11], mod_consts[11], mod_consts[187], mod_consts[178], 1, 2, 0);
    codeobj_9aadf532ab30b73073affa357c7155b6 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[20], mod_consts[20], mod_consts[190], mod_consts[178], 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$core$window$expanding$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_min_periods = python_pars[2];
    PyObject *par_center = python_pars[3];
    PyObject *par_axis = python_pars[4];
    PyObject *par_method = python_pars[5];
    PyObject *par_selection = python_pars[6];
    struct Nuitka_FrameObject *frame_3f8fe8abeba231772738da7d39b8c0e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f8fe8abeba231772738da7d39b8c0e2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f8fe8abeba231772738da7d39b8c0e2)) {
        Py_XDECREF(cache_frame_3f8fe8abeba231772738da7d39b8c0e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f8fe8abeba231772738da7d39b8c0e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f8fe8abeba231772738da7d39b8c0e2 = MAKE_FUNCTION_FRAME(tstate, codeobj_3f8fe8abeba231772738da7d39b8c0e2, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f8fe8abeba231772738da7d39b8c0e2->m_type_description == NULL);
    frame_3f8fe8abeba231772738da7d39b8c0e2 = cache_frame_3f8fe8abeba231772738da7d39b8c0e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3f8fe8abeba231772738da7d39b8c0e2);
    assert(Py_REFCNT(frame_3f8fe8abeba231772738da7d39b8c0e2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_kw_call_value_0_1 = par_obj;
        CHECK_OBJECT(par_min_periods);
        tmp_kw_call_value_1_1 = par_min_periods;
        CHECK_OBJECT(par_center);
        tmp_kw_call_value_2_1 = par_center;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_value_3_1 = par_axis;
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_4_1 = par_method;
        CHECK_OBJECT(par_selection);
        tmp_kw_call_value_5_1 = par_selection;
        frame_3f8fe8abeba231772738da7d39b8c0e2->m_frame.f_lineno = 106;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f8fe8abeba231772738da7d39b8c0e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f8fe8abeba231772738da7d39b8c0e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f8fe8abeba231772738da7d39b8c0e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f8fe8abeba231772738da7d39b8c0e2,
        type_description_1,
        par_self,
        par_obj,
        par_min_periods,
        par_center,
        par_axis,
        par_method,
        par_selection,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3f8fe8abeba231772738da7d39b8c0e2 == cache_frame_3f8fe8abeba231772738da7d39b8c0e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f8fe8abeba231772738da7d39b8c0e2);
        cache_frame_3f8fe8abeba231772738da7d39b8c0e2 = NULL;
    }

    assertFrameObject(frame_3f8fe8abeba231772738da7d39b8c0e2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_center);
    Py_DECREF(par_center);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_center);
    Py_DECREF(par_center);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__2__get_window_indexer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cf9c373fd76eb0f62eaab4e506dbcc0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b)) {
        Py_XDECREF(cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b = MAKE_FUNCTION_FRAME(tstate, codeobj_cf9c373fd76eb0f62eaab4e506dbcc0b, module_pandas$core$window$expanding, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b->m_type_description == NULL);
    frame_cf9c373fd76eb0f62eaab4e506dbcc0b = cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf9c373fd76eb0f62eaab4e506dbcc0b);
    assert(Py_REFCNT(frame_cf9c373fd76eb0f62eaab4e506dbcc0b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cf9c373fd76eb0f62eaab4e506dbcc0b->m_frame.f_lineno = 119;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf9c373fd76eb0f62eaab4e506dbcc0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf9c373fd76eb0f62eaab4e506dbcc0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf9c373fd76eb0f62eaab4e506dbcc0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf9c373fd76eb0f62eaab4e506dbcc0b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cf9c373fd76eb0f62eaab4e506dbcc0b == cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b);
        cache_frame_cf9c373fd76eb0f62eaab4e506dbcc0b = NULL;
    }

    assertFrameObject(frame_cf9c373fd76eb0f62eaab4e506dbcc0b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__3_aggregate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_723d3cd547a05fc2c7838bddb23ba46e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_723d3cd547a05fc2c7838bddb23ba46e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_723d3cd547a05fc2c7838bddb23ba46e)) {
        Py_XDECREF(cache_frame_723d3cd547a05fc2c7838bddb23ba46e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_723d3cd547a05fc2c7838bddb23ba46e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_723d3cd547a05fc2c7838bddb23ba46e = MAKE_FUNCTION_FRAME(tstate, codeobj_723d3cd547a05fc2c7838bddb23ba46e, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_723d3cd547a05fc2c7838bddb23ba46e->m_type_description == NULL);
    frame_723d3cd547a05fc2c7838bddb23ba46e = cache_frame_723d3cd547a05fc2c7838bddb23ba46e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_723d3cd547a05fc2c7838bddb23ba46e);
    assert(Py_REFCNT(frame_723d3cd547a05fc2c7838bddb23ba46e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_723d3cd547a05fc2c7838bddb23ba46e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_723d3cd547a05fc2c7838bddb23ba46e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_723d3cd547a05fc2c7838bddb23ba46e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_723d3cd547a05fc2c7838bddb23ba46e,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_723d3cd547a05fc2c7838bddb23ba46e == cache_frame_723d3cd547a05fc2c7838bddb23ba46e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_723d3cd547a05fc2c7838bddb23ba46e);
        cache_frame_723d3cd547a05fc2c7838bddb23ba46e = NULL;
    }

    assertFrameObject(frame_723d3cd547a05fc2c7838bddb23ba46e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
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


static PyObject *impl_pandas$core$window$expanding$$$function__4_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0d9bb01b927bfa484624c4ae274b269c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d9bb01b927bfa484624c4ae274b269c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d9bb01b927bfa484624c4ae274b269c)) {
        Py_XDECREF(cache_frame_0d9bb01b927bfa484624c4ae274b269c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d9bb01b927bfa484624c4ae274b269c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d9bb01b927bfa484624c4ae274b269c = MAKE_FUNCTION_FRAME(tstate, codeobj_0d9bb01b927bfa484624c4ae274b269c, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d9bb01b927bfa484624c4ae274b269c->m_type_description == NULL);
    frame_0d9bb01b927bfa484624c4ae274b269c = cache_frame_0d9bb01b927bfa484624c4ae274b269c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d9bb01b927bfa484624c4ae274b269c);
    assert(Py_REFCNT(frame_0d9bb01b927bfa484624c4ae274b269c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 168;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0d9bb01b927bfa484624c4ae274b269c->m_frame.f_lineno = 168;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d9bb01b927bfa484624c4ae274b269c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d9bb01b927bfa484624c4ae274b269c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d9bb01b927bfa484624c4ae274b269c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d9bb01b927bfa484624c4ae274b269c,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d9bb01b927bfa484624c4ae274b269c == cache_frame_0d9bb01b927bfa484624c4ae274b269c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d9bb01b927bfa484624c4ae274b269c);
        cache_frame_0d9bb01b927bfa484624c4ae274b269c = NULL;
    }

    assertFrameObject(frame_0d9bb01b927bfa484624c4ae274b269c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__5_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_raw = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_30ad0a2adb5455d78336ad0f1aeaa6be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be)) {
        Py_XDECREF(cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be = MAKE_FUNCTION_FRAME(tstate, codeobj_30ad0a2adb5455d78336ad0f1aeaa6be, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be->m_type_description == NULL);
    frame_30ad0a2adb5455d78336ad0f1aeaa6be = cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30ad0a2adb5455d78336ad0f1aeaa6be);
    assert(Py_REFCNT(frame_30ad0a2adb5455d78336ad0f1aeaa6be) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_kw_call_arg_value_0_1 = par_func;
        CHECK_OBJECT(par_raw);
        tmp_kw_call_dict_value_0_1 = par_raw;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_dict_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_dict_value_2_1 = par_engine_kwargs;
        CHECK_OBJECT(par_args);
        tmp_kw_call_dict_value_3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_kw_call_dict_value_4_1 = par_kwargs;
        frame_30ad0a2adb5455d78336ad0f1aeaa6be->m_frame.f_lineno = 191;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30ad0a2adb5455d78336ad0f1aeaa6be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30ad0a2adb5455d78336ad0f1aeaa6be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30ad0a2adb5455d78336ad0f1aeaa6be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30ad0a2adb5455d78336ad0f1aeaa6be,
        type_description_1,
        par_self,
        par_func,
        par_raw,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_30ad0a2adb5455d78336ad0f1aeaa6be == cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be);
        cache_frame_30ad0a2adb5455d78336ad0f1aeaa6be = NULL;
    }

    assertFrameObject(frame_30ad0a2adb5455d78336ad0f1aeaa6be);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
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


static PyObject *impl_pandas$core$window$expanding$$$function__6_sum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_engine = python_pars[1];
    PyObject *par_engine_kwargs = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_2b1f080e37753958d1515f0e3c8bd297;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2b1f080e37753958d1515f0e3c8bd297 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b1f080e37753958d1515f0e3c8bd297)) {
        Py_XDECREF(cache_frame_2b1f080e37753958d1515f0e3c8bd297);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b1f080e37753958d1515f0e3c8bd297 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b1f080e37753958d1515f0e3c8bd297 = MAKE_FUNCTION_FRAME(tstate, codeobj_2b1f080e37753958d1515f0e3c8bd297, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b1f080e37753958d1515f0e3c8bd297->m_type_description == NULL);
    frame_2b1f080e37753958d1515f0e3c8bd297 = cache_frame_2b1f080e37753958d1515f0e3c8bd297;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2b1f080e37753958d1515f0e3c8bd297);
    assert(Py_REFCNT(frame_2b1f080e37753958d1515f0e3c8bd297) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[11];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_2b1f080e37753958d1515f0e3c8bd297->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 224;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_engine);
        tmp_dict_value_1 = par_engine;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_engine_kwargs);
        tmp_dict_value_1 = par_engine_kwargs;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b1f080e37753958d1515f0e3c8bd297, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b1f080e37753958d1515f0e3c8bd297->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b1f080e37753958d1515f0e3c8bd297, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b1f080e37753958d1515f0e3c8bd297,
        type_description_1,
        par_self,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2b1f080e37753958d1515f0e3c8bd297 == cache_frame_2b1f080e37753958d1515f0e3c8bd297) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b1f080e37753958d1515f0e3c8bd297);
        cache_frame_2b1f080e37753958d1515f0e3c8bd297 = NULL;
    }

    assertFrameObject(frame_2b1f080e37753958d1515f0e3c8bd297);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
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


static PyObject *impl_pandas$core$window$expanding$$$function__7_max(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_engine = python_pars[1];
    PyObject *par_engine_kwargs = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_55071435d43ddabb49168ff302318e2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_55071435d43ddabb49168ff302318e2e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55071435d43ddabb49168ff302318e2e)) {
        Py_XDECREF(cache_frame_55071435d43ddabb49168ff302318e2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55071435d43ddabb49168ff302318e2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55071435d43ddabb49168ff302318e2e = MAKE_FUNCTION_FRAME(tstate, codeobj_55071435d43ddabb49168ff302318e2e, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55071435d43ddabb49168ff302318e2e->m_type_description == NULL);
    frame_55071435d43ddabb49168ff302318e2e = cache_frame_55071435d43ddabb49168ff302318e2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55071435d43ddabb49168ff302318e2e);
    assert(Py_REFCNT(frame_55071435d43ddabb49168ff302318e2e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[14];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_55071435d43ddabb49168ff302318e2e->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_engine);
        tmp_dict_value_1 = par_engine;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_engine_kwargs);
        tmp_dict_value_1 = par_engine_kwargs;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55071435d43ddabb49168ff302318e2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55071435d43ddabb49168ff302318e2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55071435d43ddabb49168ff302318e2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55071435d43ddabb49168ff302318e2e,
        type_description_1,
        par_self,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_55071435d43ddabb49168ff302318e2e == cache_frame_55071435d43ddabb49168ff302318e2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55071435d43ddabb49168ff302318e2e);
        cache_frame_55071435d43ddabb49168ff302318e2e = NULL;
    }

    assertFrameObject(frame_55071435d43ddabb49168ff302318e2e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
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


static PyObject *impl_pandas$core$window$expanding$$$function__8_min(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_engine = python_pars[1];
    PyObject *par_engine_kwargs = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_9af2fae35b088c517659b7812f5f05da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9af2fae35b088c517659b7812f5f05da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9af2fae35b088c517659b7812f5f05da)) {
        Py_XDECREF(cache_frame_9af2fae35b088c517659b7812f5f05da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9af2fae35b088c517659b7812f5f05da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9af2fae35b088c517659b7812f5f05da = MAKE_FUNCTION_FRAME(tstate, codeobj_9af2fae35b088c517659b7812f5f05da, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9af2fae35b088c517659b7812f5f05da->m_type_description == NULL);
    frame_9af2fae35b088c517659b7812f5f05da = cache_frame_9af2fae35b088c517659b7812f5f05da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9af2fae35b088c517659b7812f5f05da);
    assert(Py_REFCNT(frame_9af2fae35b088c517659b7812f5f05da) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[15];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_9af2fae35b088c517659b7812f5f05da->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 276;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_engine);
        tmp_dict_value_1 = par_engine;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_engine_kwargs);
        tmp_dict_value_1 = par_engine_kwargs;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9af2fae35b088c517659b7812f5f05da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9af2fae35b088c517659b7812f5f05da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9af2fae35b088c517659b7812f5f05da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9af2fae35b088c517659b7812f5f05da,
        type_description_1,
        par_self,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9af2fae35b088c517659b7812f5f05da == cache_frame_9af2fae35b088c517659b7812f5f05da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9af2fae35b088c517659b7812f5f05da);
        cache_frame_9af2fae35b088c517659b7812f5f05da = NULL;
    }

    assertFrameObject(frame_9af2fae35b088c517659b7812f5f05da);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
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


static PyObject *impl_pandas$core$window$expanding$$$function__9_mean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_engine = python_pars[1];
    PyObject *par_engine_kwargs = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_47af79212ececd7b13a6f0562a93bca2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_47af79212ececd7b13a6f0562a93bca2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47af79212ececd7b13a6f0562a93bca2)) {
        Py_XDECREF(cache_frame_47af79212ececd7b13a6f0562a93bca2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47af79212ececd7b13a6f0562a93bca2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47af79212ececd7b13a6f0562a93bca2 = MAKE_FUNCTION_FRAME(tstate, codeobj_47af79212ececd7b13a6f0562a93bca2, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47af79212ececd7b13a6f0562a93bca2->m_type_description == NULL);
    frame_47af79212ececd7b13a6f0562a93bca2 = cache_frame_47af79212ececd7b13a6f0562a93bca2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_47af79212ececd7b13a6f0562a93bca2);
    assert(Py_REFCNT(frame_47af79212ececd7b13a6f0562a93bca2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[16];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_47af79212ececd7b13a6f0562a93bca2->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 302;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_engine);
        tmp_dict_value_1 = par_engine;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_engine_kwargs);
        tmp_dict_value_1 = par_engine_kwargs;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47af79212ececd7b13a6f0562a93bca2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47af79212ececd7b13a6f0562a93bca2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47af79212ececd7b13a6f0562a93bca2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47af79212ececd7b13a6f0562a93bca2,
        type_description_1,
        par_self,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_47af79212ececd7b13a6f0562a93bca2 == cache_frame_47af79212ececd7b13a6f0562a93bca2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47af79212ececd7b13a6f0562a93bca2);
        cache_frame_47af79212ececd7b13a6f0562a93bca2 = NULL;
    }

    assertFrameObject(frame_47af79212ececd7b13a6f0562a93bca2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
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


static PyObject *impl_pandas$core$window$expanding$$$function__10_median(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_engine = python_pars[1];
    PyObject *par_engine_kwargs = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_504835e3d66fd071141ece6e32904272;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_504835e3d66fd071141ece6e32904272 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_504835e3d66fd071141ece6e32904272)) {
        Py_XDECREF(cache_frame_504835e3d66fd071141ece6e32904272);

#if _DEBUG_REFCOUNTS
        if (cache_frame_504835e3d66fd071141ece6e32904272 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_504835e3d66fd071141ece6e32904272 = MAKE_FUNCTION_FRAME(tstate, codeobj_504835e3d66fd071141ece6e32904272, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_504835e3d66fd071141ece6e32904272->m_type_description == NULL);
    frame_504835e3d66fd071141ece6e32904272 = cache_frame_504835e3d66fd071141ece6e32904272;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_504835e3d66fd071141ece6e32904272);
    assert(Py_REFCNT(frame_504835e3d66fd071141ece6e32904272) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_engine);
        tmp_dict_value_1 = par_engine;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_engine_kwargs);
        tmp_dict_value_1 = par_engine_kwargs;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_504835e3d66fd071141ece6e32904272, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_504835e3d66fd071141ece6e32904272->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_504835e3d66fd071141ece6e32904272, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_504835e3d66fd071141ece6e32904272,
        type_description_1,
        par_self,
        par_engine,
        par_engine_kwargs,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_504835e3d66fd071141ece6e32904272 == cache_frame_504835e3d66fd071141ece6e32904272) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_504835e3d66fd071141ece6e32904272);
        cache_frame_504835e3d66fd071141ece6e32904272 = NULL;
    }

    assertFrameObject(frame_504835e3d66fd071141ece6e32904272);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__11_std(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_da553a3e18d4ea0913021136f339f0ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_da553a3e18d4ea0913021136f339f0ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da553a3e18d4ea0913021136f339f0ea)) {
        Py_XDECREF(cache_frame_da553a3e18d4ea0913021136f339f0ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da553a3e18d4ea0913021136f339f0ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da553a3e18d4ea0913021136f339f0ea = MAKE_FUNCTION_FRAME(tstate, codeobj_da553a3e18d4ea0913021136f339f0ea, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da553a3e18d4ea0913021136f339f0ea->m_type_description == NULL);
    frame_da553a3e18d4ea0913021136f339f0ea = cache_frame_da553a3e18d4ea0913021136f339f0ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da553a3e18d4ea0913021136f339f0ea);
    assert(Py_REFCNT(frame_da553a3e18d4ea0913021136f339f0ea) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[18];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_da553a3e18d4ea0913021136f339f0ea->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da553a3e18d4ea0913021136f339f0ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da553a3e18d4ea0913021136f339f0ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da553a3e18d4ea0913021136f339f0ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da553a3e18d4ea0913021136f339f0ea,
        type_description_1,
        par_self,
        par_ddof,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_da553a3e18d4ea0913021136f339f0ea == cache_frame_da553a3e18d4ea0913021136f339f0ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da553a3e18d4ea0913021136f339f0ea);
        cache_frame_da553a3e18d4ea0913021136f339f0ea = NULL;
    }

    assertFrameObject(frame_da553a3e18d4ea0913021136f339f0ea);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
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


static PyObject *impl_pandas$core$window$expanding$$$function__12_var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_9aadf532ab30b73073affa357c7155b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9aadf532ab30b73073affa357c7155b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9aadf532ab30b73073affa357c7155b6)) {
        Py_XDECREF(cache_frame_9aadf532ab30b73073affa357c7155b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9aadf532ab30b73073affa357c7155b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9aadf532ab30b73073affa357c7155b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_9aadf532ab30b73073affa357c7155b6, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9aadf532ab30b73073affa357c7155b6->m_type_description == NULL);
    frame_9aadf532ab30b73073affa357c7155b6 = cache_frame_9aadf532ab30b73073affa357c7155b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9aadf532ab30b73073affa357c7155b6);
    assert(Py_REFCNT(frame_9aadf532ab30b73073affa357c7155b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[20];
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_9aadf532ab30b73073affa357c7155b6->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9aadf532ab30b73073affa357c7155b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9aadf532ab30b73073affa357c7155b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9aadf532ab30b73073affa357c7155b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9aadf532ab30b73073affa357c7155b6,
        type_description_1,
        par_self,
        par_ddof,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9aadf532ab30b73073affa357c7155b6 == cache_frame_9aadf532ab30b73073affa357c7155b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9aadf532ab30b73073affa357c7155b6);
        cache_frame_9aadf532ab30b73073affa357c7155b6 = NULL;
    }

    assertFrameObject(frame_9aadf532ab30b73073affa357c7155b6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
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


static PyObject *impl_pandas$core$window$expanding$$$function__13_sem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_36d6e9dd46a3904f7859c730b11acc14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_36d6e9dd46a3904f7859c730b11acc14 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36d6e9dd46a3904f7859c730b11acc14)) {
        Py_XDECREF(cache_frame_36d6e9dd46a3904f7859c730b11acc14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36d6e9dd46a3904f7859c730b11acc14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36d6e9dd46a3904f7859c730b11acc14 = MAKE_FUNCTION_FRAME(tstate, codeobj_36d6e9dd46a3904f7859c730b11acc14, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36d6e9dd46a3904f7859c730b11acc14->m_type_description == NULL);
    frame_36d6e9dd46a3904f7859c730b11acc14 = cache_frame_36d6e9dd46a3904f7859c730b11acc14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36d6e9dd46a3904f7859c730b11acc14);
    assert(Py_REFCNT(frame_36d6e9dd46a3904f7859c730b11acc14) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36d6e9dd46a3904f7859c730b11acc14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36d6e9dd46a3904f7859c730b11acc14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36d6e9dd46a3904f7859c730b11acc14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36d6e9dd46a3904f7859c730b11acc14,
        type_description_1,
        par_self,
        par_ddof,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_36d6e9dd46a3904f7859c730b11acc14 == cache_frame_36d6e9dd46a3904f7859c730b11acc14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36d6e9dd46a3904f7859c730b11acc14);
        cache_frame_36d6e9dd46a3904f7859c730b11acc14 = NULL;
    }

    assertFrameObject(frame_36d6e9dd46a3904f7859c730b11acc14);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
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


static PyObject *impl_pandas$core$window$expanding$$$function__14_skew(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_9e3ec861bd1447bc3ff5ce2329b08384;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e3ec861bd1447bc3ff5ce2329b08384 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e3ec861bd1447bc3ff5ce2329b08384)) {
        Py_XDECREF(cache_frame_9e3ec861bd1447bc3ff5ce2329b08384);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e3ec861bd1447bc3ff5ce2329b08384 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e3ec861bd1447bc3ff5ce2329b08384 = MAKE_FUNCTION_FRAME(tstate, codeobj_9e3ec861bd1447bc3ff5ce2329b08384, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e3ec861bd1447bc3ff5ce2329b08384->m_type_description == NULL);
    frame_9e3ec861bd1447bc3ff5ce2329b08384 = cache_frame_9e3ec861bd1447bc3ff5ce2329b08384;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9e3ec861bd1447bc3ff5ce2329b08384);
    assert(Py_REFCNT(frame_9e3ec861bd1447bc3ff5ce2329b08384) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 481;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e3ec861bd1447bc3ff5ce2329b08384, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e3ec861bd1447bc3ff5ce2329b08384->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e3ec861bd1447bc3ff5ce2329b08384, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e3ec861bd1447bc3ff5ce2329b08384,
        type_description_1,
        par_self,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9e3ec861bd1447bc3ff5ce2329b08384 == cache_frame_9e3ec861bd1447bc3ff5ce2329b08384) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e3ec861bd1447bc3ff5ce2329b08384);
        cache_frame_9e3ec861bd1447bc3ff5ce2329b08384 = NULL;
    }

    assertFrameObject(frame_9e3ec861bd1447bc3ff5ce2329b08384);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__15_kurt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_70c593e47d897d3d13526913eaea9c63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70c593e47d897d3d13526913eaea9c63 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70c593e47d897d3d13526913eaea9c63)) {
        Py_XDECREF(cache_frame_70c593e47d897d3d13526913eaea9c63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70c593e47d897d3d13526913eaea9c63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70c593e47d897d3d13526913eaea9c63 = MAKE_FUNCTION_FRAME(tstate, codeobj_70c593e47d897d3d13526913eaea9c63, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70c593e47d897d3d13526913eaea9c63->m_type_description == NULL);
    frame_70c593e47d897d3d13526913eaea9c63 = cache_frame_70c593e47d897d3d13526913eaea9c63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_70c593e47d897d3d13526913eaea9c63);
    assert(Py_REFCNT(frame_70c593e47d897d3d13526913eaea9c63) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 521;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70c593e47d897d3d13526913eaea9c63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70c593e47d897d3d13526913eaea9c63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70c593e47d897d3d13526913eaea9c63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70c593e47d897d3d13526913eaea9c63,
        type_description_1,
        par_self,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_70c593e47d897d3d13526913eaea9c63 == cache_frame_70c593e47d897d3d13526913eaea9c63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70c593e47d897d3d13526913eaea9c63);
        cache_frame_70c593e47d897d3d13526913eaea9c63 = NULL;
    }

    assertFrameObject(frame_70c593e47d897d3d13526913eaea9c63);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__16_quantile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_quantile = python_pars[1];
    PyObject *par_interpolation = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_d0eb5b5922eaea2f3c7795c16d8aa720;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720)) {
        Py_XDECREF(cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720 = MAKE_FUNCTION_FRAME(tstate, codeobj_d0eb5b5922eaea2f3c7795c16d8aa720, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720->m_type_description == NULL);
    frame_d0eb5b5922eaea2f3c7795c16d8aa720 = cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0eb5b5922eaea2f3c7795c16d8aa720);
    assert(Py_REFCNT(frame_d0eb5b5922eaea2f3c7795c16d8aa720) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 557;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[24];
        CHECK_OBJECT(par_quantile);
        tmp_dict_value_1 = par_quantile;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        CHECK_OBJECT(par_interpolation);
        tmp_dict_value_1 = par_interpolation;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0eb5b5922eaea2f3c7795c16d8aa720, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0eb5b5922eaea2f3c7795c16d8aa720->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0eb5b5922eaea2f3c7795c16d8aa720, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0eb5b5922eaea2f3c7795c16d8aa720,
        type_description_1,
        par_self,
        par_quantile,
        par_interpolation,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d0eb5b5922eaea2f3c7795c16d8aa720 == cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720);
        cache_frame_d0eb5b5922eaea2f3c7795c16d8aa720 = NULL;
    }

    assertFrameObject(frame_d0eb5b5922eaea2f3c7795c16d8aa720);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_quantile);
    Py_DECREF(par_quantile);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_quantile);
    Py_DECREF(par_quantile);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__17_cov(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_3ee031201a4fc8dd6eb54563aa048063;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3ee031201a4fc8dd6eb54563aa048063 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ee031201a4fc8dd6eb54563aa048063)) {
        Py_XDECREF(cache_frame_3ee031201a4fc8dd6eb54563aa048063);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ee031201a4fc8dd6eb54563aa048063 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ee031201a4fc8dd6eb54563aa048063 = MAKE_FUNCTION_FRAME(tstate, codeobj_3ee031201a4fc8dd6eb54563aa048063, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ee031201a4fc8dd6eb54563aa048063->m_type_description == NULL);
    frame_3ee031201a4fc8dd6eb54563aa048063 = cache_frame_3ee031201a4fc8dd6eb54563aa048063;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3ee031201a4fc8dd6eb54563aa048063);
    assert(Py_REFCNT(frame_3ee031201a4fc8dd6eb54563aa048063) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 599;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[27];
        CHECK_OBJECT(par_other);
        tmp_dict_value_1 = par_other;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_pairwise);
        tmp_dict_value_1 = par_pairwise;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ee031201a4fc8dd6eb54563aa048063, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ee031201a4fc8dd6eb54563aa048063->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ee031201a4fc8dd6eb54563aa048063, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ee031201a4fc8dd6eb54563aa048063,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3ee031201a4fc8dd6eb54563aa048063 == cache_frame_3ee031201a4fc8dd6eb54563aa048063) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ee031201a4fc8dd6eb54563aa048063);
        cache_frame_3ee031201a4fc8dd6eb54563aa048063 = NULL;
    }

    assertFrameObject(frame_3ee031201a4fc8dd6eb54563aa048063);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__18_corr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_e6046ea91d509a7ae5fd8bfc712ecfd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9)) {
        Py_XDECREF(cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6046ea91d509a7ae5fd8bfc712ecfd9, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9->m_type_description == NULL);
    frame_e6046ea91d509a7ae5fd8bfc712ecfd9 = cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6046ea91d509a7ae5fd8bfc712ecfd9);
    assert(Py_REFCNT(frame_e6046ea91d509a7ae5fd8bfc712ecfd9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 664;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[27];
        CHECK_OBJECT(par_other);
        tmp_dict_value_1 = par_other;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_pairwise);
        tmp_dict_value_1 = par_pairwise;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6046ea91d509a7ae5fd8bfc712ecfd9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6046ea91d509a7ae5fd8bfc712ecfd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6046ea91d509a7ae5fd8bfc712ecfd9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6046ea91d509a7ae5fd8bfc712ecfd9,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e6046ea91d509a7ae5fd8bfc712ecfd9 == cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9);
        cache_frame_e6046ea91d509a7ae5fd8bfc712ecfd9 = NULL;
    }

    assertFrameObject(frame_e6046ea91d509a7ae5fd8bfc712ecfd9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__19__get_window_indexer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_window_indexer = NULL;
    struct Nuitka_FrameObject *frame_58b53f9c7a0b75b71bf43ef0fb797a2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a)) {
        Py_XDECREF(cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a = MAKE_FUNCTION_FRAME(tstate, codeobj_58b53f9c7a0b75b71bf43ef0fb797a2a, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a->m_type_description == NULL);
    frame_58b53f9c7a0b75b71bf43ef0fb797a2a = cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_58b53f9c7a0b75b71bf43ef0fb797a2a);
    assert(Py_REFCNT(frame_58b53f9c7a0b75b71bf43ef0fb797a2a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 684;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_58b53f9c7a0b75b71bf43ef0fb797a2a->m_frame.f_lineno = 682;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_window_indexer == NULL);
        var_window_indexer = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_58b53f9c7a0b75b71bf43ef0fb797a2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58b53f9c7a0b75b71bf43ef0fb797a2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58b53f9c7a0b75b71bf43ef0fb797a2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58b53f9c7a0b75b71bf43ef0fb797a2a,
        type_description_1,
        par_self,
        var_window_indexer
    );


    // Release cached frame if used for exception.
    if (frame_58b53f9c7a0b75b71bf43ef0fb797a2a == cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a);
        cache_frame_58b53f9c7a0b75b71bf43ef0fb797a2a = NULL;
    }

    assertFrameObject(frame_58b53f9c7a0b75b71bf43ef0fb797a2a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_window_indexer);
    tmp_return_value = var_window_indexer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window_indexer);
    Py_DECREF(var_window_indexer);
    var_window_indexer = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__10_median,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_504835e3d66fd071141ece6e32904272,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__11_std,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_da553a3e18d4ea0913021136f339f0ea,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__12_var,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_9aadf532ab30b73073affa357c7155b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__13_sem,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_36d6e9dd46a3904f7859c730b11acc14,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__14_skew,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_9e3ec861bd1447bc3ff5ce2329b08384,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__15_kurt,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_70c593e47d897d3d13526913eaea9c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__16_quantile,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_d0eb5b5922eaea2f3c7795c16d8aa720,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__17_cov,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_3ee031201a4fc8dd6eb54563aa048063,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__18_corr,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_e6046ea91d509a7ae5fd8bfc712ecfd9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__19__get_window_indexer,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_58b53f9c7a0b75b71bf43ef0fb797a2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_3f8fe8abeba231772738da7d39b8c0e2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_cf9c373fd76eb0f62eaab4e506dbcc0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__3_aggregate,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_723d3cd547a05fc2c7838bddb23ba46e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__4_count,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_0d9bb01b927bfa484624c4ae274b269c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__5_apply,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_30ad0a2adb5455d78336ad0f1aeaa6be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__6_sum,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_2b1f080e37753958d1515f0e3c8bd297,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__7_max,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_55071435d43ddabb49168ff302318e2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__8_min,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_9af2fae35b088c517659b7812f5f05da,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__9_mean,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_47af79212ececd7b13a6f0562a93bca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
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

function_impl_code functable_pandas$core$window$expanding[] = {
    impl_pandas$core$window$expanding$$$function__1___init__,
    impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
    impl_pandas$core$window$expanding$$$function__3_aggregate,
    impl_pandas$core$window$expanding$$$function__4_count,
    impl_pandas$core$window$expanding$$$function__5_apply,
    impl_pandas$core$window$expanding$$$function__6_sum,
    impl_pandas$core$window$expanding$$$function__7_max,
    impl_pandas$core$window$expanding$$$function__8_min,
    impl_pandas$core$window$expanding$$$function__9_mean,
    impl_pandas$core$window$expanding$$$function__10_median,
    impl_pandas$core$window$expanding$$$function__11_std,
    impl_pandas$core$window$expanding$$$function__12_var,
    impl_pandas$core$window$expanding$$$function__13_sem,
    impl_pandas$core$window$expanding$$$function__14_skew,
    impl_pandas$core$window$expanding$$$function__15_kurt,
    impl_pandas$core$window$expanding$$$function__16_quantile,
    impl_pandas$core$window$expanding$$$function__17_cov,
    impl_pandas$core$window$expanding$$$function__18_corr,
    impl_pandas$core$window$expanding$$$function__19__get_window_indexer,
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

    function_impl_code *current = functable_pandas$core$window$expanding;
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

    if (offset > sizeof(functable_pandas$core$window$expanding) || offset < 0) {
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
        functable_pandas$core$window$expanding[offset],
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
        module_pandas$core$window$expanding,
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
PyObject *modulecode_pandas$core$window$expanding(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.window.expanding");

    // Store the module for future use.
    module_pandas$core$window$expanding = module;

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
        PRINT_STRING("pandas.core.window.expanding: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas.core.window.expanding: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$window$expanding\n");

    moduledict_pandas$core$window$expanding = MODULE_DICT(module_pandas$core$window$expanding);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$window$expanding,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[99]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$window$expanding);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$window$expanding);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_09133c0f352811827f43c45613c3b7a8;
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
    int tmp_res;
    PyObject *locals_pandas$core$window$expanding$$$class__1_Expanding_40 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_377f7bf24f3c3a68625d8c957c8a6498_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667 = NULL;
    struct Nuitka_FrameObject *frame_7e67b7f72890e0a1e2dc2b7653dc5352_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_2);
    }
    frame_09133c0f352811827f43c45613c3b7a8 = MAKE_MODULE_FRAME(codeobj_09133c0f352811827f43c45613c3b7a8, module_pandas$core$window$expanding);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_09133c0f352811827f43c45613c3b7a8);
    assert(Py_REFCNT(frame_09133c0f352811827f43c45613c3b7a8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[41]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[45],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[46],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[46]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[47],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[47]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[48];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[49];
        tmp_level_value_2 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 9;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[50],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[50]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[51],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[51]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[52],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[52]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[53];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[54];
        tmp_level_value_3 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 14;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[55],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[56];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[57];
        tmp_level_value_4 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 15;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[58],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[59];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[60];
        tmp_level_value_5 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 17;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[61],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[61]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[62],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[62]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[63],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[63]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[64],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[64]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[65],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[65]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[66],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[66]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[67],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[67]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[68],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[68]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[69],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[69]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[70],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[70]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_25);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[71];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[72];
        tmp_level_value_6 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 29;
        tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[73],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[73]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_20 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[3],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[3]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_21 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[30],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[30]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_29);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[74];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[75];
        tmp_level_value_7 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 34;
        tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_22 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[76],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[76]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_23 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[77],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[77]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_32);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[44];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[78]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[78]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[79];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 40;
        tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[80]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_8 = mod_consts[82];
        tmp_default_value_1 = mod_consts[83];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[82]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_38;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_39;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$window$expanding$$$class__1_Expanding_40 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_8;
        }
        frame_377f7bf24f3c3a68625d8c957c8a6498_2 = MAKE_CLASS_FRAME(tstate, codeobj_377f7bf24f3c3a68625d8c957c8a6498, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_377f7bf24f3c3a68625d8c957c8a6498_2);
        assert(Py_REFCNT(frame_377f7bf24f3c3a68625d8c957c8a6498_2) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST4(mod_consts[88]);
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[90];
            tmp_annotations_1 = DICT_COPY(mod_consts[91]);
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[93]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_dict_value_2_1;
            PyObject *tmp_kw_call_dict_value_3_1;
            PyObject *tmp_args_element_value_1;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_called_value_3 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 121;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[61]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = mod_consts[5];
            tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_kw_call_arg_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 123;
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[96]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);
                        Py_DECREF(tmp_kw_call_dict_value_0_1);

                        exception_lineno = 131;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 131;
            tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[97]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_kw_call_dict_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);

                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_dict_value_2_1 = mod_consts[98];
            tmp_kw_call_dict_value_3_1 = mod_consts[99];
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 121;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
                tmp_called_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[100]);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_2[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(tmp_closure_2);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[5]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            PyObject *tmp_args_element_value_2;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_called_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 158;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_2 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_called_value_9;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_3;
                PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_4);
                tmp_called_value_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 159;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[103]);

                Py_DECREF(tmp_called_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_4 == NULL)) {
                            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_4 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_4);
                tmp_called_value_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 161;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[104]);

                Py_DECREF(tmp_called_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 3, tmp_tuple_element_4);
                tmp_expression_value_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_subscript_value_3 = mod_consts[105];
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 4, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[106]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 157;
            tmp_called_value_6 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_3[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(tmp_closure_3);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_called_value_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_3 = MAKE_TUPLE_EMPTY(7);
            {
                PyObject *tmp_called_value_12;
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_5);
                tmp_called_value_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_12 == NULL)) {
                            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_12);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 172;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[108]);

                Py_DECREF(tmp_called_value_12);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[70]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_5);
                tmp_called_value_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 174;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[103]);

                Py_DECREF(tmp_called_value_13);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 3, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 4, tmp_tuple_element_5);
                tmp_called_value_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 176;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[104]);

                Py_DECREF(tmp_called_value_14);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 5, tmp_tuple_element_5);
                tmp_expression_value_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_subscript_value_4 = mod_consts[105];
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 6, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_3);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_kwargs_value_3 = DICT_COPY(mod_consts[109]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 170;
            tmp_called_value_10 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_3);
            Py_DECREF(tmp_kwargs_value_3);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[110];
            tmp_annotations_3 = DICT_COPY(mod_consts[111]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_4[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_args_element_value_3 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(tmp_defaults_2, tmp_annotations_3, tmp_closure_4);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_4;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_called_value_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 200;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 201;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_4 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_called_value_18;
                PyObject *tmp_called_value_19;
                PyObject *tmp_called_value_20;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_5;
                PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_6);
                tmp_called_value_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 202;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[108]);

                Py_DECREF(tmp_called_value_17);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 203;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 2, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[69]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 3, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 4, tmp_tuple_element_6);
                tmp_called_value_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 206;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 206;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[103]);

                Py_DECREF(tmp_called_value_18);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 5, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 6, tmp_tuple_element_6);
                tmp_called_value_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_19 == NULL)) {
                            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_19);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 208;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[104]);

                Py_DECREF(tmp_called_value_19);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 7, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 209;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 8, tmp_tuple_element_6);
                tmp_called_value_20 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 210;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 210;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[113]);

                Py_DECREF(tmp_called_value_20);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 9, tmp_tuple_element_6);
                tmp_expression_value_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[65]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_subscript_value_5 = mod_consts[105];
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 10, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_value_4 = DICT_COPY(mod_consts[114]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 200;
            tmp_called_value_15 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_4);
            Py_DECREF(tmp_kwargs_value_4);
            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[115]);
            tmp_annotations_4 = DICT_COPY(mod_consts[116]);

            tmp_closure_5[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_args_element_value_4 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(tmp_kw_defaults_1, tmp_annotations_4, tmp_closure_5);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 200;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_5;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_called_value_22 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 227;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_5 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_23;
                PyObject *tmp_called_value_24;
                PyObject *tmp_called_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_6;
                PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_7);
                tmp_called_value_23 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_23 == NULL)) {
                            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 228;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_23);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 228;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[108]);

                Py_DECREF(tmp_called_value_23);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 229;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[69]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 230;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 3, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 231;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 4, tmp_tuple_element_7);
                tmp_called_value_24 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_24 == NULL)) {
                            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_24);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 232;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[103]);

                Py_DECREF(tmp_called_value_24);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 5, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 233;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 6, tmp_tuple_element_7);
                tmp_called_value_25 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 234;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 234;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[104]);

                Py_DECREF(tmp_called_value_25);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 7, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 235;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 8, tmp_tuple_element_7);
                tmp_called_value_26 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 236;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 236;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[113]);

                Py_DECREF(tmp_called_value_26);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 9, tmp_tuple_element_7);
                tmp_expression_value_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[65]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 237;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_subscript_value_6 = mod_consts[105];
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 10, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_value_5);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_kwargs_value_5 = DICT_COPY(mod_consts[118]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 226;
            tmp_called_value_21 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_value_5);
            Py_DECREF(tmp_kwargs_value_5);
            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[115]);
            tmp_annotations_5 = DICT_COPY(mod_consts[116]);

            tmp_closure_6[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(tmp_kw_defaults_2, tmp_annotations_5, tmp_closure_6);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_6;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_called_value_28 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 252;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 253;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_6 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_called_value_30;
                PyObject *tmp_called_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_7;
                PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_8);
                tmp_called_value_29 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 254;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[108]);

                Py_DECREF(tmp_called_value_29);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 2, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[69]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 3, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 257;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 4, tmp_tuple_element_8);
                tmp_called_value_30 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_30 == NULL)) {
                            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 258;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_30);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 258;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[103]);

                Py_DECREF(tmp_called_value_30);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 5, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 259;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 6, tmp_tuple_element_8);
                tmp_called_value_31 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 260;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 260;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[104]);

                Py_DECREF(tmp_called_value_31);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 7, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 261;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 8, tmp_tuple_element_8);
                tmp_called_value_32 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 262;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[113]);

                Py_DECREF(tmp_called_value_32);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 9, tmp_tuple_element_8);
                tmp_expression_value_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[65]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 263;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_subscript_value_7 = mod_consts[105];
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 10, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_value_6);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_kwargs_value_6 = DICT_COPY(mod_consts[120]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 252;
            tmp_called_value_27 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_value_6);
            Py_DECREF(tmp_kwargs_value_6);
            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_3 = DICT_COPY(mod_consts[115]);
            tmp_annotations_6 = DICT_COPY(mod_consts[116]);

            tmp_closure_7[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(tmp_kw_defaults_3, tmp_annotations_6, tmp_closure_7);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 252;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_kw_defaults_4;
            PyObject *tmp_annotations_7;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_called_value_34 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 279;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_7 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_called_value_36;
                PyObject *tmp_called_value_37;
                PyObject *tmp_called_value_38;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_8;
                PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_9);
                tmp_called_value_35 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 280;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 280;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[108]);

                Py_DECREF(tmp_called_value_35);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 1, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 281;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 2, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[69]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 282;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 3, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 283;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 4, tmp_tuple_element_9);
                tmp_called_value_36 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_36 == NULL)) {
                            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 284;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_36);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 284;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[103]);

                Py_DECREF(tmp_called_value_36);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 284;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 5, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 285;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 6, tmp_tuple_element_9);
                tmp_called_value_37 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 286;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 286;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[104]);

                Py_DECREF(tmp_called_value_37);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 7, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 287;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 8, tmp_tuple_element_9);
                tmp_called_value_38 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_38 == NULL)) {
                            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 288;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_38);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 288;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_38, mod_consts[113]);

                Py_DECREF(tmp_called_value_38);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 9, tmp_tuple_element_9);
                tmp_expression_value_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[65]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 289;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_subscript_value_8 = mod_consts[105];
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 10, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_value_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_7 = DICT_COPY(mod_consts[122]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 278;
            tmp_called_value_33 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_value_7);
            Py_DECREF(tmp_kwargs_value_7);
            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_4 = DICT_COPY(mod_consts[115]);
            tmp_annotations_7 = DICT_COPY(mod_consts[116]);

            tmp_closure_8[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(tmp_kw_defaults_4, tmp_annotations_7, tmp_closure_8);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 278;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_8;
            struct Nuitka_CellObject *tmp_closure_9[1];
            tmp_called_value_40 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_8 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_called_value_43;
                PyObject *tmp_called_value_44;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_9;
                PyTuple_SET_ITEM(tmp_args_value_8, 0, tmp_tuple_element_10);
                tmp_called_value_41 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_41 == NULL)) {
                            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 306;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_41);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 306;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[108]);

                Py_DECREF(tmp_called_value_41);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[69]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 307;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 2, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 308;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 3, tmp_tuple_element_10);
                tmp_called_value_42 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 309;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 309;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[103]);

                Py_DECREF(tmp_called_value_42);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 4, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 5, tmp_tuple_element_10);
                tmp_called_value_43 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_43 == NULL)) {
                            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_43);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 311;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_43, mod_consts[104]);

                Py_DECREF(tmp_called_value_43);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 6, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 312;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 7, tmp_tuple_element_10);
                tmp_called_value_44 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_44 == NULL)) {
                            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 313;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_44);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 313;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_44, mod_consts[113]);

                Py_DECREF(tmp_called_value_44);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 313;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 8, tmp_tuple_element_10);
                tmp_expression_value_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[65]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_subscript_value_9 = mod_consts[105];
                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 314;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 9, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_value_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_value_8 = DICT_COPY(mod_consts[124]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 304;
            tmp_called_value_39 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_value_8);
            Py_DECREF(tmp_kwargs_value_8);
            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[125];
            tmp_annotations_8 = DICT_COPY(mod_consts[116]);
            Py_INCREF(tmp_defaults_3);

            tmp_closure_9[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_9[0]);

            tmp_args_element_value_8 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(tmp_defaults_3, tmp_annotations_8, tmp_closure_9);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_9;
            struct Nuitka_CellObject *tmp_closure_10[1];
            tmp_called_value_46 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 328;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_9 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_47;
                PyObject *tmp_called_value_48;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_called_value_49;
                PyObject *tmp_called_value_50;
                PyObject *tmp_called_value_51;
                PyObject *tmp_called_value_52;
                PyObject *tmp_called_value_53;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_called_value_54;
                PyObject *tmp_called_value_55;
                PyObject *tmp_called_value_56;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_called_value_57;
                PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_11);
                tmp_called_value_47 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_47 == NULL)) {
                            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_47 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_47);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 329;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_47, mod_consts[108]);

                Py_DECREF(tmp_called_value_47);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 329;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 1, tmp_tuple_element_11);
                tmp_called_value_49 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 330;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 330;
                tmp_expression_value_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[127]);

                Py_DECREF(tmp_called_value_49);
                if (tmp_expression_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[128]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_called_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 330;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_48, mod_consts[129]);

                Py_DECREF(tmp_called_value_48);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 3, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 338;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 4, tmp_tuple_element_11);
                tmp_called_value_50 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_50 == NULL)) {
                            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 339;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_50);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 339;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[103]);

                Py_DECREF(tmp_called_value_50);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 339;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 5, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 340;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 6, tmp_tuple_element_11);
                tmp_called_value_51 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_51 == NULL)) {
                            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 341;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_51);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 341;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[104]);

                Py_DECREF(tmp_called_value_51);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 7, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[130];
                PyTuple_SET_ITEM0(tmp_args_value_9, 8, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 343;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 9, tmp_tuple_element_11);
                tmp_called_value_52 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 344;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 344;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_52, mod_consts[113]);

                Py_DECREF(tmp_called_value_52);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 344;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 10, tmp_tuple_element_11);
                tmp_called_value_54 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 345;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 345;
                tmp_expression_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[131]);

                Py_DECREF(tmp_called_value_54);
                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 345;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[128]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_called_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 345;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 345;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_53, mod_consts[129]);

                Py_DECREF(tmp_called_value_53);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 345;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 11, tmp_tuple_element_11);
                tmp_called_value_55 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_55 == NULL)) {
                            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 353;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_55);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 353;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[132]);

                Py_DECREF(tmp_called_value_55);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 353;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 12, tmp_tuple_element_11);
                tmp_called_value_57 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 354;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 354;
                tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[133]);

                Py_DECREF(tmp_called_value_57);
                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[128]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_called_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 354;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_56, mod_consts[129]);

                Py_DECREF(tmp_called_value_56);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 13, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_value_9);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_value_9 = DICT_COPY(mod_consts[134]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 327;
            tmp_called_value_45 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_value_9);
            Py_DECREF(tmp_kwargs_value_9);
            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_4 = mod_consts[135];
            tmp_annotations_9 = DICT_COPY(mod_consts[136]);
            Py_INCREF(tmp_defaults_4);

            tmp_closure_10[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_10[0]);

            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(tmp_defaults_4, tmp_annotations_9, tmp_closure_10);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_58;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_11[1];
            tmp_called_value_59 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_59);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_59);

                        exception_lineno = 378;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_10 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_60;
                PyObject *tmp_called_value_61;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_called_value_62;
                PyObject *tmp_called_value_63;
                PyObject *tmp_called_value_64;
                PyObject *tmp_called_value_65;
                PyObject *tmp_called_value_66;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_called_value_67;
                PyObject *tmp_called_value_68;
                PyObject *tmp_called_value_69;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_called_value_70;
                PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_12);
                tmp_called_value_60 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 379;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 379;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[108]);

                Py_DECREF(tmp_called_value_60);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 379;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 1, tmp_tuple_element_12);
                tmp_called_value_62 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_62 == NULL)) {
                            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 380;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_62);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 380;
                tmp_expression_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[127]);

                Py_DECREF(tmp_called_value_62);
                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[128]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_called_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 380;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_61, mod_consts[129]);

                Py_DECREF(tmp_called_value_61);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 2, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 387;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 3, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 388;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 4, tmp_tuple_element_12);
                tmp_called_value_63 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 389;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 389;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[103]);

                Py_DECREF(tmp_called_value_63);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 389;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 5, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 390;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 6, tmp_tuple_element_12);
                tmp_called_value_64 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_64 == NULL)) {
                            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_64 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 391;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_64);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 391;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_64, mod_consts[104]);

                Py_DECREF(tmp_called_value_64);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 7, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[138];
                PyTuple_SET_ITEM0(tmp_args_value_10, 8, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 393;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 9, tmp_tuple_element_12);
                tmp_called_value_65 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_65 == NULL)) {
                            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_65 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 394;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_65);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 394;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[113]);

                Py_DECREF(tmp_called_value_65);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 394;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 10, tmp_tuple_element_12);
                tmp_called_value_67 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_67 == NULL)) {
                            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_67 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 395;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_67);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 395;
                tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_67, mod_consts[139]);

                Py_DECREF(tmp_called_value_67);
                if (tmp_expression_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 395;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[128]);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_called_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 395;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 395;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_66, mod_consts[129]);

                Py_DECREF(tmp_called_value_66);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 395;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 11, tmp_tuple_element_12);
                tmp_called_value_68 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 403;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 403;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_68, mod_consts[132]);

                Py_DECREF(tmp_called_value_68);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 403;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 12, tmp_tuple_element_12);
                tmp_called_value_70 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 404;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 404;
                tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[140]);

                Py_DECREF(tmp_called_value_70);
                if (tmp_expression_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 404;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[128]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_called_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 404;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 404;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_69, mod_consts[129]);

                Py_DECREF(tmp_called_value_69);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 404;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 13, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_value_10);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_kwargs_value_10 = DICT_COPY(mod_consts[141]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 377;
            tmp_called_value_58 = CALL_FUNCTION(tstate, tmp_called_value_59, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_value_10);
            Py_DECREF(tmp_kwargs_value_10);
            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_5 = mod_consts[135];
            tmp_annotations_10 = DICT_COPY(mod_consts[136]);
            Py_INCREF(tmp_defaults_5);

            tmp_closure_11[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_11[0]);

            tmp_args_element_value_10 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(tmp_defaults_5, tmp_annotations_10, tmp_closure_11);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 377;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_71;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_11;
            struct Nuitka_CellObject *tmp_closure_12[1];
            tmp_called_value_72 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_72 == NULL)) {
                        tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 427;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_72);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_72);

                        exception_lineno = 428;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_11 = MAKE_TUPLE_EMPTY(13);
            {
                PyObject *tmp_called_value_73;
                PyObject *tmp_called_value_74;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_called_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_called_value_77;
                PyObject *tmp_called_value_78;
                PyObject *tmp_called_value_79;
                PyObject *tmp_called_value_80;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_called_value_81;
                PyTuple_SET_ITEM(tmp_args_value_11, 0, tmp_tuple_element_13);
                tmp_called_value_73 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_73 == NULL)) {
                            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_73 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 429;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_73);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 429;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_73, mod_consts[108]);

                Py_DECREF(tmp_called_value_73);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 429;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 1, tmp_tuple_element_13);
                tmp_called_value_75 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_75 == NULL)) {
                            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 430;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_75);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 430;
                tmp_expression_value_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[127]);

                Py_DECREF(tmp_called_value_75);
                if (tmp_expression_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 430;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[128]);
                Py_DECREF(tmp_expression_value_21);
                if (tmp_called_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 430;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 430;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_74, mod_consts[129]);

                Py_DECREF(tmp_called_value_74);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 430;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 2, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[62]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 437;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 3, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 438;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 4, tmp_tuple_element_13);
                tmp_called_value_76 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_76 == NULL)) {
                            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 439;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_76);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 439;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_76, mod_consts[103]);

                Py_DECREF(tmp_called_value_76);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 439;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 5, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 440;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 6, tmp_tuple_element_13);
                tmp_called_value_77 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_77 == NULL)) {
                            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 441;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_77);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 441;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[104]);

                Py_DECREF(tmp_called_value_77);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 441;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 7, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 442;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 8, tmp_tuple_element_13);
                tmp_called_value_78 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_78 == NULL)) {
                            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 443;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_78);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 443;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_78, mod_consts[113]);

                Py_DECREF(tmp_called_value_78);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 443;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 9, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[143];
                PyTuple_SET_ITEM0(tmp_args_value_11, 10, tmp_tuple_element_13);
                tmp_called_value_79 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_79 == NULL)) {
                            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_79 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 445;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_79);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 445;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_79, mod_consts[132]);

                Py_DECREF(tmp_called_value_79);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 445;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 11, tmp_tuple_element_13);
                tmp_called_value_81 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_81 == NULL)) {
                            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_81 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 446;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_81);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 446;
                tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_81, mod_consts[144]);

                Py_DECREF(tmp_called_value_81);
                if (tmp_expression_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 446;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[128]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_called_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 446;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 446;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_80, mod_consts[129]);

                Py_DECREF(tmp_called_value_80);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 446;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 12, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_value_11);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_kwargs_value_11 = DICT_COPY(mod_consts[145]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 427;
            tmp_called_value_71 = CALL_FUNCTION(tstate, tmp_called_value_72, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_value_11);
            Py_DECREF(tmp_kwargs_value_11);
            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_6 = mod_consts[135];
            tmp_annotations_11 = DICT_COPY(mod_consts[136]);
            Py_INCREF(tmp_defaults_6);

            tmp_closure_12[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_12[0]);

            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(tmp_defaults_6, tmp_annotations_11, tmp_closure_12);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 427;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_82;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_12;
            PyObject *tmp_args_element_value_12;
            struct Nuitka_CellObject *tmp_closure_13[1];
            tmp_called_value_83 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_83 == NULL)) {
                        tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_83 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 465;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_83);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_83);

                        exception_lineno = 466;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_12 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_84;
                PyObject *tmp_called_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_called_value_87;
                PyTuple_SET_ITEM(tmp_args_value_12, 0, tmp_tuple_element_14);
                tmp_called_value_84 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_84 == NULL)) {
                            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_84 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 467;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_84);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 467;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_84, mod_consts[108]);

                Py_DECREF(tmp_called_value_84);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 467;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 468;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 2, tmp_tuple_element_14);
                tmp_called_value_85 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 469;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 469;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_85, mod_consts[103]);

                Py_DECREF(tmp_called_value_85);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 469;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 3, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 470;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 4, tmp_tuple_element_14);
                tmp_called_value_86 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_86 == NULL)) {
                            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_86 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 471;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_86);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 471;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_86, mod_consts[104]);

                Py_DECREF(tmp_called_value_86);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 471;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 5, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[147];
                PyTuple_SET_ITEM0(tmp_args_value_12, 6, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 473;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 7, tmp_tuple_element_14);
                tmp_called_value_87 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_87 == NULL)) {
                            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_87 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 474;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_87);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 474;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_87, mod_consts[113]);

                Py_DECREF(tmp_called_value_87);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 474;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 8, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[148];
                PyTuple_SET_ITEM0(tmp_args_value_12, 9, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_value_12);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_kwargs_value_12 = DICT_COPY(mod_consts[149]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 465;
            tmp_called_value_82 = CALL_FUNCTION(tstate, tmp_called_value_83, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_13[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_13[0]);

            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(tmp_closure_13);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 465;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_88;
            PyObject *tmp_called_value_89;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_13;
            PyObject *tmp_args_element_value_13;
            struct Nuitka_CellObject *tmp_closure_14[1];
            tmp_called_value_89 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_89 == NULL)) {
                        tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_89 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 483;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_89);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_89);

                        exception_lineno = 484;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_13 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_90;
                PyObject *tmp_called_value_91;
                PyObject *tmp_called_value_92;
                PyObject *tmp_called_value_93;
                PyObject *tmp_called_value_94;
                PyObject *tmp_called_value_95;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_called_value_96;
                PyTuple_SET_ITEM(tmp_args_value_13, 0, tmp_tuple_element_15);
                tmp_called_value_90 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_90 == NULL)) {
                            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_90 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 485;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_90);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 485;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_90, mod_consts[108]);

                Py_DECREF(tmp_called_value_90);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 1, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 486;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 2, tmp_tuple_element_15);
                tmp_called_value_91 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 487;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 487;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_91, mod_consts[103]);

                Py_DECREF(tmp_called_value_91);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 3, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 488;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 4, tmp_tuple_element_15);
                tmp_called_value_92 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 489;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 489;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_92, mod_consts[104]);

                Py_DECREF(tmp_called_value_92);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 489;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 5, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[151];
                PyTuple_SET_ITEM0(tmp_args_value_13, 6, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 491;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 7, tmp_tuple_element_15);
                tmp_called_value_93 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_93 == NULL)) {
                            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 492;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_93);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 492;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_93, mod_consts[113]);

                Py_DECREF(tmp_called_value_93);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 8, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[152];
                PyTuple_SET_ITEM0(tmp_args_value_13, 9, tmp_tuple_element_15);
                tmp_called_value_94 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 494;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 494;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_94, mod_consts[132]);

                Py_DECREF(tmp_called_value_94);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 494;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 10, tmp_tuple_element_15);
                tmp_called_value_96 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_96 == NULL)) {
                            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 495;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_96);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 495;
                tmp_expression_value_23 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_96, mod_consts[153]);

                Py_DECREF(tmp_called_value_96);
                if (tmp_expression_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 495;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[128]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_called_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 495;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 495;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_95, mod_consts[129]);

                Py_DECREF(tmp_called_value_95);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 495;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 11, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_value_13);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_kwargs_value_13 = DICT_COPY(mod_consts[154]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 483;
            tmp_called_value_88 = CALL_FUNCTION(tstate, tmp_called_value_89, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_value_13);
            Py_DECREF(tmp_kwargs_value_13);
            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_14[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_14[0]);

            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(tmp_closure_14);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 483;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_12;
            struct Nuitka_CellObject *tmp_closure_15[1];
            tmp_called_value_98 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_98 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_98 == NULL)) {
                        tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_98 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 523;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_98);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_98);

                        exception_lineno = 524;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_14 = MAKE_TUPLE_EMPTY(8);
            {
                PyObject *tmp_called_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_called_value_101;
                PyObject *tmp_called_value_102;
                PyObject *tmp_called_value_103;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_10;
                PyTuple_SET_ITEM(tmp_args_value_14, 0, tmp_tuple_element_16);
                tmp_called_value_99 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_99 == NULL)) {
                            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_99 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 525;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_99);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 525;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_99, mod_consts[108]);

                Py_DECREF(tmp_called_value_99);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 525;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 1, tmp_tuple_element_16);
                tmp_called_value_101 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_101 == NULL)) {
                            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_101 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 526;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_101);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 526;
                tmp_expression_value_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_101, mod_consts[156]);

                Py_DECREF(tmp_called_value_101);
                if (tmp_expression_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 526;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[128]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_called_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 526;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 526;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_100, mod_consts[129]);

                Py_DECREF(tmp_called_value_100);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 526;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 2, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 542;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 3, tmp_tuple_element_16);
                tmp_called_value_102 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_102 == NULL)) {
                            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_102 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 543;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_102);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 543;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_102, mod_consts[103]);

                Py_DECREF(tmp_called_value_102);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 543;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 4, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 544;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 5, tmp_tuple_element_16);
                tmp_called_value_103 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_103 == NULL)) {
                            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_103 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 545;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_103);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 545;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_103, mod_consts[104]);

                Py_DECREF(tmp_called_value_103);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 545;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 6, tmp_tuple_element_16);
                tmp_expression_value_25 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 546;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                tmp_subscript_value_10 = mod_consts[105];
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 546;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 7, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_value_14);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_kwargs_value_14 = DICT_COPY(mod_consts[157]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 523;
            tmp_called_value_97 = CALL_FUNCTION(tstate, tmp_called_value_98, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_value_14);
            Py_DECREF(tmp_kwargs_value_14);
            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_7 = mod_consts[158];
            tmp_annotations_12 = DICT_COPY(mod_consts[159]);
            Py_INCREF(tmp_defaults_7);

            tmp_closure_15[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_15[0]);

            tmp_args_element_value_14 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(tmp_defaults_7, tmp_annotations_12, tmp_closure_15);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 523;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_104;
            PyObject *tmp_called_value_105;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_15;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_16[1];
            tmp_called_value_105 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_105 == NULL)) {
                        tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_105 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 563;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_105);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_17 == NULL)) {
                        tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_105);

                        exception_lineno = 564;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_15 = MAKE_TUPLE_EMPTY(8);
            {
                PyObject *tmp_called_value_106;
                PyObject *tmp_called_value_107;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_called_value_108;
                PyObject *tmp_called_value_109;
                PyObject *tmp_called_value_110;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_11;
                PyTuple_SET_ITEM(tmp_args_value_15, 0, tmp_tuple_element_17);
                tmp_called_value_106 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_106 == NULL)) {
                            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_106 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 565;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_106);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 565;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_106, mod_consts[108]);

                Py_DECREF(tmp_called_value_106);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 565;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 1, tmp_tuple_element_17);
                tmp_called_value_108 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_108 == NULL)) {
                            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_108 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 566;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_108);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 566;
                tmp_expression_value_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_108, mod_consts[161]);

                Py_DECREF(tmp_called_value_108);
                if (tmp_expression_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 566;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[128]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_called_value_107 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 566;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 566;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_107, mod_consts[129]);

                Py_DECREF(tmp_called_value_107);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 566;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 2, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 583;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 3, tmp_tuple_element_17);
                tmp_called_value_109 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_109 == NULL)) {
                            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_109 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 584;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_109);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 584;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_109, mod_consts[103]);

                Py_DECREF(tmp_called_value_109);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 584;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 4, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 585;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 5, tmp_tuple_element_17);
                tmp_called_value_110 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_110 == NULL)) {
                            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_110 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 586;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_110);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 586;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_110, mod_consts[104]);

                Py_DECREF(tmp_called_value_110);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 586;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 6, tmp_tuple_element_17);
                tmp_expression_value_27 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 587;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                tmp_subscript_value_11 = mod_consts[105];
                tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 587;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 7, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_value_15);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_15 = DICT_COPY(mod_consts[162]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 563;
            tmp_called_value_104 = CALL_FUNCTION(tstate, tmp_called_value_105, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_value_15);
            Py_DECREF(tmp_kwargs_value_15);
            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_8 = mod_consts[163];
            tmp_annotations_13 = DICT_COPY(mod_consts[164]);
            Py_INCREF(tmp_defaults_8);

            tmp_closure_16[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_16[0]);

            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_cov(tmp_defaults_8, tmp_annotations_13, tmp_closure_16);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 563;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_111;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_14;
            struct Nuitka_CellObject *tmp_closure_17[1];
            tmp_called_value_112 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[58]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[58]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 601;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[66]);

            if (tmp_tuple_element_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_18 == NULL)) {
                        tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                    }

                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);

                        exception_lineno = 602;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_16 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_113;
                PyObject *tmp_called_value_114;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_called_value_115;
                PyObject *tmp_called_value_116;
                PyObject *tmp_called_value_117;
                PyObject *tmp_called_value_118;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_called_value_119;
                PyObject *tmp_called_value_120;
                PyObject *tmp_called_value_121;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_called_value_122;
                PyTuple_SET_ITEM(tmp_args_value_16, 0, tmp_tuple_element_18);
                tmp_called_value_113 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 603;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 603;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_113, mod_consts[108]);

                Py_DECREF(tmp_called_value_113);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 603;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 1, tmp_tuple_element_18);
                tmp_called_value_115 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 604;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 604;
                tmp_expression_value_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_115, mod_consts[166]);

                Py_DECREF(tmp_called_value_115);
                if (tmp_expression_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 604;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                tmp_called_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[128]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_called_value_114 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 604;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 604;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_114, mod_consts[129]);

                Py_DECREF(tmp_called_value_114);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 604;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 2, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[64]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 618;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 3, tmp_tuple_element_18);
                tmp_called_value_116 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_116 == NULL)) {
                            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 619;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_116);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 619;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_116, mod_consts[103]);

                Py_DECREF(tmp_called_value_116);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 619;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 4, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[67]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 620;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 5, tmp_tuple_element_18);
                tmp_called_value_117 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 621;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_117);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 621;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_117, mod_consts[104]);

                Py_DECREF(tmp_called_value_117);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 6, tmp_tuple_element_18);
                tmp_called_value_119 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_119 == NULL)) {
                            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_119 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 622;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_119);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 622;
                tmp_expression_value_29 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_119, mod_consts[167]);

                Py_DECREF(tmp_called_value_119);
                if (tmp_expression_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 622;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[128]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_called_value_118 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 622;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 622;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_118, mod_consts[129]);

                Py_DECREF(tmp_called_value_118);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 622;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 7, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[68]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 628;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 8, tmp_tuple_element_18);
                tmp_called_value_120 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[63]);

                if (tmp_called_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_120 == NULL)) {
                            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_called_value_120 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 629;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_120);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 629;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_120, mod_consts[113]);

                Py_DECREF(tmp_called_value_120);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 629;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 9, tmp_tuple_element_18);
                tmp_called_value_122 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[45]);

                if (tmp_called_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_122 == NULL)) {
                            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_122 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 630;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_122);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 630;
                tmp_expression_value_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_122, mod_consts[168]);

                Py_DECREF(tmp_called_value_122);
                if (tmp_expression_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 630;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                tmp_called_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[128]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_called_value_121 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 630;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 630;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_121, mod_consts[129]);

                Py_DECREF(tmp_called_value_121);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 630;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 10, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_16);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_kwargs_value_16 = DICT_COPY(mod_consts[169]);
            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 601;
            tmp_called_value_111 = CALL_FUNCTION(tstate, tmp_called_value_112, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_16);
            Py_DECREF(tmp_kwargs_value_16);
            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_9 = mod_consts[163];
            tmp_annotations_14 = DICT_COPY(mod_consts[164]);
            Py_INCREF(tmp_defaults_9);

            tmp_closure_17[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_17[0]);

            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_corr(tmp_defaults_9, tmp_annotations_14, tmp_closure_17);

            frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame.f_lineno = 601;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_111, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_377f7bf24f3c3a68625d8c957c8a6498_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_377f7bf24f3c3a68625d8c957c8a6498_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_377f7bf24f3c3a68625d8c957c8a6498_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_377f7bf24f3c3a68625d8c957c8a6498_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_377f7bf24f3c3a68625d8c957c8a6498_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_40, mod_consts[171], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_123;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_123 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_19 = mod_consts[79];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_19 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pandas$core$window$expanding$$$class__1_Expanding_40;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_1__class_decl_dict;
            frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 40;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_123, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_40);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_39 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_40);
        locals_pandas$core$window$expanding$$$class__1_Expanding_40 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_40);
        locals_pandas$core$window$expanding$$$class__1_Expanding_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 40;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_39);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_20);
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 1, tmp_tuple_element_20);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_assign_source_41);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_42 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_31 = tmp_class_creation_2__bases;
        tmp_subscript_value_12 = mod_consts[44];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_12, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_32 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[78]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_18;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_18;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_33 = tmp_class_creation_2__metaclass;
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[78]);
        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_tuple_element_21 = mod_consts[172];
        tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_21 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_18 = tmp_class_creation_2__class_decl_dict;
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 667;
        tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_124, tmp_args_value_18, tmp_kwargs_value_18);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_value_18);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_34 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[80]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_35 = tmp_class_creation_2__metaclass;
        tmp_name_value_9 = mod_consts[82];
        tmp_default_value_2 = mod_consts[83];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_9, tmp_default_value_2);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[82]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 667;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_46;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_11;
        }
        frame_7e67b7f72890e0a1e2dc2b7653dc5352_3 = MAKE_CLASS_FRAME(tstate, codeobj_7e67b7f72890e0a1e2dc2b7653dc5352, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7e67b7f72890e0a1e2dc2b7653dc5352_3);
        assert(Py_REFCNT(frame_7e67b7f72890e0a1e2dc2b7653dc5352_3) == 2);

        // Framed code:
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            tmp_expression_value_37 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[79]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 672;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[89]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_38 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[76]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_add_expr_left_1);

                        exception_lineno = 672;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[89]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 672;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[174]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__19__get_window_indexer(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7e67b7f72890e0a1e2dc2b7653dc5352_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7e67b7f72890e0a1e2dc2b7653dc5352_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7e67b7f72890e0a1e2dc2b7653dc5352_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7e67b7f72890e0a1e2dc2b7653dc5352_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_7e67b7f72890e0a1e2dc2b7653dc5352_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667, mod_consts[171], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_11;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_125;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_125 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_23 = mod_consts[172];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_23 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_2__class_decl_dict;
            frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 667;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_125, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_47 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_667 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 667;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_47);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09133c0f352811827f43c45613c3b7a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09133c0f352811827f43c45613c3b7a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09133c0f352811827f43c45613c3b7a8, exception_lineno);
    }



    assertFrameObject(frame_09133c0f352811827f43c45613c3b7a8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.window.expanding", false);

    Py_INCREF(module_pandas$core$window$expanding);
    return module_pandas$core$window$expanding;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$window$expanding", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
